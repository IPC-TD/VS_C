# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include<stdio.h>
//int main()
//{
//	/*
//	s：字符串（str）
//	d：整数（int）
//	f：浮点数（float）
//	x：十六进制整数（小写字母）
//	x：十六进制整数（大写字母）
//	o：八进制整数*/
//	int a = 10;
//	unsigned int b = 20;
//	int c = 11, d = 22, e = 200;
//	const short cs = 11;
//	/*printf("变量a的值是%d   变量c的值是:%d\n", a, c);
//	printf("a+b的值是%d \n", a+b);
//	printf("常量cs %d \n", cs);*/
//	printf("int占用空间为: %d \n", sizeof(int));  //dword
//	printf("short占用空间为: %d \n", sizeof(short));  //word
//	printf("long占用空间为: %d \n", sizeof(long)); //dword
//	int num1 = 0;
//	scanf("%d", &num1);
//	printf("%d", num1);
//	getchar();  // 读取字符并存储在变量中
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
//	printf("要加入杜冥鸦吗?\n");
//	printf("要好好学习吗(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好结局\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//}

//int main()
//{
//	int line = 0;
//	printf("加入杜冥鸦\n");
//
//	while (line < 20000)
//	{
//		printf("写代码:%d\n", line);
//		line++;//每次line的值都+1
//	}
//	if (line >= 20000)
//	{
//		printf("毕业了\n");
//	}
//	else
//	{
//		printf("继续加油");
//	}
//	return 0;
//}

//int Add(n1, n2)
//{
//	//int z = 0;
//	//z = n1 + n2;
//	//return z;
//	//可以用下面这种简洁的, 不加括号括起来也行
//	return (n1 + n2);
//}

//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	// int sum = n1 + n2;
//	int sum = Add(n1, n2);
//	
//	//打印
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
//	// / 除号两端都是整数的时候, 执行的时整数除法, 如果两端有一个是浮点数就执行浮点数的除法
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
	//	printf("呵呵\n");
	//}
	// 
	//sizeof是操作符, 是单目操作符
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof arr);
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = a++; //后置++, 先执行b=a, 再执行a++, a++ = a+1
//	//printf("%d\n", b); //10
//	//printf("%d\n", a); //11
//
//	//int a = 10;
//	//int b = ++a; //先执行++, 后执行b=a
//	//printf("%d\n", b); //11
//	//printf("%d\n", a); //11
//
//	int a = (int)3.14;
//	// int b = int(3.14) python 写法不行
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	// &&逻辑与 - 并且 等同and
//	// ||逻辑或 - 或者  等同or
//	int a = 10;
//	int b = 20;
//	if (a && b) //等同于py中的and
//	{
//		printf("都是真的");
//	}
//	if (a || b);  // 等同于py中的or
//	{
//		printf("有一个是真的");
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
//	register int b = 20;//建议将该变量放到寄存器中存储
//
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}

// static 静态修饰关键字

//# define NUM 100; //定义标识常量
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
//	int a = 10;//向内存申请4个字节, 储存10
//	//&a;//取地址操作符
//	printf("%p\n", &a);//000000A7380FFBA4
//	int* p = &a;
//	//p就是指针, 
//	*p = 20; //解引用操作符, 意思是通过p中存放的地址, 找到p所指向的对象, *p就是p指向的对象
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

