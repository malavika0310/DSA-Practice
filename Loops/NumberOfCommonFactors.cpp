// Problem: Number Of Common Factors
// Link: https://leetcode.com/problems/number-of-common-factors/
// Difficulty: Easy

class Solution {
    public:
        int commonFactors(int a, int b) {
            int count=0;
            for(int i=1;i<=a && i<=b;i++){
                if(a%i==0 && b%i==0){
                    count++;
                }
            }
            return count;
        }
    };