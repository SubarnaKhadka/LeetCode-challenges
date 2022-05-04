/*
Date: 2022-05-04
question-link: https://leetcode.com/problems/count-numbers-with-unique-digits/
title:Count Numbers with Unique Digits
Problem-no:357
difficulty:Medium
*/
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        
        int ans = 10;
        int st = 9;
        int curr = 9;
        while(n-->1 && st)
        {
            curr *=(st--);
            ans +=curr;
        }
        return ans;
    }
};

