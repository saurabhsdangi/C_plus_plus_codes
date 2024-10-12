#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this->data= d;
        this-> prev= NULL;
        this-> next= NULL;
    }
     
    ~Node(){
        int value= this->data;
        if(next!= NULL){
            delete next;
            next= NULL;
        }
        cout<<"Memory free for node with data: "<<value<<endl;
    }
};

  // gives length of ll
 int getLength(Node* head){
    int len= 0;
    Node* temp = head;
     while(temp!= NULL){
        len++;
        temp= temp->next; 
    }
    return len;
 }

 void insertAtHead(Node* &head, Node* &tail, int d){
    if(head== NULL){
        Node* temp = new Node(d);
        head= temp;
        tail= temp;
    }
    else{
      Node* temp = new Node(d);
      temp-> next= head;
      head-> prev= temp;
      head= temp;
    }
 }

 void insertAtTail(Node* &head, Node* &tail, int d){
    if(tail== NULL){
        Node* temp= new Node(d);
        tail= temp;
        head= temp;
    }
    else{
        Node*temp = new Node(d);
      tail->next= temp;
      temp->prev= tail;
      tail= temp;
    }
      
 }
 void insertAtMiddle(Node* &head, Node* &tail, int pos, int data){
    if(pos== 1){
        insertAtHead(head,tail,data);
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
   temp->prev= ptr;
   ptr->next= temp;
   ptr= ptr->next;
   ptr->prev= temp;

   if(temp->next== NULL){
    insertAtTail(head,tail,data);
   }
 }
 
  void deleteNode(Node* &head, int pos){
    if(pos== 1){
        Node*temp= head;
        temp->next->prev= NULL;
        head= head->next;
        temp->next= NULL;
        delete temp;
    }
     else{
        Node* front= head;
        Node* back= NULL;

        int cnt= 1;
        while(cnt< pos){
            back= front;
            front= front->next;
            cnt++;
        }
        
        // front->next->prev= back;
        front->prev= NULL;
        back->next= front->next;
        front->next=  NULL;
        delete front;
     }
 }

void print(Node* head){
    Node* temp= head;

    while(temp!= NULL){
        cout<<temp->data<<" "; 
        temp= temp->next; 
    }
    cout<<endl;
}

int main(){
    Node* node1= new Node(10);
    Node* head= node1;
    Node* tail= node1;
    // print(head);

    // insertAtHead(head,tail,11);       
    // insertAtHead(head,tail,13);       
    // insertAtHead(head,tail,15);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtMiddle(head,tail,2,15); 
    insertAtMiddle(head,tail,2,17); 
    print(head);
    // deleteNode(head,4);
    // print(head);
    cout<<getLength(head)<<endl; 
    cout<<"Tail: "<<tail->data<<endl;
         
    
}