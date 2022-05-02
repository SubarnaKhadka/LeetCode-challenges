/*
Date: 2022-05-02
question-link: https://leetcode.com/problems/climbing-stairs/
title: Climbing Stairs
Problem-no:70
difficulty:Easy 
*/

class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        int x = 1, y=2;
        for(int i =3; i<n; ++i){
        	int tmp = y;
        	y+=x;
        	x = tmp;
		}
		return (x+y);
    }
};
