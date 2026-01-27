# 2D Array Printing Program

## Description
This C program allows users to create and print a 2D array based on their inputs. The program prompts the user to:
1. Enter the number of rows
2. Enter the number of columns
3. Enter each element of the array
4. Displays the complete 2D array in a formatted manner

## Compilation
To compile the program, use:
```bash
gcc -Wall -Werror -Wextra -pedantic print_2d_array.c -o print_2d_array
```

## Usage
Run the compiled program:
```bash
./print_2d_array
```

The program will interactively prompt you for:
- Number of rows (positive integer)
- Number of columns (positive integer)
- Each element of the array (integers)

## Example

### Input:
```
Enter number of rows: 3
Enter number of columns: 3

Enter array elements:
Element [0][0]: 1
Element [0][1]: 2
Element [0][2]: 3
Element [1][0]: 4
Element [1][1]: 5
Element [1][2]: 6
Element [2][0]: 7
Element [2][1]: 8
Element [2][2]: 9
```

### Output:
```
The 2D array is:
1 2 3 
4 5 6 
7 8 9 
```

## Features
- Dynamic memory allocation for arrays of any size (within system limits)
- Proper error handling for invalid inputs
- Memory cleanup to prevent leaks
- Clear and formatted output

## Error Handling
The program validates:
- Non-positive row/column counts
- Invalid input types
- Memory allocation failures

Appropriate error messages are displayed when validation fails.
