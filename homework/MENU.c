//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("==========MENU============\n");
//	printf("fabs.....................1\n");
//	printf("sqrt.....................2\n");
//	printf("pow......................3\n");
//	printf("exit.....................4\n");
//}
//double my_fabs(double s)
//{
//	if (s >= 0)
//		s = s;
//	else
//		s = -s;
//	return s;
//}
//double my_sqrt(double k)
//{
//	return sqrt(k);
//}
//double my_pow(double n,double k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * pow(n, k - 1);
//	else
//		return 1.0/ (pow(n, -k));
//}
//double my_sin(double n)
//{
//	return sin(n);
//}
//int main()
//{
//	int input = 0;
//	int n = 0;
//	int k = 0;
//	int s = 0;
//	int x = 0;
//	menu();
//	do
//	{
//		printf("Please Choose:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入一个数:");
//		scanf("%d", &n);
//	    s=fabs(n);
//		printf("%d的绝对值为%d\n",n,s);
//			break;
//		case 2:
//			printf("请输入一个数:");
//			scanf("%d", &k);
//			if (k < 0)
//				printf("输入错误!");
//			else
//			x = sqrt(k);
//			printf("%d开平方的结果为%d\n",k, x);
//			break;
//		case 3:
//			printf("请输入两个数:");
//			scanf("%d %d", &n, &k);
//			x = pow(n, k);
//			printf("%d的%d次幂为%d\n",n,k,x);
//			break;
//			case 4:
//				printf("欢迎下次使用");
//				exit(0);
//				break;
//		default:
//			printf("输入错误,请重新输入！\n");
//			break;
//		}
//	} while (input);
//		return 0;
//	}
