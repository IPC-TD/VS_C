# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include<stdio.h>
//int main()
//{
//	/*
//	s���ַ�����str��
//	d��������int��
//	f����������float��
//	x��ʮ������������Сд��ĸ��
//	x��ʮ��������������д��ĸ��
//	o���˽�������*/
//	int a = 10;
//	unsigned int b = 20;
//	int c = 11, d = 22, e = 200;
//	const short cs = 11;
//	/*printf("����a��ֵ��%d   ����c��ֵ��:%d\n", a, c);
//	printf("a+b��ֵ��%d \n", a+b);
//	printf("����cs %d \n", cs);*/
//	printf("intռ�ÿռ�Ϊ: %d \n", sizeof(int));  //dword
//	printf("shortռ�ÿռ�Ϊ: %d \n", sizeof(short));  //word
//	printf("longռ�ÿռ�Ϊ: %d \n", sizeof(long)); //dword
//	int num1 = 0;
//	scanf("%d", &num1);
//	printf("%d", num1);
//	getchar();  // ��ȡ�ַ����洢�ڱ�����
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("\0");
//	printf("\\0");
//	printf("\n%d\n", strlen("abc"));
//	printf("123");
//	printf("abc");
//	printf("\a\a\a\a\a");
//	return 0;
////}
//int main()
//{	
//	int input = 0;
//	printf("Ҫ�����ڤѻ��?\n");
//	printf("Ҫ�ú�ѧϰ��(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("�ý��\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//}

//int main()
//{
//	int line = 0;
//	printf("�����ڤѻ\n");
//
//	while (line < 20000)
//	{
//		printf("д����:%d\n", line);
//		line++;//ÿ��line��ֵ��+1
//	}
//	if (line >= 20000)
//	{
//		printf("��ҵ��\n");
//	}
//	else
//	{
//		printf("��������");
//	}
//	return 0;
//}

//int Add(n1, n2)
//{
//	//int z = 0;
//	//z = n1 + n2;
//	//return z;
//	//�������������ּ���, ��������������Ҳ��
//	return (n1 + n2);
//}

//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//����
//	scanf("%d %d", &n1, &n2);
//	//���
//	// int sum = n1 + n2;
//	int sum = Add(n1, n2);
//	
//	//��ӡ
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	char arr[4] = { 2,3,4 };
//	printf("%d\n", strlen(arr));
//	int m = 10;
//	//char arr2[m];
//	char arr3[10]="hello";
//	return 0;
//}

//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	// / �������˶���������ʱ��, ִ�е�ʱ��������, ���������һ���Ǹ�������ִ�и������ĳ���
//	float a = 7 / 2.0;
//	int b = 7 % 2;
//	printf("%f\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
	//int flag = 0;
	//if (!flag)
	//{
	//	printf("�Ǻ�\n");
	//}
	// 
	//sizeof�ǲ�����, �ǵ�Ŀ������
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof arr);
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = a++; //����++, ��ִ��b=a, ��ִ��a++, a++ = a+1
//	//printf("%d\n", b); //10
//	//printf("%d\n", a); //11
//
//	//int a = 10;
//	//int b = ++a; //��ִ��++, ��ִ��b=a
//	//printf("%d\n", b); //11
//	//printf("%d\n", a); //11
//
//	int a = (int)3.14;
//	// int b = int(3.14) python д������
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	// &&�߼��� - ���� ��ͬand
//	// ||�߼��� - ����  ��ͬor
//	int a = 10;
//	int b = 20;
//	if (a && b) //��ͬ��py�е�and
//	{
//		printf("�������");
//	}
//	if (a || b);  // ��ͬ��py�е�or
//	{
//		printf("��һ�������");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int b = 30;
//	int r = a > b ? a : b; 
//	printf("%d\n", r);
//	return 0;
//}
//extern int g_val;
//void main()
//{
//	printf("%d\n", g_val);
//}

//extern Add(int x, int y);
//int main()
//{
//	int a = 10;
//	register int b = 20;//���齫�ñ����ŵ��Ĵ����д洢
//
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}

// static ��̬���ιؼ���

//# define NUM 100; //�����ʶ����
//int main();
//{
//	printf("%d\n", NUM);
//	int a = NUM;
//	printf("%d\n", a);
//	int arr[NUM] = { 0 };
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//���ڴ�����4���ֽ�, ����10
//	//&a;//ȡ��ַ������
//	printf("%p\n", &a);//000000A7380FFBA4
//	int* p = &a;
//	//p����ָ��, 
//	*p = 20; //�����ò�����, ��˼��ͨ��p�д�ŵĵ�ַ, �ҵ�p��ָ��Ķ���, *p����pָ��Ķ���
//
//	printf("%d\n", a);
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(long long*));
//	printf("%zu\n", sizeof(double*));
//	return 0;
//}

////�ṹ��, ѧ��
//struct Stu
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* pc)
//{
//	printf("%s %d %s %s\n", (*pc).name, (*pc).age, (*pc).sex, (*pc).tele);
//	//->
//	//�ṹ��ָ�����->��Ա��
//	printf("%s %d %s %s\n", pc->name, pc->age, pc->sex, pc->tele);
//}
//
//int main()
//{
//	struct Stu s = { "dumingya", 18, "nv", "12345678912" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//
//	print(&s);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int z = a / b;
//	int y = a % b;
//	printf("%d %d", z, y);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	if (3 == 5)
//	{
//		printf("hehe\n");
//		printf("xixi\n");
//	};
//
//	if (3 == 3)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	if (a < 10)
//		printf("�ɹ����\n");
//	else if (a > 10, a < 30) //�ᵼ����ֻ��鶺���ұߵı��ʽ, Ӧ��ʹ��&&
//		printf("10-30");
//	else if (a > 30, a < 50) //�ᵼ����ֻ��鶺���ұߵı��ʽ, Ӧ��ʹ��&&
//		printf("30-50");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a%2== 1)
//			printf("%d ", a);
//		a++;
//	}
//}

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)//day ����������
//	{
//		case 1://�����1�����ǳ�������
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		default:
//			printf("�������");
//			break;
//	}
//	return 0;
//}

