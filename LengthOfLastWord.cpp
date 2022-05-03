/*
Date: 2022-05-04
question-link: https://leetcode.com/problems/length-of-last-word/
title:Length of last word
Problem-no:58
difficulty:Easy
*/

class Solution{	
	public:	
	int lengthOfLastWord(string s){
	int n = s.length(),result = 0;
	while(n>0){
		if(s[--n] !=' ') result++;
		else if(result > 0) return result;
	}
	return result;
	}
};

