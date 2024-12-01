# 1277. Count Square Submatrices with All Ones
## Medium

Given a m * n matrix of ones and zeros, return how many square submatrices have all ones.

 

* Example 1:

        Input: matrix =
        [
        [0,1,1,1],
        [1,1,1,1],
        [0,1,1,1]
        ]
        Output: 15
* Explanation: 
There are 10 squares of side 1.
There are 4 squares of side 2.
There is  1 square of side 3.
Total number of squares = 10 + 4 + 1 = 15.

* Example 2:

        Input: matrix = 
        [
        [1,0,1],
        [1,1,0],
        [1,1,0]
        ]
        Output: 7
* Explanation: 
There are 6 squares of side 1.  
There is 1 square of side 2. 
Total number of squares = 6 + 1 = 7.
 
-----------------------------------------------------------
# Intuition
1. Proceed from i value is equal to 1 and j value is equal to 1 and then iterate till the end of rows and cols.

2. If the minimum of the three elements are non-zero, then that forms an square and this can be done while matrix[i][j] = 1 , hence that element is itself a square of length 1.

## Approach

### Initialization:

* Find number of rows and columns in the matrix ie. dimensions of the matrix -> rows by matrix length and cols by one row's length.

        int rows = matrix.length;
        int cols = matrix[0].length;

### Find the square of length greater than 1:

* First , we have to iterate from 1 to rows and also from 1 to cols to meet all the elements of the row and column except the element that is either first row or it's first column.

        for(int i=1;i<rows;i++)
             for(int j=1;j<cols;j++)

If the value of an element is equal to 1 , then we're going to check its left(i,j-1) , top(i-1,j) and top left(i-1,j-1) value by finding minimum of all those and adding to matrix[i][j].

so the value of matrix[i][j] becomes 2 if it forms square (ie. result of minimum is non-zero) and other to represent the element itself which is of length 1.

    if(matrix[i][j]==1)
    {
        matrix[i][j]+=Math.min(matrix[i-1][j],Math.min(matrix[i][j-1],matrix[i-1][j-1]));
    }

### Finding total number of squares possible:

* Now , the total number of squares possible can be found by adding all the elements in the matrix , since at each stage in the matrix -> number of possible square is individually noted using dynamic programming approach.

        int total=0;
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<cols;j++)
                {
                    total+=matrix[i][j];
                }
            }

### Returning the total:

* Return the total which gives the total number of square submatrices possible which contains all the elements as ones.

        return total;

## Complexity

1. Time complexity: O(mxn).
m -> number of rows in the matrix.
n -> number of columns in the matrix.

### DP Update (Nested loop) : O(mxn).

1. The nested loop iterates over each cell of matrix from 1 to rows and from 1 to cols, and the operation performed inside the nested loop takes the complexity of O(1).

2. Hence the operation takes place O(mxn) time .So it takes O(mxn) time complexity.

### Counting total Squares(Nested loop): O(mxn).

* After updating the matrix, another nested loop iterates over every cell to calculate the total number of squares by summing up all the values in the matrix.

* This step also takes O(m×n) time, as each cell is visited once to accumulate the count.

### Total Time Complexity:
* The overall time complexity will be O(mxn) + O(mxn) = O(mxn).
* Space complexity: O(1).

### In-place modification: O(1).
* The program uses the input matrix itself to store the intermediate DP values instead of creating an additional dp matrix.
No extra space proportional to the size of the input is required, so the auxiliary space complexity for this part O(1).

### Other variables: O(1).
* Only a few scalar variables (rows, cols, total, and loop variables) are used, which require constant space.

### Total Space Complexity: O(1).
* The overall space complexity is O(1), considering only a constant amount of extra space is used.
Code