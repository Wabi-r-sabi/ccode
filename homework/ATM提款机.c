//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void menu()
//{
//	printf("******************************\n");
//	printf("********    1.��ѯ    ********\n");
//	printf("********    2.���    ********\n");
//	printf("********    3.ȡ��    ********\n");
//	printf("********    0.�˳�   *********\n");
//	printf("*****************************\n");
//}
//void improve()
//{
//	int i = 0;
//	������ȷ���������ַ���"123456"
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��������������룡\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�������붼����,�˳���¼\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	menu();
//	do {
//		printf("��ѡ��->:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("********    1.��ѯ    ********\n");
//			break;
//		case 2:
//			printf("********    2.���    ********\n");
//			break;
//		case 3:
//			printf("********    3.ȡ��    ********\n");
//			improve();//�Ľ�
//			break;
//		case 0:
//			printf("********    0.�˳�   *********\n");
//			break;
//		default:
//			printf("�������,����������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}