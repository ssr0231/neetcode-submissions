class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int val:nums){
            freq[val]++;
        }
        vector<pair<int,int>> freq_val;
        for(auto it:freq){
            freq_val.push_back({it.second,it.first});
        }
        sort(freq_val.rbegin(),freq_val.rend());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(freq_val[i].second);
        }
        return ans;
    }
};