//int main()
//{
//	//int ch = getchar();
//	//printf("%d %c\n", ch, ch);
//	//putchar(ch);
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//#EOF ��end of file �ļ�������־����˼, 
//		//�����ȡ���ַ�����Ҳ�������
//		putchar(ch);
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 10; i++) //̫�ϵı�������֧����for���洴������i, ��Ҫ��ѭ������ǰ������
//		printf("%d ", i);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		i++;
//		if (i == 5)
//			break;	
//		printf("%d ", i);
//	}
//	while (i <= 10);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int y = 1;
//	int z = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		y = y * i;
//		z += y;
//	}
//
//	printf("%d\n", y);
//	printf("%d", z);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 100;
//	//��һ������������в��Ҿ��������n
//	int i = 0;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == k)
//			printf("�ҵ���, �±���:%d", i);
//		break;
//	}
//	if (i = n)
//		printf("û�ҵ�\n");
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//��һ������������в��Ҿ��������k
//	int k = 11;
//	//scanf("%d", &k);
//
//	int i = 0;//��ʼ���±�
//	int left = 0;//��ʼ����߽�
//	int right = sizeof(arr) / sizeof(arr[0]);//��ʼ���ұ߽�
//	for (i = (left + right) / 2; arr[i] != k; i = (left + right) / 2)
//	{
//		if (arr[i] < k)
//		{
//			left = ++i;
//			if (left > right)
//			{
//				printf("û�ҵ�");
//				break;
//			}
//		}
//
//		else if (arr[i] > k)
//		{
//			right = --i;
//			if (left > right)
//			{
//				printf("û�ҵ�");
//				break;
//			}
//		}
//	}
//	if (arr[i] == k)
//		printf("%d", i);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//��һ������������в��Ҿ��������k
//	int k = 0;//��ʼ������������
//	scanf("%d", &k);//�������������
//
//	int i = 0;//��ʼ�������±�
//	int left = 0;//��ʼ����߽�
//	int right = sizeof(arr) / sizeof(arr[0])-1;//��ʼ���ұ߽�
//	for (i = (left + right) / 2; left <= right; i = (left + right) / 2)
//	{
//		if (arr[i] < k)
//		{
//			left = ++i;
//		}
//
//		else if (arr[i] > k)
//		{
//			right = --i;
//		}
//		else
//		{
//			printf("�ҵ���, �����������±���:%d", i);
//			break;
//		}
//
//	}
//	if (left > right)
//		printf("û�ҵ�");
//	return 0;
//}
//
//#include <string.h> //����strlen
//#include <windows.h> //����Sleep
//#include <stdlib.h> //����system
//
//int main()
//{
//	char arr1[] = "welcome to school";
//	char arr2[] = "#################";
//
//	int left = 0;
//	int right = strlen(arr2)-1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);//����1��
//		//�����Ļ
//		system("cls");//system��һ���⺯��, ����ִ��ϵͳ����
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include <string.h> //����strcmp�Ƚ��ַ���
//ͷ�ļ��ù�һ�κ�, �����ע�͵���, �����ﻹ��, ������
//int main()
//{
//	char pass_word[] = "12345678";
//	char pass_word2[18] = { 0 };
//
//	int i = 0;
//	while (i < 3)
//	{
//		printf("����������>:");
//		scanf("%s", pass_word2);
//		if (strcmp(pass_word2, pass_word)==0)
//		{
//			printf("����������ȷ!");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//			printf("�㻹��%d�λ���\n", 2 - i);
//			printf("-----------------\n");
//		}
//		i++;
//	}
//
//	return 0;
//}

//#include <>


//
//void menu()
//{
//	printf("---------------------------------\n");
//	printf("-----------  1.������   ---------\n");
//	printf("-----------  0.�˳���Ϸ ---------\n");
//	printf("---------------------------------\n");
//
//}
//
//#include <stdlib.h>
//void play_game() {
//	int guess = -1;
//	int ret = rand()%100+1;//rand()����0��RAND_MAX
//	//printf("%d\n", ret);
//	while (guess != ret)
//	{
//		printf("��������²������:>");
//		scanf("%d", &guess);
//		if (guess == ret)
//		{
//			printf("�¶���\n");
//			printf("�����ѽ���, ������ѡ��˵�\n");
//			menu();
//		}
//		else if (guess < ret)
//			printf("С��\n");
//		else
//			printf("����\n");
//	}
//}
//#include <time.h>
//int main()
//{
//	//srand();
//	int input = 0;
//	menu();
//	srand((unsigned)time(NULL));
//
//	do {
//		printf("��������Ҫִ�еĲ���:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1: {
//			//׼��ʵ����Ϸ�߳�
//			printf("��ʼ��Ϸ\n");
//			play_game();
//			break;
//		}
//		case 0: {
//			printf("���˳���Ϸ\n");
//			break;
//		}
//		default: {
//			printf("����������\n");
//			break;
//		}
//		}
//
//	} while (input);
//
//	return 0;
//}


//#include <windows.h>
//int main() {
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	Sleep(300);
//	goto again;
//	return 0;
//}

//#include <stdlib.h> //����system
//#include <string.h> //����strcmp
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 300");
//again:
//	printf("��ע��, ��ĵ��Խ���300���ڹػ�, ������: ������, ��ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//		system("shutdown -a");
//	else {
//		printf("����������\n");
//		goto again;
//	}
//	return 0;
//}

//#include <string.h>
//int main() {
//	char arr[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr, arr2);
//	printf("%s\n", arr);
//
//	char arr3[] = "hello world";
//	memset(arr3, 'x', 5);
//	printf(arr3);
//	return 0;
//}

//int get_max(int a, int b)
//{
//	return (a > b ? a : b);
//}
//int main() {
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	//���ú���
//	int m = get_max(x, y);
//	printf("%d\n", m);
//	return 0;
//}

//void Swap(int* x, int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//// ��ʵ�δ��ݸ��βε�ʱ��, �β���ʵ�ε�һ����ʱ����
//// ���βε��޸Ĳ��ܸı�ʵ��
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("a = %d, b = %d \n", a, b);
//	Swap(&a, &b);
//	printf("a = %d, b = %d \n", a, b);
//
//	return 0;
//}

// �ж������ĺ���
//int judgment(int x)
//{
//	int z = 0;
//	for (z = 2; z < x; z++)
//	{
//		if (x % z == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {
//	//��������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (judgment(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n�����ĸ���Ϊ:%d", count);
//	//�ж�����
//	//�������
//	return 0;
//}

//#include <math.h>
//// ����һ����ѧ������
////double sqrt(double x);
////������x ��һ���Ǹ���ʵ��������������
////����ֵ������ x ��ƽ��������� x < 0�����Ϊ δ���壨���ܷ��� NaN����������������
//// �������λ����ת���ɸ�����
////���������ͣ�int���������ݸ� sqrt() �����������Զ�������ת��Ϊ�����ͣ�double�����Է��Ϻ����Ĳ�������Ҫ��
//int judgment(int x)
//{
//	int z = 0;
//	for (z = 2; z < sqrt(x); z++)//square root ��ƽ����
//	{
//		if (x % z == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {
//	//��������
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//ż������������
//	{
//		if (judgment(i) == 1)// ������ ������Ϊ"is_prime", prime����ѧ������������˼;
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n�����ĸ���Ϊ:%d", count);
//	//�ж�����
//	//�������
//	return 0;
//}

////�����ж�
//int target_year(int n) {
//	if ((n % 100 != 0 && n % 4 == 0) || (n % 400 == 0 ))
//		return 1;
//	return 0;
//}
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++) {
//		if (target_year(i) == 1) { //������leap year, �������Խ� is_leap_year
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n�������Ϊ:%d", count);
//	return 0;
//}


//int target_num(int*x, int size, int y) {
//	int left = 0;
//	int right = size - 1;
//	while (right >= left) {
//		int mid = (left + (right-left)) / 2; // ��ֹ�ڴ����
//		if (x[mid] > y) {
//			right = mid -1;
//		}
//		else if (x[mid] < y) {
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//int main() {
//	int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int n = 1;
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	int result = target_num(arr, size, n);
//	if (result == -1) {
//		printf("δ�ҵ�Ŀ��ֵ");
//	}
//	else {
//		printf("n��arr����ĵ�%dλ", result + 1);
//	}
//	return 0;
//}

//#include "add.h"
//#include "sub.h"
//# pragma comment(lib, "add.lib")
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", Add(a, b));
//	printf("%d\n", Sub(a, b));
//
//	return 0;
//}

////�����ĵݹ�
//void print(unsigned int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main() {
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//#include <string.h>
//int guess(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main() {
//	char word[] = "�²�����˭?";
//	printf("�ַ�������Ϊ: %d \n", guess(word));
//	printf("�ַ�������Ϊ: %d \n", strlen(word));
//	return 0;
//}


//int my_strlen(char* str) {
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1); // ���д��++str, ���޸�ԭָ��(�ⲿָ��)����
//	else
//		return 0;
//}
//int main() {
//	char arr[] = "abcd";
//	printf("%d", my_strlen(arr));
//	return 0;
//}


//int count = 0;
//int Fib(int n) {
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int count = 0;
//int Fib(int n) {
//	int i = 0;
//	int ret = 0;
//	int a = 1;
//	int b = 1;
//	if (n <= 2)
//		return 1;
//	else {
//		for (i = 3; i <= n; i++) {
//			ret = a + b;
//			a = b;
//			b = ret;
//			count++;
//		}
//		return ret;
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("���: %d\nͳ�ƴ���: %d\n", Fib(n), count);
//	return 0;
//}


