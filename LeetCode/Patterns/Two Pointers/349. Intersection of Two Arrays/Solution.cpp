class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        unordered_set<int>new1(nums1.begin(),nums1.end());
        unordered_set<int>new2(nums2.begin(),nums2.end());
   
        unordered_set<int>ans1;
        for(int i=0;i<n2;i++){
            if(new1.find(nums2[i])!=new1.end()){
                ans1.insert(nums2[i]);
            }
        }
        vector<int>ans(ans1.begin(),ans1.end());
        return ans;}
};