////结构体, 学生
//struct Stu
//{
//	//成员
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
//	//结构体指针变量->成员名
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
//		printf("成功输出\n");
//	else if (a > 10, a < 30) //会导致他只检查逗号右边的表达式, 应该使用&&
//		printf("10-30");
//	else if (a > 30, a < 50) //会导致他只检查逗号右边的表达式, 应该使用&&
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
//	switch(day)//day 必须是整形
//	{
//		case 1://这里的1必须是常量整形
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		default:
//			printf("输入错误");
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
//	while ((ch = getchar()) != EOF)//#EOF 是end of file 文件结束标志的意思, 
//		//如果获取的字符错误也返回这个
//		putchar(ch);
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 10; i++) //太老的编译器不支持在for里面创建变量i, 需要在循环外提前创建好
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
//	//在一个有序的数组中查找具体的数字n
//	int i = 0;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == k)
//			printf("找到了, 下标是:%d", i);
//		break;
//	}
//	if (i = n)
//		printf("没找到\n");
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//在一个有序的数组中查找具体的数字k
//	int k = 11;
//	//scanf("%d", &k);
//
//	int i = 0;//初始化下标
//	int left = 0;//初始化左边界
//	int right = sizeof(arr) / sizeof(arr[0]);//初始化右边界
//	for (i = (left + right) / 2; arr[i] != k; i = (left + right) / 2)
//	{
//		if (arr[i] < k)
//		{
//			left = ++i;
//			if (left > right)
//			{
//				printf("没找到");
//				break;
//			}
//		}
//
//		else if (arr[i] > k)
//		{
//			right = --i;
//			if (left > right)
//			{
//				printf("没找到");
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
//	//在一个有序的数组中查找具体的数字k
//	int k = 0;//初始化待查找数字
//	scanf("%d", &k);//输入待查找数字
//
//	int i = 0;//初始化索引下标
//	int left = 0;//初始化左边界
//	int right = sizeof(arr) / sizeof(arr[0])-1;//初始化右边界
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
//			printf("找到了, 待查找数字下标是:%d", i);
//			break;
//		}
//
//	}
//	if (left > right)
//		printf("没找到");
//	return 0;
//}
//
//#include <string.h> //调用strlen
//#include <windows.h> //调用Sleep
//#include <stdlib.h> //调用system
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
//		Sleep(1000);//休眠1秒
//		//清空屏幕
//		system("cls");//system是一个库函数, 可以执行系统命令
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include <string.h> //调用strcmp比较字符串
//头文件用过一次后, 如果被注释掉了, 缓存里还有, 还能用
//int main()
//{
//	char pass_word[] = "12345678";
//	char pass_word2[18] = { 0 };
//
//	int i = 0;
//	while (i < 3)
//	{
//		printf("请输入密码>:");
//		scanf("%s", pass_word2);
//		if (strcmp(pass_word2, pass_word)==0)
//		{
//			printf("密码输入正确!");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//			printf("你还有%d次机会\n", 2 - i);
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
//	printf("-----------  1.猜数字   ---------\n");
//	printf("-----------  0.退出游戏 ---------\n");
//	printf("---------------------------------\n");
//
//}
//
//#include <stdlib.h>
//void play_game() {
//	int guess = -1;
//	int ret = rand()%100+1;//rand()生成0到RAND_MAX
//	//printf("%d\n", ret);
//	while (guess != ret)
//	{
//		printf("请输入你猜测的数字:>");
//		scanf("%d", &guess);
//		if (guess == ret)
//		{
//			printf("猜对了\n");
//			printf("程序已结束, 请重新选择菜单\n");
//			menu();
//		}
//		else if (guess < ret)
//			printf("小了\n");
//		else
//			printf("大了\n");
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
//		printf("请输入你要执行的操作:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1: {
//			//准备实现游戏线程
//			printf("开始游戏\n");
//			play_game();
//			break;
//		}
//		case 0: {
//			printf("已退出游戏\n");
//			break;
//		}
//		default: {
//			printf("你输入有误\n");
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

//#include <stdlib.h> //导入system
//#include <string.h> //导入strcmp
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 300");
//again:
//	printf("请注意, 你的电脑将在300秒内关机, 请输入: 我是猪, 就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//		system("shutdown -a");
//	else {
//		printf("你输入有误\n");
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
//	//调用函数
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
//// 当实参传递给形参的时候, 形参是实参的一份临时拷贝
//// 对形参的修改不能改变实参
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

