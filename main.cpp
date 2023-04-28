#include <iostream>

using namespace std;

int* stack;
int top = -1;
int stack_size;

int addValue(int value){
    if(top==stack_size - 1){
        return 0;
    }else{
    top++;
    stack[top]=value;
    }
}

int deleteValue(){
    if(top==-1){
            return 0;
    }
    else{
        cout <<"removed"<<stack[top];
        top--;
    }
}

int main()
{
    int command;
    cout << "Enter stack size : ";
    cin>> stack_size;
    stack=new int[stack_size];
    while(true){
    cout << endl<<"Enter 1 Add ; Enter 2 delete ; Enter 3 show; Enter 4 exit"<<endl;
    cin >> command;
    switch(command){
case 1:
    int result;
    int value;
    cout << "Enter value : ";
    cin >> value;
    result = addValue(value);
    if(result==0){
        cout <<endl<<"stack is full";
    }else{
    cout <<endl<<"add value is successful";
    }
    break;
case 2 :
    result = deleteValue();
    if(result==0){
        cout<<endl << "stack is empty";
    }else{
    cout << endl<<"remove is successful";
    }
    break;
default:
    cout <<endl<< "Enter valid number";
    break;
    }
    }
    return 0;
}
