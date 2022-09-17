#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<int> v;
        v.assign(128,-1);
        int start = -1;
        int s_len = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(v[s[i]]>=0)
                start = max(start,v[s[i]]);
            v[s[i]] = i;
            s_len = max(s_len, (i-start));
        }
        return s_len;
    }
};