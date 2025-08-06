# Quick Sort in C

This project implements the **Quick Sort** algorithm in C, a highly efficient sorting method based on the divide-and-conquer approach.

---

## Features

- `swap()` function to exchange two elements.
- `partition()` function to partition the array around a pivot.
- `quickSort()` function to recursively sort subarrays.
- `main()` function demonstrating Quick Sort with a sample array.

---

## How It Works

1. **Choose a pivot:** The last element of the array segment.
2. **Partition:** Rearrange elements so that those less than the pivot are on the left, and those greater are on the right.
3. **Recursively apply:** Sort the left and right partitions using the same process.

---

## Usage

### Compile the program:

```bash
gcc quick_sort.c -o quick_sort

Run the program
./quick-sort

Example Output
Original array: 44 22 1 6 33 8 
Sorted array: 1 6 8 22 33 44