// 判断素数的函数
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
//	//产生素数
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
//	printf("\n素数的个数为:%d", count);
//	//判断素数
//	//输出素数
//	return 0;
//}

//#include <math.h>
//// 这是一个数学函数库
////double sqrt(double x);
////参数：x 是一个非负的实数（浮点数）。
////返回值：返回 x 的平方根，如果 x < 0，结果为 未定义（可能返回 NaN，即“非数”）。
//// 传入整形会帮我转换成浮点型
////如果你把整型（int）变量传递给 sqrt() 函数，它会自动将整型转换为浮点型（double），以符合函数的参数类型要求。
//int judgment(int x)
//{
//	int z = 0;
//	for (z = 2; z < sqrt(x); z++)//square root 开平方根
//	{
//		if (x % z == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {
//	//产生素数
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//偶数不会输素数
//	{
//		if (judgment(i) == 1)// 函数名 可以起为"is_prime", prime在数学中是质数的意思;
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n素数的个数为:%d", count);
//	//判断素数
//	//输出素数
//	return 0;
//}

////闰年判断
//int target_year(int n) {
//	if ((n % 100 != 0 && n % 4 == 0) || (n % 400 == 0 ))
//		return 1;
//	return 0;
//}
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++) {
//		if (target_year(i) == 1) { //闰年是leap year, 函数可以叫 is_leap_year
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n闰年个数为:%d", count);
//	return 0;
//}


//int target_num(int*x, int size, int y) {
//	int left = 0;
//	int right = size - 1;
//	while (right >= left) {
//		int mid = (left + (right-left)) / 2; // 防止内存溢出
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
//		printf("未找到目标值");
//	}
//	else {
//		printf("n在arr数组的第%d位", result + 1);
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

////函数的递归
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
//	char word[] = "猜猜我是谁?";
//	printf("字符串长度为: %d \n", guess(word));
//	printf("字符串长度为: %d \n", strlen(word));
//	return 0;
//}


//int my_strlen(char* str) {
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1); // 如果写成++str, 会修改原指针(外部指针)变量
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
//	printf("结果: %d\n统计次数: %d\n", Fib(n), count);
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
//	// 输出3的倍数
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
//			printf("二者最大公约数是: %d", i);
//			break;
//		}
//	}
//return 0;
//}

//// 辗转相除法
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	a = (a > b) ? b : a;
//	int min = a;
//	while (1) {
//		if (a % min == 0 && b % min == 0) {
//			printf("二者最大公约数是: %d", min);
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

//// 优化辗转相除法
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);// 18 24
//	while (c = a % b) {
//		a = b;
//		b = c;
//	}
//	printf("二者最大公约数是: % d", b);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//判断个位数
//			count++;
//		if (i / 10 == 9)//判断十位数
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
//	for (i = 0; i < sz - 1; i++)//需要排列的元素个数 = 总个数 -1
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) // 每个元素需要对比几次
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

////递归方式，打印函数的每一位
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
//	printf("请输入数据:");
//	scanf("%d", &a);
//	rezult(a);
//}

//// 非递归求阶乘
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
// 递归方式求阶乘
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
//	printf("请输入数据：");
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


////非递归实现字符串逆序
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
//// 递归实现字符串逆序
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

//// 递归实现字符串逆序2
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

////递归方式计算一个数每位之和
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
//	printf("请输入一个正整数：");
//	scanf("%d", &num);
//	printf("计算结果为：%d", Calculate_cumulative_sum(num));
//	return 0;
//}

////递归方式计算一个数每位之和2
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
//	printf("请输入一个正整数：");
//	scanf("%u", &num);
//	printf("计算结果为：%d", digitsum(num));
//	return 0;
//}

////递归实现n的k次方
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
//	printf("请输入数据：");
//	scanf("%d %d", &num, &k);
//	printf("幂运算结果：%d", exponentiation(num, k));
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
//	//输出结果
//	return 0;
//}

