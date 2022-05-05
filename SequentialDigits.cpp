/*
Date: 2022-05-05
question-link: https://leetcode.com/problems/sequential-digits/
title:Sequential Digits
Problem-no:1291
difficulty:Medium
*/

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int>q;
        for(int i = 1; i<=9; i++ )
            q.push(i);
        vector<int>ans;
        while(!q.empty())
        {
            int n = q.front();
            q.pop();
            if(n>=low && n<=high)
                ans.push_back(n);
            if(n%10<9)
            {
            	
                int rem = n%10;
                q.push(n*10+rem+1);
            }
        }
        return ans;
        
    }
};

