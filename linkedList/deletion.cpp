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

Node* deleteHead(Node* head){
    if(head== NULL){
        return head;
    }
    Node* temp= head;
    head= head->next;
    delete temp;
    return head;
}


Node* deleteTail(Node* head){
    if(head== NULL || head->next== NULL){
        return NULL;
    }
    Node* temp= head;
    while(temp->next->next!= NULL){
        temp= temp->next;
    }
    free(temp->next);
    temp->next= NULL;
return head;
}

int lengthLL(Node* head){
    int cnt = 0;
    Node* temp= head;
    while(temp){
        temp= temp->next;
        cnt++;
    }
    return cnt;
}

Node* deletePos(Node* head, int pos,int len){
    
    if(head== NULL || head->next== NULL){
        return NULL;
    }
    if(pos==1){
      Node* temp= head;
      head= head->next;
      delete(temp);
    return head;
    }
     
    else if(pos== len){
        int cnt= 1;
        Node* temp= head;
        while(cnt<len-1){
          temp= temp->next;
          cnt++;
        }
        delete(temp->next);
        temp->next= NULL;
    }

    else{
        int cnt= 1;
        Node* temp= head;
        while(cnt!= pos-1){
          temp= temp->next;
          cnt++;
        }
       Node* link= temp->next->next;
       delete(temp->next);
       temp->next= link;
       return head;
    }
}

Node* deleteVal(Node* head, int val){
    if(head== NULL){
        return head;
    }
        
        if(head->data== val){
            Node* temp= head;
            head= head->next;
            delete(temp);
            return head;
        }
        Node* temp= head;
        Node* prev= NULL;
        while(temp!= NULL){
            if(temp->data== val){
                prev->next= temp->next;
                delete(temp);
                break;
            }
            prev= temp;
            temp= temp->next;
        }
    return head;
}

int main(){
    vector<int> arr= {1,2,3,4,5};
    Node* head= convertToLL(arr);
    int len= lengthLL(head);
    printLL(head);
    // head= deleteHead(head);
    // head= deleteTail(head);
    // head= deletePos(head,4,len);
    head= deleteVal(head,5);
    printLL(head);
}