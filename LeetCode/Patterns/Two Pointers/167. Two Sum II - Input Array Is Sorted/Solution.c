/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
  int slow=0;
  int fast=numbersSize-1;
  int *result=(int *)malloc(2*sizeof(int));
  while(slow<fast){
    int sum=numbers[slow]+numbers[fast];
    if(sum==target){
        result[1]=fast+1;
        result[0]=slow+1;
        *returnSize=2;
        return result;
    }
    else if(sum<target){
        slow++;
    }
    else
    fast--;
  }
  return NULL;}