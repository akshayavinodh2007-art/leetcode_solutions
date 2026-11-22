class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int,int>counts;
        int max=0;
        int maj=0;
        for(int num:nums){
            counts[num]++;
            if(max<counts[num]){
            max=counts[num];
            maj=num;}
        }
        return maj;
        
    }
};