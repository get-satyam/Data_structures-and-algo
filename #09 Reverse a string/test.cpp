#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void reverseString(vector < char > & s) 
{

            std::stack < char > str;

            for (char c: s) {
                str.push(c);

            }
            char x;
            int n = s.size();
            for (int i = 0; i < n; i++) {
                s[i] = str.top();
                str.pop();
            }
            for (int x: s) {
                cout << x;
            }
            // std::cout<<s;
}


int main() 
{
    // const char* s = "Hello";
    vector < char > s[6] = "Hello";

    Solution S;
    S.reverseString(s);
    for (char c: s) {
        cout << c << " ";
    }
}