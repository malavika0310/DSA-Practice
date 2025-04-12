// Problem: Sum Of digits
// Link: https://www.geeksforgeeks.org/problems/sum-of-digits1742/1
// Difficulty: Basic

class Solution{
    public:
        int sumOfDigits(int N){
            int sum=0;
            for(;N>0;N/=10)
            {
                sum+=N%10;
            }
            return sum;
        }
};
    
