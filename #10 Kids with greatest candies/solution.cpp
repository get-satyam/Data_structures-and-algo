#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(int candies[], int extraCandies) 
    {
        int greatest = -1;
        int size = sizeof(candies)/sizeof(candies[0]);
        
        vector<bool> result(size, false);
        
        for( int i=0; i<size; i++){
            if( candies[i] > greatest ){
                greatest = candies[i];
            }
        }
        
        for( int i=0;i<size;i++){
            if( candies[i] + extraCandies >= greatest ){
                result[i] = true;
            }
        }
        
        return result;
    }
};

int main()
{
        Solution s;

        int a[10] = {1,2,3,4,2,3,4,1,2,3};

        s.kidsWithCandies(a, 3);

}