//// 连个数组之间互相交换内容，数组一样大
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
//	printf("%p\n", arr); // 输出首元素地址
//	printf("%p\n", &arr[0]); // 输出首元素地址
//
//	printf("%c\n", *arr); // 输出首元素
//	printf("%c\n", arr[0]); // 输出首元素
//
//	printf("%s\n", arr); // 输出字符串
//	printf("%s\n", &arr[0]); // 输出字符串
//
//	//输出结果
//	return 0;
//}

////写一个函数，实现整数数组的初始化init，整数数组的输出功能print，和逆置功能reverse
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
//	// 举例
//	int a = 7;
//	int b = -7;
//
//	// 对整数a和b，各右移1位
//	a = a >> 1;
//	b = b >> 1;
//	printf("%d %d", a, b); // 输出？
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
//	pStu->age = 18;//结构成员访问
//}
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu;//结构成员访问
//	stu.age = 20;//结构成员访问
//	set_age1(stu);
//	pStu->age = 20;//结构成员访问
//	set_age2(pStu);
//	return 0;
//}

//struct Student1
//{
//	char name[20]; // 名字
//	int age; // 年龄
//	char sex[5]; // 性别
//	char id[20]; // 学号
//}Stu1, Stu2 = { "zhangsan", 20, "男", "123456" }; // 分号不能丢 
//
//
//int main()
//{
//	printf("%s %d %s %s", Stu2.name, Stu2.age, Stu2.sex, Stu2.id);
//}

//// 结构体过大，使用地址传参会更好
//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);  //传结构体
//	print2(&s); //传地址
//	return 0;
//}

//// 写一个函数返回参数中1的个数
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

//// 两个整形，二进制数，多少位不同
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

//// 打印两个*组成的字母X
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

//// 判断某一年某一月有多少天
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
//	assert(p1 && p2); // p1和p2都为真（即非空指针），才会继续执行;
//	while (*p1++ = *p2++)
//	{
//		;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr[20] = "你好我是莉莉";
//	char arr2[20] = "大家好";
//	char* arr3 = NULL;
//
//	printf("%s\n", my_strcpy(arr, arr2));
//	printf("%s\n", my_strcpy(arr, arr3));
//
//	return 0;
//}

//// 判断是否构成三角形
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

//// 使用指针的形式，打印数组内容
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

//// 逆序字符串
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
//// 递归的方法
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
//	// 测试字符：I am a student
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
//// 练习S2 = 2+22+222+2222+22222
//// 递归
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
//// 迭代
//int Sn2(int a, int n)
//{
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//
//	//// 产生前N项
//	//int j = 0;
//	//for (i = 0; i < n; i++)
//	//{
//	//	ret = 0;
//	//	// 产生每一项
//	//	for (j = 0; j <= i; j++)
//	//	{
//	//		ret = a + ret*10;
//	//	}
//	//	sum += ret;
//	//}
//	// 简化
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


//练习，10000以内的水仙花数
//#include <math.h>

//// 过于暴力，简化一下
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
//// 技巧性解法
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		//判断几位数
//		int count = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			count++;
//		}
//		// 求每一位数count次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		// 判断水仙花
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
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
//	// 迭代实现
//	int count = 0;
//	while (n)
//	{
//		count += n / 1;
//		n = n / 2;
//	}
//	printf("%d\n", count);
//	// 递归实现
//	printf("%d\n", Number(20));
//	return 0;
//}

//// 需要考虑除法导致的空瓶丢失问题
//int Number(int m, int tmp) // m是瓶子数，tmp是空瓶
//{
//	if (m > 0)
//	{
//		//递归有问题，先跳过了
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
//	int empty = m / 1; // 空瓶
//	int count = m / 1; // 总瓶数
//
//	while (empty >= 2)
//	{
//		count += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", count);
//	printf("%d\n", Number(m, 0));//递归
//
//	return 0;
//}

