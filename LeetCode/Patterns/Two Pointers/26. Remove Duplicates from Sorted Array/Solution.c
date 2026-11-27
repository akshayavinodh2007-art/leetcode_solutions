int removeDuplicates(int* nums, int numsSize) {
    if(numsSize<1)
    return 0;
    int p1=0;
    for(int p2=1;p2<numsSize;p2++){
        if(nums[p1]!=nums[p2]){
            p1++;
            nums[p1]=nums[p2];
        }
    }
    return p1+1;
}