//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && a > c) {
//		if (b > c)
//			printf("%d %d %d", a, b, c);
//		else 
//			printf("%d %d %d", a, c, b);
//	}
//	else if (b > c) {
//		if (a > c)
//			printf("%d %d %d", b, a, c);
//		else
//			printf("%d %d %d", b, c, a);
//	}
//	else {
//		if (a > b)
//			printf("%d %d %d", c, a, b);
//		else
//			printf("%d %d %d", c, b, a);
//	}
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b) {
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c) {
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c) {
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main() {
//	int i = 0;
//	// ���3�ı���
//	for (i = 3; i < 100; i += 3) {
//		printf("%d ", i);
//	}
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d %d", &a, &b);
//	//if (a > b) {
//	//	int tmp = a;
//	//	a = b;
//	//	b = tmp;
//	//}
//	a = (a > b) ? b : a;
//
//	for (i = a; i >= 1; i--) {
//		if (a % i == 0 && b % i == 0) {
//			printf("�������Լ����: %d", i);
//			break;
//		}
//	}
//return 0;
//}

//// շת�����
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	a = (a > b) ? b : a;
//	int min = a;
//	while (1) {
//		if (a % min == 0 && b % min == 0) {
//			printf("�������Լ����: %d", min);
//			break;
//		}
//		else {
//			int tmp = a;
//			a = b % a;
//			b = tmp;
//			min = a;
//		}
//	}
//
//	return 0;
//}

//// �Ż�շת�����
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);// 18 24
//	while (c = a % b) {
//		a = b;
//		b = c;
//	}
//	printf("�������Լ����: % d", b);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//�жϸ�λ��
//			count++;
//		if (i / 10 == 9)//�ж�ʮλ��
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main() {
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum =sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
//}


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//��Ҫ���е�Ԫ�ظ��� = �ܸ��� -1
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) // ÿ��Ԫ����Ҫ�Աȼ���
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 4, 5, 1, 6, 4, 3, 74, 5, 1, 47, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//void print(int arr[][3], int row, int column)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (; i < column; i++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//}
//
//int main()
//{
//	int arr[][3] = { 3,3,3,4,4,4,5,5,5 };
//	print(arr, 3, 3);
//	return 0;
//}

////�ݹ鷽ʽ����ӡ������ÿһλ
//int rezult(int n)
//{
//	if (n > 9)
//	{
//		rezult(n / 10);
//		printf("%d ", n % 10);
//	}
//	else
//		printf("%d ", n);
//}
//int main()
//{
//	int a = 0;
//	printf("����������:");
//	scanf("%d", &a);
//	rezult(a);
//}

//// �ǵݹ���׳�
//void rezult(int a)
//{
//	int i = 0;
//	int product = 1;
//	for (i = a; i >= 1; i--)
//	{
//		product = product * i;
//	}
//	printf("%d", product);
//}
// �ݹ鷽ʽ��׳�
//int rezult(int a)
//{
//	if (a == 1)
//	return 1;
//	else
//	return a * rezult(a - 1);
//	
//}
//
//int main()
//{
//	int a = 0;
//	printf("���������ݣ�");
//	scanf("%d", &a);
//	printf("%d", rezult(a));
//  return 0;
//}

//#include <string.h>
//void process(char arr[], const int len)
//{
//	char temporary[len] = 0;
//
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int length = strlen(arr) / strlen(arr[0]);
//	process(arr, length);
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//void rezult(char* arr)
//{
//	printf("%c", arr[02]);
//}
//int main()
//{
//	char arr[][3] = { 's', 'y', 'o', 'a'};
//	rezult(arr);
//	return 0;
//}


////�ǵݹ�ʵ���ַ�������
//void reverse_string(char arr[], int left, int right)
//{
//	char temporary = 0;
//	for (left = 0; left < right; left++, right--)
//	{
//		temporary = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temporary;
//	}
//}
//// �ݹ�ʵ���ַ�������
//void reverse_string(char arr[], int left, int right)
//{
//	char temporary = 0;
//	if (left < right)
//	{
//		temporary = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temporary;
//		left++;
//		right--;
//		reverse_string(arr, left, right);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 2;
//	reverse_string(arr, left, right);
//	int i = 0;
//	for (; arr[i] != '\0';i++)
//		printf("%c", arr[i]);
//	return 0;
//}

//// �ݹ�ʵ���ַ�������2
//int string_length(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* arr)
//{
//	int length = string_length(arr);
//	char temporary = *arr;
//	*arr = *(arr + length - 1);
//	*(arr + length - 1) = '\0';
//	if (*(arr + 1) != '\0')
//		reverse_string(arr + 1);
//	*(arr + length - 1) = temporary;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	int i = 0;
//	printf("%s", arr);
//	return 0;
//}

////�ݹ鷽ʽ����һ����ÿλ֮��
//int Calculate_cumulative_sum(int sum)
//{
//	if (sum > 9)
//	{
//		return (sum % 10) + Calculate_cumulative_sum(sum / 10);
//	}
//	else
//		return sum;
//}
//
//int main()
//{
//	int num = 0;
//	printf("������һ����������");
//	scanf("%d", &num);
//	printf("������Ϊ��%d", Calculate_cumulative_sum(num));
//	return 0;
//}

////�ݹ鷽ʽ����һ����ÿλ֮��2
//int digitsum(unsigned int sum)
//{
//	if (sum > 9)
//	{
//		return (sum % 10) + digitsum(sum / 10);
//	}
//	else
//		return sum;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	printf("������һ����������");
//	scanf("%u", &num);
//	printf("������Ϊ��%d", digitsum(num));
//	return 0;
//}

////�ݹ�ʵ��n��k�η�
//int exponentiation(int num, int k)
//{
//	if (k > 1)
//	{
//		return num * (exponentiation(num, k - 1));
//	}
//	else
//		return num;
//}
//
//int main()
//{
//	int num = 0;
//	int k = 0;
//	printf("���������ݣ�");
//	scanf("%d %d", &num, &k);
//	printf("����������%d", exponentiation(num, k));
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	char arr2[20] = { 'h' };
//	float arr3[20] = { 1.0 };
//	printf("%s %d\n", arr, sizeof(arr));
//	printf("%c\n", arr2[3]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	//������
//	return 0;
//}

//// ��������֮�以�ཻ�����ݣ�����һ����
//void data_exchange(int arr1[], int arr2[], int strlen)
//{
//	int i = 0;
//	for (i = 0; i < strlen; i++)
//	{
//		int temporary = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temporary;
//	}
//
//	
//}
//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 10 };
//	int strlen = sizeof(arr1) >= sizeof(arr2) ? sizeof(arr1) / sizeof(arr1[0]) : sizeof(arr2) / sizeof(arr2[0]);
//	data_exchange(arr1, arr2, strlen);
//	int i = 0;
//	for (i = 0; i < strlen; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < strlen; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	printf("%p\n", arr); // �����Ԫ�ص�ַ
//	printf("%p\n", &arr[0]); // �����Ԫ�ص�ַ
//
//	printf("%c\n", *arr); // �����Ԫ��
//	printf("%c\n", arr[0]); // �����Ԫ��
//
//	printf("%s\n", arr); // ����ַ���
//	printf("%s\n", &arr[0]); // ����ַ���
//
//	//������
//	return 0;
//}

////дһ��������ʵ����������ĳ�ʼ��init������������������print�������ù���reverse
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	for (;left < right; left++, right--)
//	{
//		int temporary = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temporary;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//	// ����
//	int a = 7;
//	int b = -7;
//
//	// ������a��b��������1λ
//	a = a >> 1;
//	b = b >> 1;
//	printf("%d %d", a, b); // �����
//	return 0;
//}

//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//
//void set_age1(struct Stu stu)
//{
//	stu.age = 18;
//}
//void set_age2(struct Stu* pStu)
//{
//	pStu->age = 18;//�ṹ��Ա����
//}
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu;//�ṹ��Ա����
//	stu.age = 20;//�ṹ��Ա����
//	set_age1(stu);
//	pStu->age = 20;//�ṹ��Ա����
//	set_age2(pStu);
//	return 0;
//}

//struct Student1
//{
//	char name[20]; // ����
//	int age; // ����
//	char sex[5]; // �Ա�
//	char id[20]; // ѧ��
//}Stu1, Stu2 = { "zhangsan", 20, "��", "123456" }; // �ֺŲ��ܶ� 
//
//
//int main()
//{
//	printf("%s %d %s %s", Stu2.name, Stu2.age, Stu2.sex, Stu2.id);
//}

//// �ṹ�����ʹ�õ�ַ���λ����
//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////�ṹ�崫��
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////�ṹ���ַ����
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);  //���ṹ��
//	print2(&s); //����ַ
//	return 0;
//}

