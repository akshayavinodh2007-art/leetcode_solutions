class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int,int>a;
     int n=nums.size();
     vector<int>ans;
     for(int i=0;i<n;i++){
        a[nums[i]]++;
       // if(a[nums[i]]==k)
        //ans.push_back(a[nums[i]]);
     } 
     vector<pair<int,int>>v(a.begin(),a.end()); 
     sort(v.begin(),v.end(),[](auto &x,auto &y){
     return x.second > y.second;
     });
     for(int i=0;i<k;i++){
    ans.push_back(v[i].first);
     }
     return ans; 
    }
};