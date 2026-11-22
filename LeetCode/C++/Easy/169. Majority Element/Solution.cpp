#include <algorithm>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>maj_element;
        //set<int>a(nums.begin(),nums.end());
        for(int x: nums){
             maj_element[x]++;
             if(maj_element[x]>nums.size()/2)
            return x;
        }
        return -1;
       /* }
        for(int x : a){
            if(maj_element[x]>nums.size()/2)
            return x;
        }
        return -1;*/
    }
};