//// дһ���������ز�����1�ĸ���
//int numof1(int n)
//{
//	int i = 0;
//	int count = 0;
//	if (n < 0)
//	{
//		n -= 1;
//		n = ~n;
//
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (n & 1 == 1)
//		{
//			count++;
//		}
//		n >>= 1;
//	
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n); // 0000 1111
//	printf("%d", numof1(n));
//	return 0;
//}

//// �������Σ���������������λ��ͬ
//int numof1(int n, int m)
//{
//	int i = 0;
//	int count = 0;
//	int tmp = n ^ m;
//	while (tmp)
//	{
//		tmp &= tmp - 1;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n, m = 0;
//	scanf("%d %d", &n, &m); // 0000 1111
//	printf("%d", numof1(n, m));
//	return 0;
//}

//// ��ӡ����*��ɵ���ĸX
//void print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == j || i == n - 1 - j)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//// �ж�ĳһ��ĳһ���ж�����
//int isLeapYear(int y)
//{
//	return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	while (scanf("%d %d", &year, &month) == 2)
//	{
//		day = days[month];
//		if (isLeapYear(year) && day == 2)
//			day++;
//		printf("%d", day);
//	}
//	return 0;
//}



//#include <assert.h>
//char* my_strcpy(char* p1, const char* p2)
//{
//	char* tmp = p1;
//	assert(p1 && p2); // p1��p2��Ϊ�棨���ǿ�ָ�룩���Ż����ִ��;
//	while (*p1++ = *p2++)
//	{
//		;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr[20] = "�����������";
//	char arr2[20] = "��Һ�";
//	char* arr3 = NULL;
//
//	printf("%s\n", my_strcpy(arr, arr2));
//	printf("%s\n", my_strcpy(arr, arr3));
//
//	return 0;
//}

//// �ж��Ƿ񹹳�������
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && a == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (a == b || a == c || b == c)
//			{
//				printf("Isosceles triangle!\n");
//
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}

//// ʹ��ָ�����ʽ����ӡ��������
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//
//	return 0;
//}

//// �����ַ���
//#include <string.h>
//void string_reverse(char arr[], int str)
//{
//	int left = 0;
//	int right = str - 1;
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//// �ݹ�ķ���
//void string_reverse2(char arr[], int right)
//{
//	if (right > 0) 
//	{
//		int left = 0;
//		char tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		string_reverse2(arr + 1, right - 2);
//	}
//
//}
//
//int main()
//{
//	// �����ַ���I am a student
//	char arr[100] = { 0 };
//	gets(arr);
//	printf("%s\n", arr);
//	string_reverse(arr, strlen(arr));
//	printf("%s\n", arr);
//	string_reverse2(arr, strlen(arr) - 1);
//	printf("%s\n", arr);
//	return 0;
//}
//
//// ��ϰS2 = 2+22+222+2222+22222
//// �ݹ�
//int Sn(int a, int n)
//{
//	if (n > 0)
//	{
//		return a + Sn(a * 10 + 2, n - 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//// ����
//int Sn2(int a, int n)
//{
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//
//	//// ����ǰN��
//	//int j = 0;
//	//for (i = 0; i < n; i++)
//	//{
//	//	ret = 0;
//	//	// ����ÿһ��
//	//	for (j = 0; j <= i; j++)
//	//	{
//	//		ret = a + ret*10;
//	//	}
//	//	sum += ret;
//	//}
//	// ��
//	for (i = 0; i < n; i++)
//	{
//		ret = a + ret * 10;
//		sum += ret;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a = 2;
//	int sum = Sn(a, 5);
//	printf("%d\n", sum);
//	printf("%d\n", Sn2(2, 5));
//	return 0;
//}


//��ϰ��10000���ڵ�ˮ�ɻ���
//#include <math.h>

//// ���ڱ�������һ��
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10001; i++)
//	{
//		if (i < 10)
//		{
//			if (i == pow(i, 1))
//			{
//				printf("%d ", i);
//			}
//		}
//		else if (i < 100)
//		{
//			if (i == pow(i % 10, 2) + pow(i / 10, 2))
//			{
//				printf("%d ", i);
//			}
//		}
//		else if (i < 1000)
//		{
//			if (i == pow(i % 10, 3) + pow((i / 10) % 10, 3) + pow(i / 100, 3))
//			{
//				printf("%d ", i);
//			}
//		}
//		else
//		{
//			if ((i == pow(i % 10, 4) + pow((i / 10) % 10, 4) + pow((i / 100) % 10, 4) + pow(i / 1000, 4)) && i != 10000)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}
//// �����Խⷨ
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		//�жϼ�λ��
//		int count = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			count++;
//		}
//		// ��ÿһλ��count�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		// �ж�ˮ�ɻ�
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//int Number(int n)
//{
//	if (n > 0)
//	{
//		int count = 0;
//		count = n + Number(n / 2);
//		return count;
//	}
//	else 
//	{
//		return 0;
//	}
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	// ����ʵ��
//	int count = 0;
//	while (n)
//	{
//		count += n / 1;
//		n = n / 2;
//	}
//	printf("%d\n", count);
//	// �ݹ�ʵ��
//	printf("%d\n", Number(20));
//	return 0;
//}

//// ��Ҫ���ǳ������µĿ�ƿ��ʧ����
//int Number(int m, int tmp) // m��ƿ������tmp�ǿ�ƿ
//{
//	if (m > 0)
//	{
//		//�ݹ������⣬��������
//		return m + tmp / 2 + Number(m / 2, tmp += m % 2 - tmp / 2);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int m = 20;
//	int empty = m / 1; // ��ƿ
//	int count = m / 1; // ��ƿ��
//
//	while (empty >= 2)
//	{
//		count += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", count);
//	printf("%d\n", Number(m, 0));//�ݹ�
//
//	return 0;
//}

//// ������������С������
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int tmp = 0;
//	while (1)
//	{
//		printf("�����룺");
//		scanf("%d %d", &n, &m);
//		// n > m ? n, m : (tmp = n, n = m, m = tmp); // �Ż�һ��
//		n = n > m ? n : m;
//
//		int i = 0;
//		while (1)
//		{
//			i += n;
//			if (i % n == 0 && i % m == 0)
//			{
//				break;
//			}
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}

