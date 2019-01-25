//给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
//
//示例 :
//
//输入 : [-2, 1, -3, 4, -1, 2, 1, -5, 4],
//输出 : 6
// 解释 : 连续子数组[4, -1, 2, 1] 的和最大，为 6。
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int maxSubArray(int* nums, int numsSize) {
	int sum = 0;
	int max = nums[0];
	for (int i = 0; i<numsSize; i++)
	{
		if (sum>0)
		{
			sum += nums[i];
		}
		if (sum <= 0)
		{
			sum = nums[i];
		}
		if (sum>max)
		{
			max = sum;
		}
	}
	return max;
}
int main()
{
	int num[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	int len = sizeof(num) / sizeof(int);
	int a = maxSubArray(num, len);
	printf("%d\n", a);
	system("pause");
	return 0;
}
