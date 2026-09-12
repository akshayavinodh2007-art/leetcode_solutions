void moveZeroes(int* nums, int numsSize) {
    int p1=0;
for(int i=0;i<numsSize;i++){
if(nums[i]!=0){

nums[p1]=nums[i];
p1++;}}
while(p1<numsSize){
nums[p1]=0;
p1++;}


}