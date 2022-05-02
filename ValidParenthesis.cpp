/* 
Date: 2022-05-02
question-link: https://leetcode.com/problems/valid-parentheses/
title:Valid Parentheses
Problem-no:20
difficulty:Easy
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto c: s){
        	if(st.empty())
			{
        		st.push(c);
			}
			else if((st.top()=='(' && c==')') || (st.top()=='{' && c=='}') || (st.top()=='[' && c==']'))
			{
				st.pop();
			}
			else
			{
				st.push(c);
			}
		}
		if(st.size()==0)
		return true;
		
		return false;
    }
};