//// �����ַ���
//#include <string.h>
//void string_reverse(char arr[], int left, int right)
//{
//	while (left < right)
//	{
//		// ���ȿ��Ǵ���Ŀɶ��Ժ��߼������ȣ���ǰ��д���Ѿ��㹻�������� tmp ������ѭ���ڲ��Ǹ��õ�ѡ��
//		// �����Ż�������������ܳ�Ϊƿ����ѭ��ִ�д����ر����Ƶ���������Խ� tmp �ᵽѭ���⣬����ͨ����΢�Ż����ִ��������������Ż��ⲿ�ִ��롣
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//// Ҫ�������ַ����������ʲ����򣬱����Ų�����
//// ���룺i like beijing.
//// �����beijing. like i
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//
//	// �������Ĺ��̣�ʹ��ָ�����ʽ������һ�㡣
//	// ���õ��ʺͷ��ţ������ո�
//	int i = 0; // �����±�
//	int count = 0; // ����+���ų��ȼ���
//	int tmp1;
//	int left1 = 0;
//	int right1 = 0;
//	while (arr[i] != '\0')
//	{
//		while (arr[i] == ' ')
//		{
//			i++;
//		}
//
//		count = 0; //һ�����ʺ����ĳ���
//		tmp1 = i;
//		while (arr[tmp1 + 1] != ' ' && arr[tmp1+1] != '\0')
//		{
//			count++;
//			tmp1++;
//		}
//
//		left1 = i;
//		right1 = i + count;
//		string_reverse(arr, left1, right1);
//		i += count + 1;
//	}
//
//	int left = 0;
//	int right = strlen(arr) - 1;
//	string_reverse(arr, left, right);
//	printf("%s\n", arr);
//	return 0;
//}

//// �����ַ����ع��汾��
//#include <string.h>
//void myStringReverse(char* left, char* right)
//{
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	while (1)
//	{
//		char arr[101] = { 0 };
//		gets(arr);
//
//		int len = strlen(arr);
//		myStringReverse(arr, arr + len - 1);
//
//		char* start = arr;
//		char* end = arr;
//		// ����㣺������*�����������ȼ�С��++�������ڼӷ�����Ҫ�����š�
//		while (*(end+1) != '\0')
//		{
//			while (*(end + 1) != ' ' && *(end + 1) != '\0')
//			{
//				end++;
//			}
//			myStringReverse(start, end);
//
//			while (*(end + 1) == ' ')
//			{
//				end++;
//			}
//			if (*(end+1) != '\0')
//			{
//				end++;
//			}
//			start = end;
//		}
//		printf("%s\n", arr);
//	}
//	return 0;
//}

//// ����һ�����飬ʵ��һ���������������ݣ�ʹ����λ������ǰ�벿�֣�ż���������벿�֡�
//// ð��˼·
//void bubbleSort(int* p, int n)
//{
//	int* tmpp = p;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	while (*p != 0 && count <= n)
//	{
//		count++;
//		p++;
//	}
//	p = tmpp;
//
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = i + 1; j < count - 1; j++)
//		{
//			if (*(p + i) % 2 == 1)
//			{
//				break;
//			}
//			else if (*(p + j ) % 2 == 1)
//			{
//				int tmp = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = tmp;
//				break;
//			}
//		}
//	}
//}
//
////�����±�˼·
//void arrSort(int arr[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		while (arr[left] % 2 == 1 && left < right)
//		{
//			left++;
//		}
//		while (arr[right] % 2 == 0 && left < right)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0;
//	while (1)
//	{
//		printf("���������ݣ�");
//		while (scanf("%d", arr + i) == 1)
//		{
//			if (arr[i] == 0) //Լ��0��Ϊ��������
//				break;
//			i++;
//		}
//		printf("�������\n���Ϊ��");
//		// bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
//		arrSort(arr, sizeof(arr) / sizeof(arr[0]));
//		i = 0;
//		while (arr[i] != 0 && i < 100)
//		{
//			printf("%d ", arr[i]);
//			i++;
//		}
//		printf("\n");
//	}
//	return 0;
//}


