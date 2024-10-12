#include <iostream>
#include <map>
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

    ~Node()
    {
        int value = this->data;

        if (this->next == NULL)
        {
            // this->next= NULL;
            delete next;
        }
        cout << "Deleted Node: " << value << endl;
    }
};

void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void InsertAtMiddle(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        InsertAtHead(head, data);
        return;
    }
    Node *temp = new Node(data);
    int cnt = 1;
    Node *ptr = head;
    while (cnt < pos - 1)
    {
        ptr = ptr->next;
        cnt++;
    }
    temp->next = ptr->next;
    ptr->next = temp;

    if (temp->next == NULL)
    {
        InsertAtTail(tail, data);
    }
}

void DeleteNode(Node *&head, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

// bool detectCycle(Node *head)
// {
//     map<Node *, bool> visited;
//     if (head == NULL)
//     {
//         return false;
//     }
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         // cycle is present in ll
//         if (visited[temp] == true)
//         {
//             cout << "Cycle starts at: " << temp->data << endl;
//             return true;
//             // break;
//         }
//         // if cycle is not present
//         visited[temp] = true;
//         temp = temp->next;
//     }
//     return false;
// }

Node* floydDetectLoop(Node* head)
{    
    if(head== NULL){
        return NULL;
    }

    Node* slow= head;
    Node* fast= head;
    while(slow!= NULL && fast!= NULL){
        fast= fast->next;
        if(fast->next!= NULL){
            fast= fast->next;
        }
        slow= slow->next;
        if(fast== slow){
        return slow;
    }
}
    return NULL;
}

 Node* beginningNode(Node* head){
    if(head== NULL){
        return NULL;
    }
    Node* intersection= floydDetectLoop(head);
    Node* slow= head;
    while(slow!= intersection){
        slow= slow->next;
        intersection = intersection->next;
    }
    return slow;
 }
 
 void removeLoop(Node* head){
    if(head== NULL){
        return;
    }
    Node* startOfLoop= beginningNode(head);
    Node* temp = startOfLoop;
    while(temp->next!= startOfLoop){
        temp= temp->next;
    }
    temp->next= NULL;
 }

void print(Node *head)
{
    if (head == NULL)
    {
        cout << "List is Empty!!" << endl;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // creation of a new Node
    Node *node1 = new Node(5);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node *head = node1;
    Node *tail = node1;

    InsertAtTail(tail, 10);
    InsertAtTail(tail, 15);
    InsertAtMiddle(head, tail, 3, 12);
    InsertAtMiddle(head, tail, 1, 1);
    InsertAtMiddle(head, tail, 6, 20);

    print(head);
    tail->next = head->next;

    // if (detectCycle(head))
    // {
    //     cout << "Cycle is present in ll" << endl;
    // }
    // else
    //     cout << "No Cycle found in ll" << endl;

    if (floydDetectLoop(head)!= NULL)
    {
        cout << "Cycle is present in ll" << endl;
    }
    else{
        cout << "No Cycle found in ll" << endl;
    }
    Node* beg= beginningNode(head);
    cout<<"Beginning of loop: "<<beg->data<<endl;

    removeLoop(head);
    print(head);
}
 