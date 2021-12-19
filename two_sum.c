/*
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * Note: The returned array must be malloced, assume caller calls free().
 */
# include<stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize=2;
    
    int *arr=(int *)malloc((*returnSize)*sizeof(int));
    
    for(int i=0;i<numsSize;i++)
	{
    for(int j=i+1;j<numsSize;j++)
	{
    if(nums[i]+nums[j]==target)
	{
    arr[0]=i;
    arr[1]=j;
    break;
    }
    }
    }
   return arr;

}
