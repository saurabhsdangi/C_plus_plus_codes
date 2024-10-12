#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

   public:
    Node(int data,Node* next){
        this->data= data;
        this->next= next;
    }

    Node(int data){
        this->data= data;
        next= nullptr;
    }
};

Node* convertToLL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* mover= head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next= temp;
        mover= temp;
    }
    return head;
}

void printLL(Node* head){
    Node* temp= head;
    while(temp!= nullptr){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

Node* insertAtFirst(Node* head, int data){
    Node* temp= new Node(data);
    temp->next= head;
    head= temp;
    return head;
}

Node* insertAtLast(Node* head, int data){
    Node* temp= head;
    while(temp->next!= NULL){
        temp= temp->next;
    }
    Node* add= new Node(data);
    temp->next= add;
    add->next= NULL;
    return head;
}

Node* insertAtPos(Node* head,int data,int k){
    if(head== NULL){
        cout<<"Linked list empty"<<endl;
        return head;
    }
    if(k==1){
        Node* temp= head;
        Node*add= new Node(data);
        add->next= head;
        head= add;
        return head;
    }

    Node* temp= head;
    Node* prev= NULL;
    int cnt= 0;
    while(cnt!= k-1){
        prev= temp;
        temp= temp->next;
        cnt++;
    }
    Node* add= new Node(data);
    add->next= temp;
    prev->next= add;
    return head;
}

Node* insertBefore(Node* head,int data, int val){
    if(head== NULL){
        return head;
    }
    if(head->data== val){
        Node* temp= head;
        Node* add= new Node(data);
        add->next= head;
        head= add;
        return head;
    }
    Node* temp= head;
    Node* prev= NULL;
    while(temp->data!= val){
        prev= temp;
        temp= temp->next;
    }
    Node* add= new Node(data);
    prev->next= add;
    add->next= temp;
    return head;
}

int main(){
    Node* head= NULL;
    vector<int> arr= {1,2,3,4,5};
    head= convertToLL(arr);
    printLL(head);
    head= insertAtFirst(head,0);
    printLL(head);
    head= insertAtLast(head,6);
    printLL(head);
    head= insertAtPos(head,2,8);
    printLL(head);
    head= insertBefore(head,3,0);
    printLL(head);

}
