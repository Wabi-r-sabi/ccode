//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int creatRandomNumber(int n)
//{
//	return rand() % 100 + 1;//%100的余数是0-99，然后+1，范围就是1-100
//}
//void playGame()
//{
//	int n = 0;
//	int ret = creatRandomNumber(n);
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("	猜小了!:\n");
//		}
//		else if (guess > ret)
//		{
//			printf("	猜大了!\n");
//		}
//		else
//		{
//			printf("恭喜你猜中了，获得奖励!\n");
//			printf("***********************\n");
//			break;
//		}
//	}
//}
//void getReward()
//{
//	printf("奖励5道编程题,点击领取\n");
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	playGame();
//	getReward();
//	return 0;
//}