#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


Node(int d){
    this->data= d;
    this->next= NULL;
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

 int getLength(Node* tail){
    Node* temp= tail;
    int len= 1;
    while(temp->next!= tail){
        temp= temp->next;
        len++;
    }
    return len;
 }
 void insertNode(Node* &tail, int element, int d){
    //  empty list
    if(tail== NULL){
        Node* newNode= new Node(d);
        tail= newNode;
        newNode->next= newNode;
        // return *tail;
    }
    else{
        // non empty list
        // assuming that the element is present in the list

        Node* curr= tail;
        while(curr->data!= element){
            curr= curr->next;
        }

        // element found => curr is representing element node
        Node*temp= new Node(d);
        temp->next= curr->next;
        curr->next= temp; 
        // tail= temp;
        // return *tail;

    }
}
 void deleteNode(Node* &tail, int value){

    // empty list
    if(tail== NULL){
        cout<<"List is empty"<<endl;
    }
    else{
        // non-empty
        // assuming value is present in ll
        Node* prev= tail;
        Node* curr= prev->next;
        while(curr->data!= value){
            prev= curr;
            curr= curr->next;
        }
        prev->next= curr-> next;
        // 1 node ll
        if(curr= prev){
            tail= NULL;
        }
        // >=2 nodes ll
        if(tail== curr){
            tail= prev;
        }
        curr->next= NULL;
        delete curr;

    }
 }
//  Node* findHead(Node* tail){
//     Node* temp= tail;
//     while(temp!= tail->next){
//         temp= temp->next;
//     }
    
//  }

 Node* splitCircular(Node* tail){
    int split= getLength(tail)/2;
    int count= 0;
    Node* temp= tail;
    while(count< split){

        count++;
    }
 }

 void print(Node* tail){
    if(tail== NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    Node* temp= tail;
    // cout<<tail->data<<" ";
    // while(tail->next!= temp){
    //     cout<<tail->data<<" ";
    //     tail= tail->next;
    // }
    // cout<<endl;
    do{
        cout<<tail->data<<" ";
        tail= tail->next;
    }while(tail!= temp);
    cout<<endl;
}

int main(){
    Node* tail= NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    deleteNode(tail,3); 
    print(tail);
    // deleteNode(tail,5); 
    // print(tail);
    cout<<"Length of ll: "<<getLength(tail);
}