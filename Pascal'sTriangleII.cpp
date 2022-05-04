/*
Date: 2022-05-04
question-link: https://leetcode.com/problems/pascals-triangle-ii/
title:Pascal's Triangle II
Problem-no:119
difficulty:Easy
*/

class Solution{
	public:
		vector<int> getRow(int rowIndex){
			vector<int> r(rowIndex+1,1);
			for(int i = 1; i< rowIndex; ++i){
				for(int j = i; j>0; --j)
				r[j] +=r[j-1];
			}
			return r;
		}
};
