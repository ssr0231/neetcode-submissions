class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++){
            int curr=nums[i];
            int len=1;
            while(find(nums.begin(),nums.end(),curr+1)!= nums.end()){
                curr++;
                len++;
            }
            res=max(res,len);
        }
        return res;
        
    }
};
