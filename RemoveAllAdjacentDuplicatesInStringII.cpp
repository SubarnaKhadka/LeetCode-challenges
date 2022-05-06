/*
Date: 2022-05-06
question-link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/
title: Remove All Adjacent Duplicates in String II
Problem-no:1209
difficulty:Medium
*/

class Solution {
public:
    string removeDuplicates(string s, int k) {
       vector<pair<char, int>> counts;
    for (int i = 0; i < s.size(); ++i) {
        if (counts.empty() || s[i] != counts.back().first) {
            counts.push_back({s[i],1 });
        } else if (++counts.back().second == k) {
            counts.pop_back();
        }
    }
    s = "";
    for (auto &x : counts) {
        s += string(x.second, x.first);
    }
    return s; 
    }
};
