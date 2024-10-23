#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val) : val(val), next(NULL) {}
};
int length(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp)
    {
        len++;
        temp = temp->next;
    }

    return len;
}
int sumOfLastN_Nodes(Node *head, int n)
{
    // Code here
    int len = length(head);
    if (n > len)
        return 0;


    Node *temp = head;
    int sum = 0;
    int s = len - n;
    while (s--)
    {
        temp = temp->next;
    }

    while (temp)
    {
        sum += temp->val;
        temp = temp->next;
    }

    return sum;
}

int main()
{
    Node *head = NULL;

    Node* val1 = new Node(1);
    head = val1;
    Node* val2 = new Node(2);
    val1->next = val2;
    Node* val3 = new Node(6);
    val2->next = val3;
    Node* val4 = new Node(3);
    val3->next = val4;
    Node* val5 = new Node(4);
    val4->next = val5;
    Node* val6 = new Node(10);
    val5->next = val6;


    int n = 2;
    cout << "Sum of last " << n << " nodes: " << sumOfLastN_Nodes(head, n) << endl;

}