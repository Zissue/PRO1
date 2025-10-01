#!/bin/bash

# Cleanup script for PRO1 repository
# Removes build artifacts and temporary files

echo "=== PRO1 Repository Cleanup Script ==="
echo ""

# Count files before cleanup
echo "Counting files to remove..."
EXEC_COUNT=$(find . -type f \( -name "*.x" -o -name "*.out" -o -name "*.exe" \) 2>/dev/null | wc -l)
OBJ_COUNT=$(find . -type f \( -name "*.o" -o -name "*.obj" \) 2>/dev/null | wc -l)
TEMP_COUNT=$(find . -type f \( -name "*~" -o -name "*.swp" -o -name "*.swo" \) 2>/dev/null | wc -l)

echo "Found:"
echo "  - $EXEC_COUNT executable files (.x, .out, .exe)"
echo "  - $OBJ_COUNT object files (.o, .obj)"
echo "  - $TEMP_COUNT temporary editor files (*~, .swp, .swo)"
echo ""

TOTAL=$((EXEC_COUNT + OBJ_COUNT + TEMP_COUNT))

if [ $TOTAL -eq 0 ]; then
    echo "Repository is already clean! ✓"
    exit 0
fi

# Ask for confirmation
read -p "Do you want to remove these files? (y/N) " -n 1 -r
echo ""

if [[ $REPLY =~ ^[Yy]$ ]]; then
    echo "Removing files..."
    
    # Remove executable files
    if [ $EXEC_COUNT -gt 0 ]; then
        find . -type f \( -name "*.x" -o -name "*.out" -o -name "*.exe" \) -delete 2>/dev/null
        echo "  ✓ Removed executable files"
    fi
    
    # Remove object files
    if [ $OBJ_COUNT -gt 0 ]; then
        find . -type f \( -name "*.o" -o -name "*.obj" \) -delete 2>/dev/null
        echo "  ✓ Removed object files"
    fi
    
    # Remove temporary files
    if [ $TEMP_COUNT -gt 0 ]; then
        find . -type f \( -name "*~" -o -name "*.swp" -o -name "*.swo" \) -delete 2>/dev/null
        echo "  ✓ Removed temporary files"
    fi
    
    echo ""
    echo "Cleanup completed! ✓"
    echo ""
    echo "Note: These files are also in .gitignore and won't be committed."
else
    echo "Cleanup cancelled."
fi
