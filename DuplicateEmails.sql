/*
Date: 2022-05-04
question-link: https://leetcode.com/problems/duplicate-emails/
title:Duplicate Emails
Problem-no:182
difficulty:Easy
*/

# Write your MySQL query statement below
SELECT Email
from Person
group by Email
having count(*) > 1;