//// 求两个数的最小公倍数
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int tmp = 0;
//	while (1)
//	{
//		printf("请输入：");
//		scanf("%d %d", &n, &m);
//		// n > m ? n, m : (tmp = n, n = m, m = tmp); // 优化一下
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

//// 逆序字符串
//#include <string.h>
//void string_reverse(char arr[], int left, int right)
//{
//	while (left < right)
//	{
//		// 优先考虑代码的可读性和逻辑清晰度：当前的写法已经足够清晰，将 tmp 定义在循环内部是更好的选择。
//		// 性能优化场景：如果性能成为瓶颈（循环执行次数特别多且频繁），可以将 tmp 提到循环外，但这通常是微优化，现代编译器会自行优化这部分代码。
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//// 要求：逆序字符串，但单词不逆序，标点符号不逆序
//// 输入：i like beijing.
//// 输出：beijing. like i
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//
//	// 如果下面的过程，使用指针的形式，会简洁一点。
//	// 倒置单词和符号（跳过空格）
//	int i = 0; // 数组下标
//	int count = 0; // 单词+符号长度计数
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
//		count = 0; //一个单词含标点的长度
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

//// 逆序字符串重构版本。
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
//		// 犯错点：解引用*操作符，优先级小于++，但高于加法，需要加括号。
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

//// 输入一个数组，实现一个函数，调整数据，使奇数位于数组前半部分，偶数于数组后半部分。
//// 冒泡思路
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
////左右下标思路
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
//		printf("请输入数据：");
//		while (scanf("%d", arr + i) == 1)
//		{
//			if (arr[i] == 0) //约定0作为结束条件
//				break;
//			i++;
//		}
//		printf("输入完毕\n结果为：");
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


//// 输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//// 输入第一行：1 3 7 9 22
//// 输出第二行：2 8 10 17 33 44
//// 预期结果：1 2 3 7 8 9 10 17 22 33 44
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


////  模拟实现qsort
//// 整数元素对比函数
//int int_cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//// 元素交换函数
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
//// 冒泡法模拟qort
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
//// 整数数组排列测试函数
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


//// 模拟实现strcpy练习
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
//	while (*p1++ = *p2++) // 先赋值，后判断，再++
//	{
//		; // 大括号去掉也行：while（xxx）;
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


//// 模拟实现strlen
//#include <assert.h>
//// 计数器方式
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
//// 指针模式
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
//// 递归模式
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


////  模拟实现strcpy
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
//	while (*destination++ = *source++) // 这样写也行，先赋值运算，后对指针++
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


//// 模拟实现strcat
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


//// 模拟实现strcmp
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



//// 模拟实现memcpy
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


//// 模拟实现strncpy
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


//// 模拟实现strncat
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


//// 模拟实现strncmp
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


//// 模拟实现strstr
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
//// 额外思考题：实现KMP算法优化
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
//		printf("非子串关系");
//	return 0;
//}

// 模拟实现strstr（代码重构）
//// 模拟实现strncmp
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

// 简化代码逻辑
//// 模拟实现strstr
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
//	// 额外思考题：实现KMP算法优化
//	if (ret != NULL)
//		printf("%s", ret);
//	else
//		printf("非子串关系");
//	return 0;
//}

//// 常规使用strtok
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


//// 尝试使用strerror
//#include <errno.h> // 定义了变量errno
//#include <string.h> // 定义了函数strerror
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("text.txt", "r");
//	if (pFile == NULL)
//	{
//		printf("错误码信息：%s\n", strerror(errno));
//		printf("文件不存在，或打开失败\n");
//	}
//	return 0;
//}


//// 尝试使用字符判断函数
//#include <string.h>
//#include <ctype.h>
//int main()
//{
//	printf("'a'是否为控制字符：%s\n", iscntrl('a') ? "True" : "False");
//	printf("'换行符'是否为控制字符：%s\n", iscntrl('\n') ? "True" : "False");
//	return 0;
//}


