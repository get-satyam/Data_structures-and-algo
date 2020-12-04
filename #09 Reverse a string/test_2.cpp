#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class Solution {
public:
    void reverseString(string s) {
        
        std::stack<char> str;
        
        for(char c : s)
        {
            str.push(c);
            
        }
        char x;
        int n = s.size();
        for (int i = 0; i < n; i++) {
        s[i] = str.top();
        str.pop();
        }
        for(int x:s)
        {
            cout<<(char)x;
        }
        // std::cout<<s;
    }
};

int main()
{
    // const char* s = "Hello";
    string s = "Hello";

    Solution S;
    S.reverseString(s);

}