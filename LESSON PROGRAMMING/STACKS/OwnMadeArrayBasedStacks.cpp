#include <iostream>
#include <string>
using namespace std;

#define MAX_SIZE 100


 class Stack{
     private:
     int top;
     char data[MAX_SIZE];
     public:
     
     Stack (){
         top = -1;
         
     }
        bool isFull(){
            return top == MAX_SIZE - 1;
        }
        
        bool isEmpty(){
            return top == -1;
        }
         
         void push(int element){
             if (isFull()){
                 cout << "Stack is full! ";
                 return;
             }
             data[++top] = element;
         }
         char pop(){
             if (isEmpty()){
                cout << "Stack is empty! ";
                 return '\0';    
             } 
             
           return data[top--];
         }
       
     
        char peek (){
            if (top == -1){
            cout << "Stack is empty! ";
            return '\0';
            } 
              return data[top];
        }
      
};







int main (){
    Stack stack;
    
    string expression;
    
    cout << "Enter expression: ";
    getline(cin,expression);
    
    int size = expression.length();
   
    for (int i = 0; i < size; i++ ){
        char ch = expression[i];
        
        if ((ch == '(') || (ch == '[') || (ch == '{') ){
            stack.push(ch);
        }
        
        else if ( (ch == ')') || (ch == ']') || (ch == '}') ){
            if (stack.isEmpty()){
                 cout << "Not balanced";
                 return 0;
            }
            
            char top = stack.peek();
            
            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')){
                    cout << "Not balanced" << endl;
                    return 0;
                }
            stack.pop();
            
        }
        
    }
    if (stack.isEmpty()){
        cout << "Balanced";
    } else{
        cout << "Not B=balanced";
    }
    
    
    
    
    return 0;
}