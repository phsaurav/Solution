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
    int n,temp;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        add(temp);
    }

    print();
    return 0;
}