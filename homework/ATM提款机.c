//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void menu()
//{
//	printf("******************************\n");
//	printf("********    1.查询    ********\n");
//	printf("********    2.存款    ********\n");
//	printf("********    3.取款    ********\n");
//	printf("********    0.退出   *********\n");
//	printf("*****************************\n");
//}
//void improve()
//{
//	int i = 0;
//	假设正确的密码是字符串"123456"
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入！\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码都错误,退出登录\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	menu();
//	do {
//		printf("请选择->:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("********    1.查询    ********\n");
//			break;
//		case 2:
//			printf("********    2.存款    ********\n");
//			break;
//		case 3:
//			printf("********    3.取款    ********\n");
//			improve();//改进
//			break;
//		case 0:
//			printf("********    0.退出   *********\n");
//			break;
//		default:
//			printf("输入错误,请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}