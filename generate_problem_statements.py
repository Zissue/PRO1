#!/usr/bin/env python3
"""
Script to generate Problem.md files by analyzing C++ solutions.
This reverse-engineers problem statements from the code logic.
"""

import os
import re
import sys
from pathlib import Path

def analyze_cpp_file(filepath):
    """Analyze a C++ file and extract information about what it does."""
    try:
        with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
    except Exception as e:
        return None
    
    info = {
        'inputs': [],
        'outputs': [],
        'logic': [],
        'data_structures': [],
        'functions': []
    }
    
    # Detect input operations
    if 'cin >>' in content:
        # Count variables being read
        cin_matches = re.findall(r'cin\s*>>\s*(\w+)', content)
        info['inputs'] = list(set(cin_matches))
    
    # Detect output operations
    if 'cout <<' in content:
        info['has_output'] = True
        # Check for specific output patterns
        if 'endl' in content:
            info['outputs'].append('line-based output')
    
    # Detect data structures
    if 'vector' in content:
        info['data_structures'].append('vector')
    if 'string' in content:
        info['data_structures'].append('string')
    if 'map' in content or 'unordered_map' in content:
        info['data_structures'].append('map')
    if 'set' in content or 'unordered_set' in content:
        info['data_structures'].append('set')
    
    # Detect algorithms/patterns
    if 'sort(' in content:
        info['logic'].append('sorting')
    if 'for' in content and 'for' in content:
        if content.count('for') > 1:
            info['logic'].append('nested loops / matrix operations')
    if 'while' in content:
        info['logic'].append('loop until condition')
    if 'recursiv' in content.lower() or (content.count('(') > 10 and 'function' in content):
        info['logic'].append('recursive approach')
    
    # Extract function names
    func_pattern = r'\b(?:int|void|double|bool|string|vector<\w+>)\s+(\w+)\s*\('
    functions = re.findall(func_pattern, content)
    info['functions'] = [f for f in functions if f != 'main']
    
    return info

def generate_problem_md(problem_id, cpp_file, output_dir):
    """Generate a Problem.md file based on the C++ solution analysis."""
    
    info = analyze_cpp_file(cpp_file)
    if not info:
        return False
    
    # Read the actual code to understand better
    with open(cpp_file, 'r', encoding='utf-8', errors='ignore') as f:
        code_lines = f.readlines()
    
    # Try to understand the problem from code
    problem_desc = infer_problem_description(problem_id, info, code_lines)
    
    md_content = f"""# Problem {problem_id}

## Problem Description

{problem_desc}

## Input Format

{generate_input_description(info, code_lines)}

## Output Format

{generate_output_description(info, code_lines)}

## Approach

{generate_approach_description(info)}

## Solution

The solution is implemented in `{os.path.basename(cpp_file)}`.

---

*Note: This problem statement was reverse-engineered from the solution code. For the official problem statement, please refer to [Jutge.org](https://jutge.org/) problem {problem_id}.*
"""
    
    output_file = os.path.join(output_dir, 'Problem.md')
    with open(output_file, 'w', encoding='utf-8') as f:
        f.write(md_content)
    
    return True

def infer_problem_description(problem_id, info, code_lines):
    """Infer what the problem is asking based on code analysis."""
    code_str = ''.join(code_lines)
    code_lower = code_str.lower()
    
    description_parts = []
    
    # Analyze output patterns to understand what's being computed
    cout_lines = [l.strip() for l in code_lines if 'cout' in l]
    
    # Check for specific problem patterns
    if 'calcula_cims' in code_str or 'cims' in code_lower:
        description_parts.append("Calculate and output the peaks (local maxima) in a sequence of numbers.")
        description_parts.append("A peak is a value that is greater than both its neighbors.")
    elif 'rampa' in code_lower:
        description_parts.append("Identify ramp positions in a sequence where values are strictly increasing or decreasing.")
        description_parts.append("Find potentially conflicting positions based on ramp patterns.")
    elif ('orden' in code_lower or 'order' in code_lower) and 'abc' in code_lower:
        description_parts.append("Read three numbers and a string specifying the desired order.")
        description_parts.append("Sort the three numbers and output them in the order specified by the string.")
    elif 'out of bounds' in code_str:
        description_parts.append("Simulate movement on a grid with boundary checking.")
        description_parts.append("Process directional commands (up, down, left, right) and track position.")
        description_parts.append("Stop when going out of bounds or receiving an incorrect command.")
    elif 'diagonal' in code_lower or ('\\\\' in code_str and '/' in code_str and '+' in code_str):
        description_parts.append("Generate a square pattern with borders and diagonals.")
        description_parts.append("The pattern uses specific characters for borders (+, -, |) and diagonals (\\, /).")
    elif 'min(' in code_str and 'vector' in code_str:
        description_parts.append("Find and output the minimum value in a vector of numbers.")
    elif 'max(' in code_str and 'vector' in code_str:
        description_parts.append("Find and output the maximum value in a vector of numbers.")
    elif 'sort' in info['logic']:
        description_parts.append("Sort the input data and process it according to specific requirements.")
    elif 'factorial' in code_lower:
        description_parts.append("Calculate and output factorial values.")
    elif 'fibonacci' in code_lower or 'fib' in code_lower:
        description_parts.append("Calculate Fibonacci sequence values.")
    elif 'prime' in code_lower or 'prim' in code_lower:
        description_parts.append("Work with prime numbers - checking primality or generating primes.")
    elif 'palindrom' in code_lower:
        description_parts.append("Check if input forms a palindrome or process palindromic patterns.")
    
    # If no specific pattern found, give general description
    if not description_parts:
        description_parts.append("Process input data according to specific algorithmic requirements.")
        
        # Add hints based on data structures and patterns
        if 'vector' in info['data_structures']:
            description_parts.append("- Works with sequences/arrays of data")
        if 'string' in info['data_structures']:
            description_parts.append("- Processes text/string data")
        if 'nested loops' in str(info['logic']):
            description_parts.append("- Uses nested iteration (possibly for matrix/grid operations)")
        if 'recursiv' in code_lower:
            description_parts.append("- Uses recursive approach")
        
        description_parts.append("\n*For exact requirements, refer to the solution code in this directory.*")
    
    return '\n'.join(description_parts)

