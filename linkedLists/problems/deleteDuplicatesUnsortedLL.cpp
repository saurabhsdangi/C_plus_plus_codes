#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data= data;
        this->next= NULL;
    }

    ~Node(){
        int value= this->data;

        if(this->next== NULL){
            // this->next= NULL;
            delete next;
        }
        cout<<"Deleted Node: "<<value<<endl;
    }
};

 void InsertAtHead(Node* &head, int data){
    Node* temp= new Node(data);
    temp->next= head;
    head= temp;
 }
 
 void InsertAtTail(Node* &tail, int data){
    Node* temp= new Node(data);
    tail->next= temp;
    tail= tail->next;

 }

 void InsertAtMiddle(Node* &head, Node* &tail, int pos, int data){
    if(pos== 1){
        InsertAtHead(head,data);
        return;
    }
   Node*temp= new Node(data);
   int cnt= 1;
   Node* ptr= head;
   while(cnt< pos-1){
    ptr= ptr->next;
    cnt++;
   }
   temp->next= ptr->next;
   ptr->next= temp;

   if(temp->next== NULL){
    InsertAtTail(tail,data);
   }
 }

 void DeleteNode(Node* &head, int pos){
    if(pos== 1){
        Node*temp= head;
        head= head->next;
        temp->next= NULL;
        delete temp;
    }
     else{
        Node* curr= head;
        Node* prev= NULL;

        int cnt= 1;
        while(cnt< pos){
            prev= curr;
            curr= curr->next;
            cnt++;
        }
        prev->next= curr->next;
        curr->next=  NULL;
        delete curr;
     }
 }
 
//  void deleteDuplicates(Node* head){
//     map <int, bool> visited;
//     if(head== NULL){
//         return;
//     }
//     Node* prev= NULL;
//     Node* curr= prev->next;
//     int data= curr->data;
//     while(curr!= NULL && curr->next!= NULL){
//         if(visited[data]== true){
//         Node* temp= curr;
//         prev->next= curr->next;
//         delete temp;
//         prev= prev->next;
//         }
//         else{
//         visited[data]= true;
//         prev= prev->next;
//     }
//     }
//  }

 void deleteDuplicates(Node* head) {
    if (head == NULL) {
        return;
    }

    map<int, bool> visited;
    Node* prev = head;
    Node* curr = head->next;
    visited[head->data] = true;  // Mark the head node's data as visited

    while (curr != NULL) {
        if (visited[curr->data]) {
            Node* temp = curr;
            prev->next = curr->next;
            curr = curr->next;
            delete temp;  // Free the memory of the duplicate node
        } else {
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
}

 void print(Node* head){
     if(head== NULL){
        cout<<"List is Empty!!"<<endl;
     }
     Node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<endl;
 }

int main(){
    // creation of a new Node
    Node* node1= new Node(5);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    Node* head= node1;
    Node* tail= node1;

    InsertAtTail(tail, 10);
    InsertAtTail(tail, 15);
    InsertAtMiddle(head,tail,3,5);     
    InsertAtMiddle(head,tail,1,1);    
    InsertAtMiddle(head,tail,6,10);  

    print(head);

    deleteDuplicates(head);
    print(head);
}
