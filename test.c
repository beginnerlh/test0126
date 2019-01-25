//����һ���������� nums ���ҵ�һ���������͵����������飨���������ٰ���һ��Ԫ�أ������������͡�
//
//ʾ�� :
//
//���� : [-2, 1, -3, 4, -1, 2, 1, -5, 4],
//��� : 6
// ���� : ����������[4, -1, 2, 1] �ĺ����Ϊ 6��
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
