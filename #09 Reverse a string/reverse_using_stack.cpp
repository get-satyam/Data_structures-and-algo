#include <iostream>
#include <stack>
#include <string>
using namespace std;
 
// Reverse a string using stack container in C++
// The string is passed by reference
void reverse(string &str)
{
    // create an empty stack
    stack<int> stk;
 
    // Push each character in the string to the stack
    for (char ch: str) {
        stk.push(ch);
    }
 
    // pop all characters from the stack and
    // put them back to the input string
    for (int i = 0; i < str.length(); i++) {
        str[i] = stk.top();
        stk.pop();
    }
}
 
// main function
int main()
{
    string str = "Reverse me";
 
    reverse(str);
    cout << str;
 
    return 0;
}