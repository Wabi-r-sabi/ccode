//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//float a = 6.0 / 5;//�����ͱ�����������һ���Ǹ�����(Ĭ��double����)
//	float a = 6.0f / 5.0f;
//	//printf("%f\n", a);
//	printf("%f\n", a);
//	return 0;
//
//}

//int main()
//{
//	int a = 7 % 3;//%��������������������Ϊ����,���ص�������֮�������
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 2;
//	//��a�Ķ�����λ�����ƶ�һλ
//	//���Ʋ�����
//	//��߶���,�ұ߲�0
//	int b = a << 1;//�����2λ
//	printf("b=%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//��a�Ķ�����λ�����ƶ�һλ
//	//���Ʋ�����
//	//��������
//	//�ұ߶���,��߲�ԭ����λ
//	int b = a>>1;//�����32λ
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	//����
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//a^b^b=a
//	//a^a=0
//	// 0^a=a
//	//��ͬΪ0,����Ϊ1
//	printf("a=%d b=%d\n", a, b);
//}

//int main()
//{
//	int a = 13;
// //��a�Ķ������еĵ���λ�ó�1
//	a = a | (1 << 4);
//	printf("a=%d\n", a);
// //��a�Ķ������еĵ���λ�ó�0
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

//��Ŀ������ - ֻ��һ��������

//int main()
//{
//	int a = 10;
//	int arr[10] = {0};//��λ���ֽ�
//	printf("%d\n", sizeof(a));//����a��ռ�ռ�Ĵ�С,��λ���ֽ�
//	printf("%d\n", sizeof(int));//���Ų���ʡ
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));//int [10]��arr���������
//	//sizeof��һ��������,���Ǻ���
//
//}

//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//sizeof�����еı��ʽ�ǲ����������
//	printf("%d\n", s);
//	return 0;
//} 

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//& - ȡ��ַ������
//	int * pa = &a;//pa��������ŵ�ַ�� - pa����һ��ָ�����
//	*pa = 20;//* - �����ò����� - ��ӷ��ʲ�����
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
//	printf("%d\n", arr[4]);//[] - �����±����ò�����
//	//[]�Ĳ�����Ϊ2��:4��arr
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
//	int ret = Add(a, b);//�������ò�����
//	
//	return 0;
//}


//�ṹ��Ա���ʲ�����
//.
//->
//������һ���Զ�������
//struct Book
//{
//	//�ṹ���Ա(����)
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	//�ṹ�������.��Ա��
//	struct Book b = { "c����","C20220502",55};
//	struct Book * pb = &b;
//
//	//�ṹ�������->��Ա��
//	printf("����:%s\n", pb->name);
//	printf("���:%s\n", pb->id);
//	printf("����:%d\n", pb->price);
//
//	//printf("����:%s\n", (*pb).name);
//	//printf("���:%s\n", (*pb).id);
//	//printf("����:%d\n", (*pb).price);
//
//	//printf("����:%s\n", b.name);
//	//printf("���:%s\n", b.id);
//	//printf("����:%d\n", b.price);
//	return 0;
//}

//��������

//