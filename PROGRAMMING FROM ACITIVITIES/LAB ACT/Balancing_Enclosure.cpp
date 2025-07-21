#include <iostream>
#include <cstring>
#include <stack> // STL stack
using namespace std;

int main (){

    stack <char> stk; 
    char expression[100];
    cout << "Enter the expression: ";
    cin.getline(expression, 100);
    int size = strlen(expression);
    bool balanced = true;

    for (int i = 0; i < size; i++){
        char ch = expression[i];
        if ( (ch == '(' ) || (ch == '{' ) || (ch == '[' )){
            stk.push(ch);
        } 
        else if (ch == ')' || ch == '}' || ch == ']'){
            if (stk.empty()){
                balanced = false;
                break;
            }
            char top = stk.top(); // known as peek operation

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')){
                    balanced  = false;
                    break;
                }
            stk.pop(); // pop the matching opening bracket     
        }
       
    }
 if (balanced && stk.empty()){
    cout << "The expression is balanced. "  << endl;
 }
  else{
        cout << "The expression is not balanced. "  << endl;
    }
    return 0;
}