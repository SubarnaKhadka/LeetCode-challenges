/*
Date: 2022-05-02
question-link: https://leetcode.com/problems/sqrtx/
title:Sqrt(x)
Problem-no:69
difficulty:Easy
Time-Complexity:O(log2(x^1/2))
algorithm :binary search 
*/

class Solution {
public:
    int mySqrt(int x) {
        long int s =0, e = INT_MAX,ans = 0;
        while(s<=e){
        	long int m = s+(e-s)/2;
        	if(m*m<=x){
        		ans = m;
        		s = m+1;
			}
			else
			e = m-1;
		}
		return ans;
    }
};
