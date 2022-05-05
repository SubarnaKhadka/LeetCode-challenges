/*
Date: 2022-05-05
question-link: https://leetcode.com/problems/max-number-of-k-sum-pairs/
title:Max Number of K-Sum Pairs
Problem-no:1679
difficulty:Medium
*/

class Solution{
	public:
		int maxOperations(vector<int>& nums, int k) 
		{
	   sort(nums.begin(),nums.end());
	    int i = 0;
	    int j = nums.size() - 1;
	    int count  = 0;
	    while(i<j) 
		{
	    	if(nums[i] + nums[j] ==k)
	    	{
	    		count++;
	    		i++;
	    		j--;
			}
			else if(nums[i] + nums[j] < k)
			{
				i++;
			}
			else if(nums[i] + nums[j] >k)
			{
				j--;
			}
		}
		return count;
	    
         }
};