//// ���������������е����У����������кϲ�Ϊһ���������в������
//// �����һ�У�1 3 7 9 22
//// ����ڶ��У�2 8 10 17 33 44
//// Ԥ�ڽ����1 2 3 7 8 9 10 17 22 33 44
//#define NN 5
//#define MM 6
//int main() {
//    int n = NN;
//    int m = MM;
//    int arrn[NN];
//    int arrm[MM];
//    //scanf("%d %d", &n, &m);
//
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++) {
//        scanf("%d", arrn + i);
//    }
//
//    for (j = 0; j < m; j++) {
//        scanf("%d", arrm + j);
//    }
//
//    int arr[NN + MM];
//    i = 0, j = 0;
//    int z = 0;
//    while (i < n && j < m) {
//        if (arrn[i] < arrm[j])
//        {
//            arr[z++] = arrn[i++];
//        }
//        else
//        {
//            arr[z++] = arrm[j++];
//        }
//    }
//
//    if (i == n)
//    {
//        for (; j < m;)
//        {
//            arr[z++] = arrm[j++];
//        }
//    }
//    else {
//        for (; i < n;)
//        {
//            arr[z++] = arrn[i++];
//        }
//    }
//
//    z = 0;
//    for (z = 0; z < n + m; z++)
//    {
//        printf("%d ", arr[z]);
//    }
//    return 0;
//}


////  ģ��ʵ��qsort
//// ����Ԫ�ضԱȺ���
//int int_cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//// Ԫ�ؽ�������
//void _swap(char* e1, char* e2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//}
//// ð�ݷ�ģ��qort
//void bubble_qort(void* base, int sz, int width, int (*cmp)(void*, void*))
//{
//	int i = 0;
//	int j = 0;
//	int folg = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + width * j, (char*)base + width * (j + 1)) > 0)
//			{
//				_swap((char*)base + width * j, (char*)base + width * (j + 1), width);
//				folg = 0;
//			}
//		}
//		if (folg == 1)
//		{
//			break;
//		}
//	}
//}
//// �����������в��Ժ���
//void test()
//{
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_qort(arr, sz, sizeof(arr[0]), int_cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//// ģ��ʵ��strcpy��ϰ
//#include <assert.h>
//
//char* my_strcpy(char* p1, const char* p2)
//{
//	// char* tmp = p1;
//	//assert(p1);
//	//assert(p2);
//	//while (*p2 != '\0')
//	//{
//	//	*p1++ = *p2++;
//	//}
//	//p1 = '\0';
//
//	assert(p1 && p2);
//	char* tmp = p1;
//	while (*p1++ = *p2++) // �ȸ�ֵ�����жϣ���++
//	{
//		; // ������ȥ��Ҳ�У�while��xxx��;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	printf("%s", my_strcpy(arr2, arr1));
//	
//	return 0;
//}


//// ģ��ʵ��strlen
//#include <assert.h>
//// ��������ʽ
//size_t my_strlen_1(const char* str)
//{
//	assert(str);
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//// ָ��ģʽ
//size_t my_strlen_2(const char* str)
//{
//	assert(str);
//	char* temporary = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (size_t)(str - temporary);
//}
//// �ݹ�ģʽ
//size_t my_strlen_3(const char* str)
//{
//	assert(str);
//	if (*str != '\0')
//	{
//		return 1 + my_strlen_3(++str);
//	}
//	else
//		return 0;
//}
//
//// 
//int main()
//{
//	char arr[] = "abcdef";
//	int ret1 = my_strlen_1(arr);
//	int ret2 = my_strlen_2(arr);
//	int ret3 = my_strlen_3(arr);
//
//	printf("%d\n%d\n%d\n", ret1, ret2, ret3);
//	return 0;
//}


////  ģ��ʵ��strcpy
//#include <assert.h>
//char* my_strcpy(char* destination, const char* source)
//{
//	assert(destination && source);
//	char* tmp = destination;
//	//while (*destination = *source)
//	//{
//	//	destination++;
//	//	source++;
//	//}
//	while (*destination++ = *source++) // ����дҲ�У��ȸ�ֵ���㣬���ָ��++
//	{
//		;
//	}
//	return tmp;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	printf("%s", my_strcpy(arr2, arr1));
//	return 0;
//}


//// ģ��ʵ��strcat
//#include <assert.h>
//char* my_strcat(char* destination, const char* source)
//{
//	assert(destination && source);
//	char* temporary = destination;
//	while (*destination != '\0')
//	{
//		destination++;
//	}
//	while (*destination++ = *source++)
//		;
//	return temporary;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "hello ";
//	printf("%s", my_strcat(arr2, arr1));
//	return 0;
//}


//// ģ��ʵ��strcmp
//#include <assert.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 && *str2)
//	{
//		if (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//			
//		}
//		else if (*str1 < *str2)
//		{
//			return -1;
//		}
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	int ret = my_strcmp(arr1, arr2);
//
//	if (ret > 0)
//	{
//		printf("arr1 > arr2");
//	}
//	else if (ret == 0)
//	{
//		printf("arr1 == arr2");
//	}
//	else
//		printf("arr1 < arr2");
//	return 0;
//}



//// ģ��ʵ��memcpy
//#include <assert.h>
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* temporary = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return temporary;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	char arr2[50] = { 0 };
//	my_memcpy(arr2, arr1, 5 * 4);
//
//	int i = 0;
//	for (i = 0; i < sizeof(arr2); i++)
//	{
//		printf("%c ", arr2[i] + 48);
//	}
//	return 0;
//}


//// ģ��ʵ��strncpy
//#include <assert.h>
//char* my_strncpy(char* dest, char* src, size_t num)
//{
//	assert(dest && src);
//	char* temporary = dest;
//	while (num--)
//	{
//		if (*src)
//		{
//			*dest++ = *src++;
//		}
//		else
//		{
//			*dest++ = '\0';
//		}
//	}
//	return temporary;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "xxxxxxxxxxxxxx";
//	printf("%s", my_strncpy(arr2, arr1, sizeof(arr1) + 1));
//	return 0;
//}


//// ģ��ʵ��strncat
//#include <assert.h>
//char* my_strncat(char* destination, const char* source, size_t num)
//{
//	assert(destination && source);
//	char* temporary = destination;
//	while (*destination)
//	{
//		destination++;
//	}
//	while (num-- && *source)
//	{
//		*destination++ = *source++;
//	}
//	*destination = '\0';
//	return temporary;
//}
//int main()
//{
//	char arr1[] = "world";
//	char arr2[20] = "hello ";
//	printf("%s", my_strncat(arr2, arr1, 2));
//	return 0;
//}


//// ģ��ʵ��strncmp
//#include <assert.h>
//int my_strncmp(const char* str1, const char* str2, size_t num)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2 && *str1 != '\0' && --num)
//	{
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else if (*str1 == *str2)
//		return 0;
//	else
//		return -1;
//	
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abcdef";
//	int ret = my_strncmp(arr1, arr2, 10);
//	if (ret < 0)
//		printf("str1 < str2");
//	else if (ret == 0)
//		printf("str1 == str2");
//	else
//		printf("str1 > str2");
//	return 0;
//}


//// ģ��ʵ��strstr
//#include <assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* strp = str1;
//	while (*str1)
//	{
//		while (*str1 != *str2)
//		{
//			str1++;
//			strp++;
//			if (*str1 == '\0')
//				return NULL;
//		}
//		while (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//			if (*str2 == '\0')
//			{
//				return strp;
//			}
//		}
//		str2 -= (str1 - strp);
//		str1 = ++strp;
//	}
//	return NULL;
//}
//// ����˼���⣺ʵ��KMP�㷨�Ż�
//
//
//int main()
//{
//	char arr1[] = "abbcdef";
//	char arr2[] = "bbcdeg";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s", ret);
//	else
//		printf("���Ӵ���ϵ");
//	return 0;
//}

// ģ��ʵ��strstr�������ع���
//// ģ��ʵ��strncmp
//#include <assert.h>
//int my_strncmp(const char* str1, const char* str2, size_t num)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2 && *str1 != '\0' && --num)
//	{
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else if (*str1 == *str2)
//		return 0;
//	else
//		return -1;
//	
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abcdef";
//	int ret = my_strncmp(arr1, arr2, 10);
//	if (ret < 0)
//		printf("str1 < str2");
//	else if (ret == 0)
//		printf("str1 == str2");
//	else
//		printf("str1 > str2");
//	return 0;
//}

// �򻯴����߼�
//// ģ��ʵ��strstr
//#include <assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//
//	const char* strp1 = str1;
//	const char* strp2 = str2;
//
//	while (*str1)
//	{
//		if (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//			if (*str2 == '\0')
//				return (char*)strp1;
//		}
//		else
//		{
//			str1 = ++strp1;
//			str2 = strp2;
//		}
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbcdef";
//	char arr2[] = "bbcde";
//	char* ret = my_strstr(arr1, arr2);
//	// ����˼���⣺ʵ��KMP�㷨�Ż�
//	if (ret != NULL)
//		printf("%s", ret);
//	else
//		printf("���Ӵ���ϵ");
//	return 0;
//}

//// ����ʹ��strtok
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdefg@gmail.com";
//	char* ret = NULL;
//	for (ret = strtok(arr1, "@."); ret != NULL; ret = strtok(NULL, "@."))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//// ����ʹ��strerror
//#include <errno.h> // �����˱���errno
//#include <string.h> // �����˺���strerror
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("text.txt", "r");
//	if (pFile == NULL)
//	{
//		printf("��������Ϣ��%s\n", strerror(errno));
//		printf("�ļ������ڣ����ʧ��\n");
//	}
//	return 0;
//}


//// ����ʹ���ַ��жϺ���
//#include <string.h>
//#include <ctype.h>
//int main()
//{
//	printf("'a'�Ƿ�Ϊ�����ַ���%s\n", iscntrl('a') ? "True" : "False");
//	printf("'���з�'�Ƿ�Ϊ�����ַ���%s\n", iscntrl('\n') ? "True" : "False");
//	return 0;
//}


//// ����ʹ�ô�Сдת������
//#include <ctype.h>
//int main()
//{
//	char arr[] = "Test String.\n";
//	char c;
//	int i = 0;
//	while (arr[i])
//	{
//		c = arr[i];
//		if (isupper(c))
//		{
//			c = toupper(c);
//		}
//		putchar(c); // �ַ��������
//		i++;
//	}
//	return 0;
//}

//// ģ��ʵ��memmove
//#include <assert.h>
//#include <string.h>
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	if (dest == src)
//	{
//		return dest;
//	}
//	void* temporary = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//}
//
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	char str2[40];
//	memcpy(str2, str, strlen(str) + 1); // ����str���������
//
//	my_memmove(str + 20, str + 15, 11); // ģ��ʵ��memmove����
//	memmove(str2 + 20, str2 + 15, 11); // memmove�⺯�����ս��
//	printf("%s\n", str); // ��׼���
//	puts(str2); // ����ַ���������
//	return 0;
//}


//// memcmpʹ��ʵ��
//#include <string.h>
//// ��strcmp�������ǣ�memcmp�ܶԱ��������͵����ݣ���strcmpֻ�ܶԱ��ַ�����
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "bcde";
//	if (memcmp(str1 + 1, str2, 4) == 0)
//		printf("�Ա�������ͬ\n");
//	if (memcmp(str1 + 1, str2, 5) > 0)
//		printf("ǰ�߸���\n");
//	return 0;
//}


//// ��ϰ�⣬����һ�������������ÿһλ�ж���ż������1��ż��0��
//// ���磺123����ӡ��101
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to 
//        int ret = 0;
//        int tmp = 0;
//        while (a / 10 && a % 10)
//        {
//            if ((a % 10) % 2 == 1)
//            {
//                ret += pow(10, tmp);
//                tmp++;
//                a /= 10;
//            }
//            else
//            {
//                tmp++;
//                a /= 10;
//            }
//        }
//        printf("%d\n", ret);
//
//    }
//    return 0;
//}


//// ��ϰ�⣬��ӡ��ո��ֱ��������
////_ _ _ _ *
////_ _ _ * *
////_ _ * * *
////_*  * * *
////* * * * *
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to 
//        int i = 1;
//        int j = 1;
//        for (i = 0; i < a; i++)
//        {
//            for (j = 0; j < a - 1 - i; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j < i + 1; j++)
//            {
//                printf("%c ", '*');
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}

//// ��ϰ�⣺�����ĸ�������һ�����Ǹ���������ʾ�۸񣬵������ı�ʾ���ڣ����ı�ʾ�Ż�ȯ���ޣ�
//// ˫ʮһ����7�ۣ�˫ʮ������8�ۣ�1��ʾ��ȯ���Լ�50��0��ʾûȯ��
//// ���������һ�У�С��ʵ�ʻ���Ǯ����������λС����������ʾ����Ҫָ���̼ҵ�����Ǯ��
//// 
//// �������룺1000.0 11 11 1����ʾ�·�1000��Ǯ��˫ʮһ��ģ����Ż�ȯ��
//// ����۸�650.00
//# include <stdio.h>
//
//int main() {
//	float price = 0.0;
//	int month = 0;
//	int date = 0;
//	int coupon = 0;
//	while (scanf("%f %d %d %d", &price, &month, &date, &coupon) == 4) {
//		if ((month == 11 && date == 11)) {
//			//if (coupon) {
//			//	price *= 0.7;
//			//	price -= 50;
//			//}
//			//else {
//			//	price *= 0.7;
//			//}
//			// �����Ż�
//			price = price * 0.7 - 50 * coupon;
//		}
//		else if ((month == 12 && date == 12)) {
//			if (coupon) {
//				price *= 0.8;
//				price -= 50;
//			}
//			else {
//				price *= 0.8;
//			}
//		}
//		printf("%.2f", price >= 0 ? price : 0.0);
//	}
//	return 0;
//}


// ����⣬4�����ɷ�ֻ��һ�������֣����ݹ�����������
// ��֪3��˵�滰��1��˵�ٻ���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	for (a = 0; a <= 1; a++)
//	{
//		for (b = 0; b <= 1; b++)
//		{
//			for (c = 0; c <= 1; c++)
//			{
//				for (d = 0; d <= 1; d++)
//				{
//					if ((a == 0) + (c == 1) + (d == 1) + (d == 0) == 3) // �ӷ�����
//					{
//						if (a + b + c + d == 1)
//							printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//// ��һ�ֽ���˼·��
//int main() 
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("���ɷ�Ϊ��%c", killer);
//		}
//	}
//	return 0;
//}


// ��ӡ���������
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && i != j)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 9 - i; j >= 0; j--)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// ʵ��һ�����������������ַ�����k���ַ�
// ���磺ABCDEF  ���������ַ�->> CDEFAB;
#include <string.h>
#include <assert.h>
//char* revolve(char* str, size_t num)
//{
//	assert(str);
//	if (!num)
//	{
//		return str;
//	}
//	int len = strlen(str);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < num; i++)
//	{
//		//for (j = 0; j < len - 1; j++)
//		//{
//		//	char tmp = *(str + j);
//		//	*(str + j) = *(str + j + 1);
//		//	*(str + j + 1) = tmp;
//		//}
//
//		// ����д����
//		char temporary = *str;
//		for (j = 0; j < len - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[len - 1] = temporary;
//	}
//	return str;
//}
//// ����˼·2��
//void reverse(char* n, char* m)
//{
//	for (; n < m; n++, m--)
//	{
//		char tmp = *n;
//		*n = *m;
//		*m = tmp;
//	}
//}
//char* revolve(char* str, size_t num)
//{
//	assert(str);
//	int len = strlen(str);
//	//if (num && num == len)
//	//{
//	//	return str;
//	//}
//	num %= len;
//	reverse(str, str + num - 1);
//	reverse(str + num, str + len - 1);
//	reverse(str, str + len - 1);
//	return str;
//}
//int main()
//{
//	char str[] = "ABCDEF";
//	
//	printf("%s", revolve(str, 3));
//	return 0;
//}


