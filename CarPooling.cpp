/*
Date: 2022-05-04
question-link: https://leetcode.com/problems/car-pooling/
title:Car Pooling
Problem-no:1094
difficulty:Medium
*/

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
      vector<int>m(1001,0);
        for(vector<int>v:trips)
        {
            int start = v[1];
            int end = v[2];
            m[start] +=v[0];
            m[end] -=v[0];
        }
        int s = capacity;
        for(int i = 0; i<1001 && s>=0; i++)
        {
            s -=m[i];
        }
        return s >=0;
    }
};
