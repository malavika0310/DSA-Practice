// Problem: Power of Two
// Link: https://leetcode.com/problems/power-of-two/description/
// Difficulty: Easy

class Solution {
    public:
        bool isPowerOfTwo(int n) {
            if(n<=0){
                return false;
            }
            while(n>1){
                if(n%2==1){
                    return false;
                }
                n/=2;
            }
                return true;
        }
    };