//// ���Ͼ���
//// ��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//// ���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//// Ҫ�� : ʱ�临�Ӷ�С��0(N);
//int find_num(int arr[3][3], int row, int column, int num)// vs��ʾ��������Ϊ��̬����
//// ���Ըĳɣ�static int find_num(int arr[3][3], int row, int column, int num)
//// static���κ󣬺���ֻ�ڵ�ǰ�ļ���Ч���޷��������ļ�����
//{
//	if (row < 1 || column < 1)
//	{
//		return 0;
//	} // ��д����жϻ��ܵ����棺
//	// vs��ʾ����if (arr[i][column - 1] >= num)�����д��룺�����ڴ�arr[i]�ж�ȡ��Ч����
//	// �������жϿ��ܻ����Խ��
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (arr[i][column - 1] >= num)
//		{
//			for (j = 0; j < column; j++)
//			{
//				if (arr[i][j] == num)
//				{
//					return 1;
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//	if (find_num(arr, 3, 3, 4))
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//// ����ֵ����Ƴ�������±�
//// ���һ���ṹ�壬����¼���ꡣ
//struct point
//{
//	int x;
//	int y;
//};
//struct point find_num(int arr[3][3], int row, int column, int num)
//{
//	int i = 0;
//	int j = 0;
//	struct point p = { -1, -1 };
//	if (row < 1 || column < 1)
//	{
//		return p;
//	}
//	for (i = 0; i < row; i++)
//	{
//		if (arr[i][column - 1] >= num)
//		{
//			for (j = 0; j < column; j++)
//			{
//				if (arr[i][j] == num)
//				{
//					p.x = i;
//					p.y = j;
//					return p;
//				}
//			}
//		}
//	}
//	return p;
//}
//
//int main()
//{
//	int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//	if (find_num(arr, 3, 3, 4).x >= 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//// ʹ�÷����Ͳ�����Ҳ����ָ�����ʽ����������ֵ
//int find_num(int arr[3][3], int* row, int* column, int num)
//{
//	int i = 0;
//	int j = 0;
//	if (*row < 1 || *column < 1)
//	{
//		*row = -1;
//		*column = -1;
//		return 0;
//	}
//	for (i = 0; i < *row; i++)
//	{
//		if (arr[i][*column - 1] >= num)
//		{
//			for (j = 0; j < column; j++)
//			{
//				if (arr[i][j] == num)
//				{
//					*row = i;
//					*column = j;
//					return 1;
//				}
//			}
//		}
//	}
//	*row = -1;
//	*column = -1;
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//	int x = 3;
//	int y = 3;
//	if (find_num(arr, &x, &y, 4))
//	{
//		printf("yes\n");
//		printf("λ���ǣ�%d��%d", x, y);
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

