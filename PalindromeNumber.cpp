/* 
Date: 2022-05-01
question-link: https://leetcode.com/problems/palindrome-number/
title:Palindrome Number
Problem-no:9
difficulty:Easy
*/

class Solution {
public:
    bool isPalindrome(int x) {  	
    	/* 
         	Constraints
		-2^31 <= x <= 2^31 - 1
		=> -2147483647 <= x <= 2147483647	
    	*/  	
        if(x<0 || x>=2147483647)
        return false;
        long int num = 0;
        int y = x;
        while(x>0){
        	num = num *10;
        	if(num > 2147483647)
        	   return false;
        	num = num +(x % 10);
        	x = x/10;
		}
		if(num == y)
		  return true;
		  
		return false;
    }
};
