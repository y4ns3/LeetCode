/*
Given two strings s and t, return true if t is an

of s, and false otherwise.

 

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false

*/

class Solution {
    public:
        bool isAnagram(string s, string t) {
                      
            if(s.size() != t.size()) return false;
            int freq[26] = {0}; 
    
            for (char c : s) freq[c - 'a']++; 
            for (char c : t) freq[c - 'a']--;
    
            for (int count : freq) {
                if (count != 0) return false;
            }
    
            return true; 
    
        }
    };