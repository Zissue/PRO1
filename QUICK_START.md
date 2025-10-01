# Quick Start Guide

Quick reference for working with the PRO1 repository.

## For Students Using This Repository

### Finding a Solution
```bash
# Navigate to the problem directory
cd pro1/p7/x41120/

# View the solution
cat x41120.cc
```

### Compiling and Running
```bash
# Compile the program
g++ x41120.cc -o x41120.x

# Run with sample input (if available)
./x41120.x < sample-1.inp

# Or run interactively
./x41120.x
# (then type your input)

# Clean up afterwards
rm x41120.x
```

### Quick Cleanup
```bash
# From repository root, remove all build artifacts
./cleanup.sh
```

## For Contributors

### Adding a New Solution

1. **Find the right directory:**
   - Session problems → `pro1/S7/`, `pro1/S8/`, etc.
   - Topic problems → `pro1/p7/problem_id/`
   - Control exercises → `pro1/controls1/exam_id/`
   - Consolidation → `pro1/conso1/problem_id/`

2. **Create your solution:**
   ```bash
   cd pro1/p7/
   mkdir p12345
   cd p12345
   # Create your solution file
   vim p12345.cc
   ```

3. **Test it:**
   ```bash
   g++ p12345.cc -o p12345.x
   ./p12345.x < test_input.inp
   ```

4. **Commit (executables are automatically ignored):**
   ```bash
   git add p12345.cc
   git commit -m "Add solution for problem p12345"
   git push
   ```

## Directory Structure Quick Reference

```
PRO1/
├── .gitignore              # Prevents committing build artifacts
├── README.md               # Full documentation
├── CONTRIBUTING.md         # Contributor guidelines
├── cleanup.sh              # Cleanup script
├── demo/                   # Demo program
│   ├── p1-norm.cc
│   └── sample_input.txt
└── pro1/
    ├── S7/                 # Session 7 problems
    ├── S8/                 # Session 8 problems
    ├── p1/                 # Topic 1 problems
    ├── p2/                 # Topic 2 problems
    ├── controls1/          # Control exams
    ├── conso1/             # Consolidation exercises
    ├── TeoriaPro1/         # Theory materials
    └── algorithms/         # Algorithm implementations
```

## Common Commands

```bash
# Find a problem by ID
find . -name "p12345.cc"

# Find all problems in a session
ls pro1/S7/

# Count source files
find pro1/ -name "*.cc" | wc -l

# Clean up build artifacts
./cleanup.sh

# Check what files would be committed
git status

# View recent changes
git log --oneline -5
```

## Tips

- ✅ **DO** commit source files (`.cc`)
- ✅ **DO** commit sample inputs (`.inp`, `.dat`)
- ✅ **DO** add comments to complex code
- ❌ **DON'T** commit executables (`.x`, `.out`)
- ❌ **DON'T** commit object files (`.o`)
- ❌ **DON'T** commit backup files (`.cc~`, `solu.cc`)

## Getting Help

1. Read the full [README.md](README.md)
2. Check [CONTRIBUTING.md](CONTRIBUTING.md) for guidelines
3. See [ORGANIZATION_SUMMARY.md](ORGANIZATION_SUMMARY.md) for details
4. Open an issue on GitHub

## Example Workflow

```bash
# 1. Clone the repository
git clone https://github.com/Zissue/PRO1.git
cd PRO1

# 2. Find and test a solution
cd pro1/p7/x41120
g++ x41120.cc -o x41120.x
./x41120.x < ../../demo/sample_input.txt

# 3. Study the code
cat x41120.cc

# 4. Clean up
cd ../../..
./cleanup.sh

# 5. Add your own solution
cd pro1/p7
mkdir p99999
cd p99999
vim p99999.cc
# (write your solution)
g++ p99999.cc -o p99999.x
./p99999.x  # test it

# 6. Commit (executable won't be added thanks to .gitignore)
git add p99999.cc
git commit -m "Add solution for p99999"
git push
```

Happy coding! 🚀
