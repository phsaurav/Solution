#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node* head = NULL;

void addHead(int nData)
{
    Node* newNode = new Node();
    
}

void del(int pos)
{
    Node *last = head;
    Node *last2;
    for(int i = 1; i < pos; i++)
    {
        last = last->next;
    }
    
    last2 = last->next;

    last->next = last2->next;

}

void insert(int data, int pos)
{
    Node *newNode = new Node();
    Node *last = head;
    newNode->data = data;
    for(int i = 1; i < pos; i++)
    {
        last = last->next;
    }

    newNode->next = last->next;
    last->next = newNode;
}

void add(int nData)
{
    Node* newNode = new Node();
    Node *last = head;
    newNode->data = nData;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    while(last->next != NULL)
        last = last->next;

    last->next = newNode;
}

void print()
{
    Node *last = head;
    while(last!=NULL)
    {
        cout <<last->data<< endl;
        last = last->next;
    }
}

int main()
{
    add(5);
    add(6);
    add(7);
    insert(8,1);
    del(2);
    print();
    return 0;
}