def generate_input_description(info, code_lines):
    """Generate input format description."""
    code_str = ''.join(code_lines)
    input_desc = []
    
    # Check for common patterns
    if 'while (cin' in code_str:
        input_desc.append("- Multiple test cases (read until end of input)")
    
    # Look for variable declarations and cin patterns
    cin_patterns = re.findall(r'cin\s*>>\s*(\w+)', code_str)
    
    if 'cin >> n' in code_str and 'cin >> m' in code_str:
        input_desc.append("- Two integers: `n` and `m` (dimensions or parameters)")
    elif 'cin >> n' in code_str:
        if 'vector' in code_str or 'for (int i' in code_str:
            input_desc.append("- First line: an integer `n` (number of elements)")
            input_desc.append("- Next: `n` values to process")
        else:
            input_desc.append("- An integer `n` as specified by the problem")
    
    if 'cin >> x >> y >> z' in code_str:
        input_desc.append("- Three values: `x`, `y`, `z`")
    
    if 'cin >> s' in code_str or 'cin >> orden' in code_str or 'string' in code_str:
        if 'orden' in code_str or 'order' in code_str:
            input_desc.append("- A string specifying the desired order/operation")
    
    if 'posX' in code_str and 'posY' in code_str:
        input_desc.append("- Initial position coordinates")
        input_desc.append("- Sequence of directional commands")
    
    if not input_desc:
        input_desc.append("- See the solution code for exact input format")
    
    return '\n'.join(input_desc)

def generate_output_description(info, code_lines):
    """Generate output format description."""
    code_str = ''.join(code_lines)
    output_desc = []
    
    # Analyze cout statements
    cout_lines = [l for l in code_lines if 'cout' in l]
    
    if 'out of bounds' in code_str:
        output_desc.append("- Output the current position after each valid move")
        output_desc.append("- Output 'out of bounds' or 'incorrect order' when appropriate")
    elif any('j << ": "' in l or '<< ": "' in l for l in cout_lines):
        output_desc.append("- Output count followed by colon and the list of values")
    elif 'posicions amb rampa' in code_str:
        output_desc.append("- Output positions where ramps are found")
        output_desc.append("- Output count of potentially conflictive positions")
    elif any('+' in l and '-' in l and '|' in l for l in cout_lines):
        output_desc.append("- Output the generated pattern")
        output_desc.append("- Empty line between test cases")
    elif 'min(' in code_str or 'max(' in code_str:
        output_desc.append("- Output the minimum/maximum value found")
    elif 'endl' in code_str:
        output_desc.append("- Output results, one per line")
    
    if not output_desc:
        output_desc.append("- See the solution code for exact output format")
    
    return '\n'.join(output_desc)

def generate_approach_description(info):
    """Generate approach description."""
    approach = []
    
    if info['data_structures']:
        approach.append(f"- Uses: {', '.join(info['data_structures'])}")
    
    if info['logic']:
        approach.append(f"- Algorithm: {', '.join(info['logic'])}")
    
    if info['functions']:
        approach.append(f"- Helper functions: {', '.join(info['functions'][:3])}")
    
    if not approach:
        approach.append("- Direct implementation following the problem requirements")
    
    return '\n'.join(approach)

def main():
    """Main function to process all problem directories."""
    repo_root = Path(__file__).parent
    pro1_dir = repo_root / 'pro1'
    
    processed = 0
    skipped = 0
    
    # Process problem directories
    for pattern in ['p[0-9]*', 'conso[0-9]*', 'controls[0-9]*', 'S[0-9]*']:
        for category_dir in pro1_dir.glob(pattern):
            if not category_dir.is_dir():
                continue
            
            # Find problem subdirectories
            for problem_dir in category_dir.iterdir():
                if not problem_dir.is_dir():
                    continue
                
                # Skip if Problem.md already exists
                if (problem_dir / 'Problem.md').exists():
                    skipped += 1
                    continue
                
                # Find .cc file
                cc_files = list(problem_dir.glob('*.cc'))
                if not cc_files:
                    continue
                
                # Use the first .cc file (usually the main solution)
                cc_file = cc_files[0]
                problem_id = problem_dir.name
                
                try:
                    if generate_problem_md(problem_id, cc_file, problem_dir):
                        processed += 1
                        print(f"✓ Generated Problem.md for {problem_id}")
                except Exception as e:
                    print(f"✗ Error processing {problem_id}: {e}")
    
    print(f"\nProcessed: {processed} directories")
    print(f"Skipped: {skipped} directories (already have Problem.md)")

if __name__ == '__main__':
    main()
