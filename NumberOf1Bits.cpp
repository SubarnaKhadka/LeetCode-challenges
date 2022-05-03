/*
Date: 2022-05-04
question-link: https://leetcode.com/problems/number-of-1-bits/
title:Number of 1 Bits
Problem-no:191
difficulty:Easy
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int count = 0;
            while(n!=0)
            {
                if(n&1)
                {
                    count++;
                }
                n= n>>1;
            } 
        return count;
    }
};
