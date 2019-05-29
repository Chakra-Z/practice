#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned int reverse_bit(unsigned int value)
{
	int arr[32] = { 0 };
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 0; i < 32; i++)
	{
		arr[i] = value & 1;
		value = value >> 1;
	}//逆向存入arr数组
	for (i = 0; i < 32; i++)
	{
		sum += arr[i] * pow(2, (31 - i));
	}
	return sum;
}

int main()
{
	int input = 0;
	int output = 0;
	printf("请输入要进行二进制翻转的数字：");
	scanf("%d", &input);
	reverse_bit(input);
	output = reverse_bit(input);
	printf("翻转后：%u ", output);
	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

float Ave(float x, float y)
{
	return  (x - y )/ 2 + y;
}

int main()
{
	int a = 0;
	int b = 0;
	float c = 0;
	printf("请输入两个数字：");
	scanf("%d %d", &a, &b);
	c = Ave(a, b);
	printf("%f", c);
	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int arr[] = {1,2,2,3,1,3,4,4,6,8,6};
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		arr[0] = arr[0]^arr[i];
	}
	printf("%d", arr[0]);
	system("pause");
	return 0;
}

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
void reverve_swap(char *left, char *right)
{
	assert(left != NULL); //断言不是空指针
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
char *reverve(char *p)
{
	int len = strlen(p);
	char *start = p;
	char *end = NULL;
	char *ret = p;
	reverve_swap(p, p + len - 1); //逆序整个字符串
	while (*p)
	{
		start = p;
		while ((*p != ' ') && (*p != '\0')) //找到一块单词
		{
			p++;
		}
		end = p - 1;
		reverve_swap(start, end);//逆序单个单词
		if (*p == ' ') //找到空格
			p++;
	}
	return ret;

}
int main()
{
	char arr[] = "student a am I";
	printf("交换前：%s\n", arr);
	printf("交换后：%s\n", reverve(arr));
	system("pause");
	return 0;
}

