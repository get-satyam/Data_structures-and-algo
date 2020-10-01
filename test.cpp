

#include <bits/stdc++.h>
#include <algorithm>
#include<functional>
using namespace std;
typedef long ll;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   set<float,greater<>> s1= {1,2,3,4,5,1,2,3,4,5,0.5};
   for(const auto &i:s1){
       cout<<i<<endl;
   }
}