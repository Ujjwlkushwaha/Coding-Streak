#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int countSquares(vector<vector<int>> &matrix)
{
    // Find no of rows and columns
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][j] == 1)
            {
                matrix[i][j] += min(matrix[i - 1][j], min(matrix[i][j - 1], matrix[i - 1][j - 1]));
            }
            // printMatrix(matrix);
        }
    }

    // Number of squares possible
    int total = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            total += matrix[i][j];
        }
    }
    return total;
}
int main()
{
    vector<vector<int>> matrix = {{0, 1, 1, 1}, {1, 1, 1, 1}, {0, 1, 1, 1}};
    cout << countSquares(matrix) << endl;
    return 0;
}