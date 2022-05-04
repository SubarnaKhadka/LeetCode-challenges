/*
Date: 2022-05-04
question-link: https://leetcode.com/problems/majority-element/
title:Majority Element
Problem-no:169
difficulty:Easy
Algorithm: Moore's Voting Algorithm
Time-Complexity:O(N)
*/

class Solution{
	public:
		int majorityElement(vector<int>& nums){
			int c = 0,s=0;
			for(int n: nums){
				if(c==0) s = n;
				if(n==s) c++;
				else c--;
			}
			return s;
		}
};
