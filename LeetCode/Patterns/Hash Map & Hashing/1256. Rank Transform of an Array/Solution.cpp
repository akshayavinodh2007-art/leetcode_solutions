class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
       vector<int>new_arr=arr;
       sort(new_arr.begin(),new_arr.end());
       unordered_map<int,int>a;
       int rank=0;
       for(int i=0;i<n;i++){
        if(a.find(new_arr[i])==a.end())
        a[new_arr[i]]=++rank;
        else
        a[new_arr[i]]=rank;
       }
       vector<int>ans(n);
       for(int i=0;i<n;i++){
        auto it = a.find(arr[i]);
    ans[i] = it->second;
       }
       return ans;
    }
};