//// 尝试使用大小写转换函数
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
//		putchar(c); // 字符输出函数
//		i++;
//	}
//	return 0;
//}

//// 模拟实现memmove
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
//	memcpy(str2, str, strlen(str) + 1); // 复制str数组的内容
//
//	my_memmove(str + 20, str + 15, 11); // 模拟实现memmove函数
//	memmove(str2 + 20, str2 + 15, 11); // memmove库函数对照结果
//	printf("%s\n", str); // 标准输出
//	puts(str2); // 输出字符串并换行
//	return 0;
//}


//// memcmp使用实例
//#include <string.h>
//// 与strcmp的区别是：memcmp能对比所有类型的数据，而strcmp只能对比字符串。
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "bcde";
//	if (memcmp(str1 + 1, str2, 4) == 0)
//		printf("对比内容相同\n");
//	if (memcmp(str1 + 1, str2, 5) > 0)
//		printf("前者更大\n");
//	return 0;
//}


//// 练习题，输入一个数，这个数的每一位判断奇偶，奇数1，偶数0；
//// 例如：123，打印：101
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
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


//// 练习题，打印打空格的直接三角形
////_ _ _ _ *
////_ _ _ * *
////_ _ * * *
////_*  * * *
////* * * * *
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
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

//// 练习题：输入四个数，第一个数是浮点数，表示价格，第三第四表示日期，第四表示优惠券有无；
//// 双十一，打7折，双十二，打8折，1表示有券可以减50，0表示没券。
//// 期望输出：一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）
//// 
//// 例如输入：1000.0 11 11 1，表示衣服1000块钱，双十一买的，有优惠券。
//// 输出价格：650.00
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
//			// 代码优化
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


// 编程题，4名嫌疑犯只有一人是凶手，根据供词锁定凶手
// 已知3人说真话，1人说假话。
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
//					if ((a == 0) + (c == 1) + (d == 1) + (d == 0) == 3) // 嫌犯供词
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
//// 另一种解题思路：
//int main() 
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("嫌疑犯为：%c", killer);
//		}
//	}
//	return 0;
//}


// 打印杨辉三角形
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


// 实现一个函数，可以左旋字符串中k个字符
// 例如：ABCDEF  左旋连个字符->> CDEFAB;
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
//		// 其他写法：
//		char temporary = *str;
//		for (j = 0; j < len - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[len - 1] = temporary;
//	}
//	return str;
//}
//// 其他思路2：
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


//// 杨氏矩阵
//// 有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//// 请编写程序在这样的矩阵中查找某个数字是否存在。
//// 要求 : 时间复杂度小于0(N);
//int find_num(int arr[3][3], int row, int column, int num)// vs提示函数可能为静态函数
//// 可以改成：static int find_num(int arr[3][3], int row, int column, int num)
//// static修饰后，函数只在当前文件生效，无法被其他文件调用
//{
//	if (row < 1 || column < 1)
//	{
//		return 0;
//	} // 不写这个判断会受到警告：
//	// vs提示，”if (arr[i][column - 1] >= num)“这行代码：“正在从arr[i]中读取无效数据
//	// 编译器判断可能会存在越界
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

//// 返回值，设计成数组的下标
//// 设计一个结构体，来记录坐标。
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

//// 使用返回型参数，也就是指针的形式，带回坐标值
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
//		printf("位置是：%d，%d", x, y);
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

// 题目：判断一个字符串是否为另一个字符串的旋转之后的的字符串。
/*
例如:给定S1=AABCD和s2-BCDAA，返回1
给定s1=abcd和s2=ACBD，返回0.
AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA
AABCD右旋一个字符得到DAABC
*/
#include <string.h>
#include <ctype.h>
#include <assert.h>
//// 穷举法
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
//	// 如果不分大小写的话，先对两个字符串，进行转换操作。
//	for (i = 0; i < len; i++)
//	{
//		islower(str1[i]) ? str1[i] : (str1[i] = tolower(str1[i])); // 需要加括号
//	}
//	for (j = 0; j < len; j++)
//	{
//		// islower(str2[j]) ? str2[j] : (str2[j] = tolower(str2[j])); // 否则是islower的赋值。
//		// 或者干脆这样写：
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

