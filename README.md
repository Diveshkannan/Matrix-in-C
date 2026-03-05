## Matrix Diagonal Sum in C

## Overview
This program demonstrates how to handle **2D arrays (matrices)** in C.
It calculates the **primary diagonal sum** (top‑left → bottom‑right) and the **secondary diagonal sum** (top‑right → bottom‑left) of a square matrix.

---

## Features
- **Matrix Initialization**: Uses a fixed 3×3 integer matrix for clarity.
-  **Primary Diagonal Calculation**: Traverses indices where row == column.
-  **Secondary Diagonal Calculation**: Traverses indices where row + column == n - 1.
-  **Dynamic Length Detection**: Uses `sizeof` to determine matrix dimensions.
-  **Clean Output**: Prints both diagonal sums in a single line.
-  **Foundation for Expansion**: Can be extended to larger matrices or advanced operations (transpose, multiplication, symmetry checks).

---

## Example Matrix
1   2   3
4   5   6
7   8   9


- Primary diagonal → 1 + 5 + 9 = **15**
- Secondary diagonal → 3 + 5 + 7 = **15**

---

## Sample Output
Primary:15
Secondary:15


---

## 🚀 Why This Matters
- Teaches **nested arrays** in C.
- Shows how to **index diagonals** precisely.
- Builds a strong base for **mathematical and algorithmic problem solving**.

---

## comment
Every solved matrix task is a victory.This is one of the brick for my skyscraper.

---

