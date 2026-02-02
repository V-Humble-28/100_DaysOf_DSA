/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

//Function Definition (logic only)

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j,c=0;
    int *ans = malloc(2 * sizeof(int));
    for (i=0 ; i<numsSize ; i++)
    {
        for (j=0 ; j<numsSize ; j++)
        {
            if(nums[i]+nums[j]==target && i!=j)
            {
                ans[0]=i;ans[1]=j;
                c++;break;
            }
        }
        if (c>0)
        {
            break;
        }
    }
    *returnSize = 2;
    return ans;

}
