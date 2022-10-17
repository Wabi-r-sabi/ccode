#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//
//{
//	char c;
//	scanf("%c",&c);
//	if (c >='a' && c <= 'z')
//	{
//		c += 4;
//		c = c - 26;
//	}
//	else if (c >= 'A' && c <= 'Z')
//	{
//		c += 4;
//		if (c > 90)
//		{
//			c = c -26;
//		}
//	}
//	printf("%c ", c);
//	return 0;
//}
//
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	//getchar();//处理'\n'
//	//清理缓冲区的多个字符
//	int temp = 0;
//	while ((temp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}