// ��Ŀ���ж�һ���ַ����Ƿ�Ϊ��һ���ַ�������ת֮��ĵ��ַ�����
/*
����:����S1=AABCD��s2-BCDAA������1
����s1=abcd��s2=ACBD������0.
AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA
AABCD����һ���ַ��õ�DAABC
*/
#include <string.h>
#include <ctype.h>
#include <assert.h>
//// ��ٷ�
//int is_reverse(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	if (*str1 == '\0' && *str2 == '\0')
//	{
//		return -1;
//	}
//	int len = strlen(str1);
//	if (len != strlen(str2))
//	{
//		return 0;
//	}
//	int i = 0;
//	int j = 0;
//	// ������ִ�Сд�Ļ����ȶ������ַ���������ת��������
//	for (i = 0; i < len; i++)
//	{
//		islower(str1[i]) ? str1[i] : (str1[i] = tolower(str1[i])); // ��Ҫ������
//	}
//	for (j = 0; j < len; j++)
//	{
//		// islower(str2[j]) ? str2[j] : (str2[j] = tolower(str2[j])); // ������islower�ĸ�ֵ��
//		// ���߸ɴ�����д��
//		str2[j] = islower(str2[j]) ? str2[j] : tolower(str2[j]);
//	}
//
//	for (i = 0; i < len; i++)
//	{
//		char tmp = str1[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			str1[j] = str1[j + 1];
//		}
//		str1[len - 1] = tmp;
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

//// �����Խⷨ���ַ���ƴ�ӶԱ�,��Ҫstr1�ռ��㹻��
//int is_reverse(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2) // �ַ����ַ���Ҫ��ȣ���Ȼ�������߼��������磺abc���ж�Ϊabcdef����ת�ַ�����
//	{
//		return 0;
//	}
//	strncat(str1, str1, len1);
//	if (strstr(str1, str2) != NULL)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char str[40] = "AABCD";
//	char str2[] = "DAABC"; // ����������"BCDAA BCdAA  DAABC
//	int ret = is_reverse(str, str2);
//	printf("%d", ret);
//	return 0;
//}


/*
����
KiKi��һ����������֪��ת�ú�ľ��󣨽���������л����õ����¾����Ϊת�þ��󣩣����̰������

����������
��һ�а�����������n��m����ʾһ���������n��m�У��ÿո�ָ���(1��n��10, 1��m��10)

��2��n + 1�У�ÿ������m����������Χ - 231~231 - 1�����ÿո�ָ���������n * m��������ʾ��һ�������е�Ԫ�ء�

���������
���m��n�У�Ϊ����ת�ú�Ľ����ÿ����������һ���ո�

���룺
2 3
1 2 3
4 5 6

�����
1 4
2 5
3 6

*/

// // �����Խⷨ��
// int main()
// {
//     int n;
//     int m;
//     int arr[10][10];
//     scanf("%d %d ", &n, &m);
//     int k = 0;
//     int i;
//     int j;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             scanf("%d ", &arr[j][i]);
//         }
//     }
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%d ", arr[i][j]);      
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ��ת��ά�������ݽⷨ��

//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int arr[10][10];
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    for (i = 0; i < 10; i++)
//    {
//        for (j = i; j < 10; j++)
//        {
//            if (i != j)
//            {
//                int tmp = arr[i][j];
//                arr[i][j] = arr[j][i];
//                arr[j][i] = tmp;
//            }
//        }
//    }
//
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

/*
*
����
KiKi��֪��һ��n�׷����Ƿ�Ϊ�����Ǿ������������ж��������Ǿ������Խ������µ�Ԫ�ض�Ϊ0�ľ������Խ���Ϊ�Ӿ�������Ͻ������½ǵ����ߡ�

����������
��һ�а���һ������n����ʾһ���������n��n�У��ÿո�ָ��� (2��n��10)

��2��n+1�У�ÿ������n����������Χ-231~231-1�����ÿո�ָ���������n*n������

���������
һ�У�������뷽���������Ǿ������"YES"�����У��������"NO"�����С�

ʾ��1
���룺
3
1 2 3
0 4 5
0 0 6
�����
YES


ʵ��2��
���룺
4
1 2 3 4
5 6 7 8
9 0 11 12
13 0 0 16
�����
NO
*/
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d", &n);
//    m = n;
//    int i = 0;
//    int j = 0;
//    int arr[10][10];
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int flag = 1;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                flag = 0;
//                // goto label; // ���ֱ����ת����ѭ��
//                break;
//            }
//            // ������Ӹ��жϣ��ٴ�break�������ǵ����if��������ʱ�䣬������û�ã�
//            if (flag == 0)
//            {
//                break;
//            }
//        }
//    }
//    // label:
//    if (flag == 1)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//
//    return 0;
//}

/*

����
����һ���������У��ж��Ƿ����������У�����ָ�����е�������С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��

���ݷ�Χ��3��n��50 �����е�ֵ������1��val��100

����������
��һ������һ������N(3��N��50)��
�ڶ�������N���������ÿո�ָ�N��������
���������
���Ϊһ�У���������������sorted���������unsorted��
*/

// int main() {
//     int n = 0;
//     scanf("%d", &n);
//     int arr[50];
//     int i = 0;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int start = 0;
//     int flag = 1;
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] >= start)
//         {
//             start = arr[i];
//         }
//         else
//         {
//             flag = 0;
//             break;
//         }
//     }

//     if (flag == 0)
//     {
//         flag = 1;
//         start = 100;
//         for (i = 0; i < n; i++)
//         {
//             if (arr[i] <= start)
//             {
//                 start = arr[i];
//             }
//             else
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//     }

//     if (flag == 1)
//     {
//         printf("sorted");
//     }
//     else 
//     {
//         printf("unsorted");
//     }
//     return 0;
// }

//// ˼·2��
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    int flag1 = 0;
//    int flag2 = 0;
//    scanf("%d", &arr[i]);
//    for (i = 1; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] > arr[i - 1])
//        {
//            flag1 = 1;
//        }
//        else if (arr[i] < arr[i - 1])
//        {
//            flag2 = 1;
//        }
//    }
//    if (flag1 + flag2 <= 1)
//    {
//        printf("sorted");
//    }
//    else
//    {
//        printf("unsorted");
//    }
//    return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	// ��̬����һ���ڴ�ռ�
//	int* p = (int*)malloc(40);
//	// malloc�п��ܿ���ʧ�ܣ������ж�һ��p�Ƿ�Ϊ�գ���ֹ�Կ�ָ�������
//	if (p = NULL)
//	{
//		// �������ʧ�ܣ���ӡ������Ϣ
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	// ����ҵ���߼�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	// ���ҵ���߼��󣬻��տռ�
//	free(p);
//	// pָ��ռ��Ѿ����٣�ָ���ÿգ�����Ұָ������
//	p = NULL;
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	// ʹ�ÿռ�
//
//	// ʹ����ɺ󣬽��л���
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p != NULL)
//	{
//		// ҵ���߼�
//	}
//	else
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	// �ռ�����
//	int* p2 = (int*)realloc(p, 80);
//	if (p2 != NULL)
//	{
//		// ҵ���߼�
//	}
//	else
//	{
//		printf("%s", strerror(errno));
//		free(p);
//		p = NULL;
//		return 1;
//	}
//	// ���տռ�
//	free(p2);
//	p = NULL;
//	p2 = NULL;
//
//	return 0;
//}

//// �������󣺶Կ�ָ��Ľ�����
//#include <stdlib.h>
//int main()
//{
//	int* p = malloc(INT_MAX); // �������ڵ��Ա�����ˣ��Ż��󣬻����ܸ�����һ���ռ䣨2��G��
//	*p = 20; // ���pΪ�գ��ͻ������
//	return 0;
//}

//// �������� Խ����ʶ�̬�ڴ�ռ�
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//// �������󣺶ԷǶ�̬���ٵ��ڴ棬����free�ͷ�
//#include <stdlib.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//// ʹ�ö�̬�����ڴ�ķ���ʼ��ַ
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//// ��ͬһ�鶯̬�ڴ����ͷ�
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	free(p);
//	free(p);
//	p = NULL;
//	return 0;
//}

// �ڴ�й¶
#include <stdlib.h>
void test(void)
{
	int* p = (int*)malloc(40);
	*p = 20;
}
int main()
{
	while (1)
	{
		test();
	}

	return 0;
}











