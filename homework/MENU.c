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
//			printf("������һ����:");
//		scanf("%d", &n);
//	    s=fabs(n);
//		printf("%d�ľ���ֵΪ%d\n",n,s);
//			break;
//		case 2:
//			printf("������һ����:");
//			scanf("%d", &k);
//			if (k < 0)
//				printf("�������!");
//			else
//			x = sqrt(k);
//			printf("%d��ƽ���Ľ��Ϊ%d\n",k, x);
//			break;
//		case 3:
//			printf("������������:");
//			scanf("%d %d", &n, &k);
//			x = pow(n, k);
//			printf("%d��%d����Ϊ%d\n",n,k,x);
//			break;
//			case 4:
//				printf("��ӭ�´�ʹ��");
//				exit(0);
//				break;
//		default:
//			printf("�������,���������룡\n");
//			break;
//		}
//	} while (input);
//		return 0;
//	}