//// 技巧性解法：字符串拼接对比,需要str1空间足够大
//int is_reverse(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2) // 字符串字符数要相等，不然下面有逻辑错误，例如：abc会判定为abcdef的旋转字符串。
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
//	char str2[] = "DAABC"; // 测试用例："BCDAA BCdAA  DAABC
//	int ret = is_reverse(str, str2);
//	printf("%d", ret);
//	return 0;
//}


/*
描述
KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答。

输入描述：
第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。(1≤n≤10, 1≤m≤10)

从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n * m个数，表示第一个矩阵中的元素。

输出描述：
输出m行n列，为矩阵转置后的结果。每个数后面有一个空格。

输入：
2 3
1 2 3
4 5 6

输出：
1 4
2 5
3 6

*/

// // 技巧性解法：
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

// 旋转二维数组内容解法：

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
描述
KiKi想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。

输入描述：
第一行包含一个整数n，表示一个方阵包含n行n列，用空格分隔。 (2≤n≤10)

从2到n+1行，每行输入n个整数（范围-231~231-1），用空格分隔，共输入n*n个数。

输出描述：
一行，如果输入方阵是上三角矩阵输出"YES"并换行，否则输出"NO"并换行。

示例1
输入：
3
1 2 3
0 4 5
0 0 6
输出：
YES


实例2：
输入：
4
1 2 3 4
5 6 7 8
9 0 11 12
13 0 0 16
输出：
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
//                // goto label; // 这可直接跳转两层循环
//                break;
//            }
//            // 或者这加个判断，再次break；（考虑到多次if可能增加时间，所以我没用）
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

描述
输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。

数据范围：3≤n≤50 序列中的值都满足1≤val≤100

输入描述：
第一行输入一个整数N(3≤N≤50)。
第二行输入N个整数，用空格分隔N个整数。
输出描述：
输出为一行，如果序列有序输出sorted，否则输出unsorted。
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

//// 思路2：
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
//	// 动态开辟一块内存空间
//	int* p = (int*)malloc(40);
//	// malloc有可能开辟失败，所以判断一下p是否为空，防止对空指针解引用
//	if (p = NULL)
//	{
//		// 如果开辟失败，打印报错信息
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	// 具体业务逻辑
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	// 完成业务逻辑后，回收空间
//	free(p);
//	// p指向空间已经销毁，指针置空，避免野指针问题
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
//	// 使用空间
//
//	// 使用完成后，进行回收
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
//		// 业务逻辑
//	}
//	else
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	// 空间扩增
//	int* p2 = (int*)realloc(p, 80);
//	if (p2 != NULL)
//	{
//		// 业务逻辑
//	}
//	else
//	{
//		printf("%s", strerror(errno));
//		free(p);
//		p = NULL;
//		return 1;
//	}
//	// 回收空间
//	free(p2);
//	p = NULL;
//	p2 = NULL;
//
//	return 0;
//}

//// 常见错误：对空指针的解引用
//#include <stdlib.h>
//int main()
//{
//	int* p = malloc(INT_MAX); // 不过现在电脑变聪明了，优化后，还是能给程序一个空间（2个G）
//	*p = 20; // 如果p为空，就会出问题
//	return 0;
//}

//// 常见错误： 越界访问动态内存空间
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

//// 常见错误：对非动态开辟的内存，进行free释放
//#include <stdlib.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//// 使用动态开辟内存的非起始地址
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

//// 对同一块动态内存多次释放
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

// 内存泄露
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











