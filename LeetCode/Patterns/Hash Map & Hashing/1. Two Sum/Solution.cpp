class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int>a;
      int n=nums.size();
      
      for(int i=0;i<n;i++){
        int y=target-nums[i];
        
        if(a.find(y)!=a.end()){
            return {a[y],i};
            
        }
        a[nums[i]]=i;
      }
      return {};  
    }
};