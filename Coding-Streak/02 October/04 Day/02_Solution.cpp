#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class CirculerLinkedlist
{
    Node *head;
    Node *tail;

public:
    CirculerLinkedlist()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            newNode->next = head;
        }
        else
        {
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
    }

    void reverseCLL()
    {

        Node *current = head;
        Node *prev = NULL;
        Node *nextNode = NULL;

        while( current != head && nextNode != head )
        {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
            head = current;

        }
        head = prev;
        tail = head;
        
    }

    void display()
    {
        Node *temp = head;
        do
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "Head" << endl;
    }
};

int main()
{
    CirculerLinkedlist cll;
    cll.insertAtEnd(1);
    cll.insertAtEnd(2);
    cll.insertAtEnd(3);
    cll.insertAtEnd(4);
    cll.insertAtEnd(6);
    cll.insertAtEnd(9);

    cout << "Original Circular Linked List: ";
    cll.display();

    cll.reverseCLL();

    cout << "Reversed Circular Linked List: ";
    cll.display();
}