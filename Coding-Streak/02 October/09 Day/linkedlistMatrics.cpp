#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *right, *down;

    Node(int data) : val(data), right(NULL), down(NULL) {}
};

class Solution
{
public:
    Node *constructLinkedMatrix(vector<vector<int>> &mat)
    {
        // code Here

        int n = mat.size();

        if (n == 0)
            return NULL;

        vector<vector<Node *>> nodeMat(n, vector<Node *>(n, NULL));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                nodeMat[i][j] = new Node(mat[i][j]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j < n - 1)
                    nodeMat[i][j]->right = nodeMat[i][j + 1];
                if (i < n - 1)
                    nodeMat[i][j]->down = nodeMat[i + 1][j];
            }
        }

        return nodeMat[0][0];
    }
};

void display(Node *head)
{
    Node *Rp;
    Node *Dp = head;
    while (Dp)
    {
        Rp = Dp;
        while (Rp)
        {
            cout << Rp->val << " ";
            if (Rp->right)
                cout << Rp->right->val << " ";
            else
                cout << "null ";
            if (Rp->down)
                cout << Rp->down->val << " ";
            else
                cout << "null ";
            Rp = Rp->right;
        }
        Dp = Dp->down;
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // To handle new line after integer input

    while (t--)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;

        // Read the first row of the matrix
        while (ss >> num)
        {
            nums.push_back(num);
        }

        int n = nums.size();
        vector<vector<int>> mat(n, vector<int>(n));
        mat[0] = nums;

        // Read the remaining rows of the matrix
        for (int i = 1; i < n; i++)
        {
            string line;
            getline(cin, line);
            stringstream ss(line);
            vector<int> nums;
            int num;

            // Read the first row of the matrix
            while (ss >> num)
            {
                nums.push_back(num);
            }

            mat[i] = nums;
        }

        Solution ob;
        Node *head = ob.constructLinkedMatrix(mat);
        if (!head)
        {
            cout << "-1\n";
        }
        else
        {
            display(head);
        }
        cout << "\n";
    }
    return 0;
}