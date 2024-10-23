#include <iostream>
#include <vector>

using namespace std;

void rotateMatrixAnticlockwise(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Step 1: Transpose the matrix (swap matrix[i][j] with matrix[j][i])
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each column
    for (int j = 0; j < n; j++) {
        for (int i = 0, k = n - 1; i < k; i++, k--) {
            swap(matrix[i][j], matrix[k][j]);
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix: " << endl;
    printMatrix(matrix);

    rotateMatrixAnticlockwise(matrix);

    cout << "Matrix after 90 degree anticlockwise rotation: " << endl;
    printMatrix(matrix);

    return 0;
}
