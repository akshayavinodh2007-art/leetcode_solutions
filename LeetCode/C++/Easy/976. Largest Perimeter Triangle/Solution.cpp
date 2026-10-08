class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        int peri=0;
        int max=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
           if (nums[i]+nums[i+1]>nums[i+2])
           peri=nums[i]+nums[i+1]+nums[i+2];
           if(peri>max)
           max=peri;

        }
        return max;
    }
};