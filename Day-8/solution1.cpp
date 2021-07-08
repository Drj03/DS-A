/*question : https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/*/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& m, int k) {
        int r=m.size(); int c=m[0].size();
        vector<int> v;
        set<pair<int,int>> mp;
        int sum=0;
        for(int i=0;i<r;i++){
            v=m[i];
           sum=accumulate(v.begin(),v.end(),sum);
           
            mp.insert({sum,i});
            sum=0;
            v.clear();
        }
       
       int ct=0;
        for(auto i:mp){
             
                v.push_back(i.second);
              ct++;
            if(ct==k)
                break;
        }
    return v;
    }
};