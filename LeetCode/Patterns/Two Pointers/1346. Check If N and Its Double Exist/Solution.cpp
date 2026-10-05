class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       int n=arr.size();
       for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           if(arr[i]>n && arr[j]>n ){
            if(arr[i]==2*arr[j])
            return true;
           }
        }
       } 
       return false;
    }
};