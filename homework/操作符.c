//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//float a = 6.0 / 5;//除数和被除数至少有一个是浮点数(默认double类型)
//	float a = 6.0f / 5.0f;
//	//printf("%f\n", a);
//	printf("%f\n", a);
//	return 0;
//
//}

//int main()
//{
//	int a = 7 % 3;//%操作的两个操作符必须为整数,返回的是整除之后的余数
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 2;
//	//把a的二进制位向左移动一位
//	//左移操作符
//	//左边丢弃,右边补0
//	int b = a << 1;//最多有2位
//	printf("b=%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//把a的二进制位向右移动一位
//	//右移操作符
//	//算术右移
//	//右边丢弃,左边补原符号位
//	int b = a>>1;//最多有32位
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	//交换
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//a^b^b=a
//	//a^a=0
//	// 0^a=a
//	//相同为0,相异为1
//	printf("a=%d b=%d\n", a, b);
//}

//int main()
//{
//	int a = 13;
// //把a的二进制中的第五位置成1
//	a = a | (1 << 4);
//	printf("a=%d\n", a);
// //把a的二进制中的第五位置成0
//  a=a&~(1<<4);
//  printf("a=%d\n", a);
//	//00000000000000000000000000001101
//	//00000000000000000000000000000001
//	//00000000000000000000000000011101
//	return 0;
//}

//int main()
//{
//	int flag = 0;
//	printf("%d\n", !flag);
//	return 0;
//}

//单目操作符 - 只有一个操作数

//int main()
//{
//	int a = 10;
//	int arr[10] = {0};//单位是字节
//	printf("%d\n", sizeof(a));//计算a所占空间的大小,单位是字节
//	printf("%d\n", sizeof(int));//括号不可省
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));//int [10]是arr数组的类型
//	//sizeof是一个操作符,不是函数
//
//}

//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//sizeof括号中的表达式是不参与运算的
//	printf("%d\n", s);
//	return 0;
//} 

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//& - 取地址操作符
//	int * pa = &a;//pa是用来存放地址的 - pa就是一个指针变量
//	*pa = 20;//* - 解引用操作符 - 间接访问操作符
//	printf("%d\n", a);//20
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i=a++&&++b&&d++;
//	i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[4]);//[] - 就是下标引用操作符
//	//[]的操作数为2个:4和arr
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);//函数调用操作符
//	
//	return 0;
//}


//结构成员访问操作符
//.
//->
//创建了一个自定义类型
//struct Book
//{
//	//结构体成员(变量)
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	//结构体变量名.成员名
//	struct Book b = { "c语言","C20220502",55};
//	struct Book * pb = &b;
//
//	//结构体变量名->成员名
//	printf("书名:%s\n", pb->name);
//	printf("书号:%s\n", pb->id);
//	printf("定价:%d\n", pb->price);
//
//	//printf("书名:%s\n", (*pb).name);
//	//printf("书号:%s\n", (*pb).id);
//	//printf("定价:%d\n", (*pb).price);
//
//	//printf("书名:%s\n", b.name);
//	//printf("书号:%s\n", b.id);
//	//printf("定价:%d\n", b.price);
//	return 0;
//}

//整形提升

//