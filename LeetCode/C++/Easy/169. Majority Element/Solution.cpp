#include <algorithm>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>maj_element;
        set<int>a(nums.begin(),nums.end());
        for(int x: a){
             maj_element[x]=count(nums.begin(),nums.end(),x);
        }
        for(int x : a){
            if(maj_element[x]>nums.size()/2)
            return x;
        }
        return -1;
    }
};