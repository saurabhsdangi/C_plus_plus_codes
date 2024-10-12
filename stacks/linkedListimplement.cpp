#include<iostream>
#include<vector>
using namespace std;

class Stack{
public:
    int top;
    int data;
    Stack* link;

public:
    Stack(Stack* link,int data){
        this->data= data;
        this->link= link;
    }

    Stack(int data){
        this->data= data;
        this->link= nullptr;
    }
};

void printStack(Stack* top){
    Stack* temp= top;
    while(temp!= nullptr){
        cout<<temp->data<<" ";
        temp= temp->link;
    }
    cout<<endl;
}

Stack* push(Stack* top, int data){
    Stack* add= new Stack(top,data);
    return add;
}

// Recursive function to print stack from bottom to top
void printStackFromBottom(Stack* top) {
    if (top == nullptr) return; // Base case: if the stack is empty, return

    // Recur to the end of the stack
    printStackFromBottom(top->link);

    // Print the data after returning from recursion
    cout << top->data << " ";
}

Stack* pop(Stack* top){
    Stack* temp= top;
    top= top->link;
    delete(temp);
    return top;
}

int main(){
    Stack* top= NULL;
    top= push(top,1);
    top= push(top,2);
    top= push(top,3);
    printStack(top);
    // printStackFromBottom(top);
    top= pop(top);
    printStack(top);
    top= pop(top);
    printStack(top);
}
