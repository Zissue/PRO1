# Contributing to PRO1 Solutions Repository

Thank you for contributing to this collection of PRO1 programming solutions!

## Guidelines for Adding Solutions

### File Organization

1. **Choose the correct directory:**
   - Session-based problems → `pro1/S<number>/`
   - Topic-based problems → `pro1/p<number>/<problem_id>/`
   - Control/Exam problems → `pro1/controls<number>/<exam_id>/`
   - Consolidation problems → `pro1/conso<number>/<problem_id>/`
   - Algorithm implementations → `pro1/algorithms/`

2. **File naming:**
   - Use the problem ID as the filename (e.g., `p12345.cc`, `x67890.cc`)
   - Keep one primary solution per problem
   - Avoid backup files like `mine.cc`, `solu.cc`, `backup.cc`

3. **Directory structure:**
   ```
   pro1/p7/x41120/
   ├── x41120.cc          (main solution)
   ├── Problem.md         (problem description)
   └── sample-1.inp       (optional test input)
   ```

### Code Quality

1. **Code style:**
   - Use consistent indentation (spaces or tabs, be consistent)
   - Add comments for complex logic
   - Use meaningful variable names
   - Include pre/post conditions for functions where appropriate

2. **Header format (recommended):**
   ```cpp
   #include <iostream>
   using namespace std;
   
   // Brief description of the problem (optional)
   // Problem ID: p12345
   
   int main() {
       // Your solution
   }
   ```

### What NOT to Commit

The `.gitignore` file automatically excludes these, but please verify:

- **Compiled executables:** `.x`, `.out`, `.exe` files
- **Object files:** `.o`, `.obj` files
- **Editor temporary files:** `*~`, `.swp` files
- **IDE-specific files:** `.vscode/`, `.idea/` directories
- **Build artifacts:** `build/`, `bin/` directories

### Before Committing

1. **Test your solution:**
   ```bash
   g++ problem_name.cc -o problem_name.x
   ./problem_name.x < sample_input.inp
   ```

2. **Create/update Problem.md:**
   - Describe what the problem asks for
   - Include input/output format
   - Reference the official Jutge.org problem if available

3. **Remove executables:**
   ```bash
   # They will be ignored by .gitignore, but don't force-add them
   rm *.x *.o
   ```

3. **Check what you're committing:**
   ```bash
   git status
   git diff
   ```

### Commit Message Guidelines

Use clear, descriptive commit messages:

```bash
# Good examples:
git commit -m "Add solution for problem p12345"
git commit -m "Fix logic error in x67890.cc"
git commit -m "Add sample inputs for p12345"

# Avoid:
git commit -m "update"
git commit -m "fix"
```

## Academic Integrity

This repository is intended for educational purposes and as a reference for learning. When using these solutions:

- **Understand the code** before using it
- **Don't copy-paste** without comprehension
- **Follow your institution's policies** on academic integrity
- **Use as a learning tool**, not a shortcut

## Questions or Issues?

If you have questions about contributing or notice any issues:
- Open an issue on GitHub
- Provide clear descriptions and examples
- Be respectful and constructive

Thank you for helping maintain this educational resource!
