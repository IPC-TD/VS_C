#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
void TestInsertSort()
{
	int arr[] = { 1, 6, 3, 2, 5, 7, 4, 8 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	puts("ֱ�Ӳ�������");
	Print(arr, arrSize);
	InsertSort(arr, arrSize);
	Print(arr, arrSize);
	printf("\n");
}
void TestShellSort()
{
	int arr[] = { 9, 8, 7, 7, 6, 5, 5, 5, 4, 3, 2, 1, 0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	puts("ϣ������");
	Print(arr, arrSize);
	ShellSort(arr, arrSize);
	// Print(arr, arrSize);
	printf("\n");
}
void TestSelectSort()
{
	int arr[] = { 9, 8, 7, 7, 6, 5, 5, 5, 4, 3, 2, 1, 0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	puts("ѡ������");
	Print(arr, arrSize);
	SelectSort(arr, arrSize);
	Print(arr, arrSize);
	printf("\n");
}
void TestHeapSort()
{
	int arr[] = { 9, 8, 7, 7, 6, 5, 5, 5, 4, 3, 2, 1, 0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	puts("������");
	Print(arr, arrSize);
	HeapSort(arr, arrSize);
	Print(arr, arrSize);
	printf("\n");
}
void TestBubbleSort()
{
	int arr[] = { 9, 8, 7, 7, 6, 5, 5, 5, 4, 3, 2, 1, 0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	puts("ð������");
	Print(arr, arrSize);
	BubbleSort(arr, arrSize);
	Print(arr, arrSize);
	printf("\n");
}
void TestQuickSort()
{
	int arr[] = { 9, 8, 7, 7, 6, 5, 5, 5, 4, 3, 2, 1, 0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	puts("��������");
	Print(arr, arrSize);
	QuickSort(arr, 0, arrSize - 1);
	Print(arr, arrSize);
	printf("\n");
}
void TestQuickSortNonR()
{
	int arr[] = { 9, 8, 7, 7, 6, 5, 5, 5, 4, 3, 2, 1, 0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	puts("�ǵݹ��������");
	Print(arr, arrSize);
	QuickSortNonR(arr, 0, arrSize - 1);
	Print(arr, arrSize);
	printf("\n");
}
void TestMergeSort()
{
	int arr[] = { 9, 8, 7, 7, 6, 5, 5, 5, 4, 3, 2, 1, 0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	puts("�鲢����");
	Print(arr, arrSize);
	MergeSort(arr, arrSize);
	Print(arr, arrSize);
	printf("\n");
	int arr2[100];
	for (int i = 0, value = 100; i < 100; ++i, --value)
	{
		arr2[i] = value;
	}
	Print(arr2, 100);
	printf("\n");
	MergeSort(arr2, 100);
	Print(arr2, 100);
	printf("\n");

}
void TestMergeSortNonR()
{
	int arr[] = { 9, 8, 7, 7, 6, 5, 5, 5, 4, 3, 2, 1, 0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	puts("�ǵݹ�鲢����");
	Print(arr, arrSize);
	MergeSortNonR(arr, arrSize);
	Print(arr, arrSize);
	printf("\n");

	int arr2[200] = { 0 };
	int size = sizeof(arr2) / sizeof(arr2[0]);
	for (int i = 0, value = size; i < size; ++i, --value)
	{
		arr2[i] = value;
	}
	Print(arr2, size);
	printf("\n");
	MergeSortNonR(arr2, size);
	Print(arr2, size);
	printf("\n");

}
// ������������ܶԱ�
void TestOP()
{
	srand(time(0));
	const int N = 1000000;
	int* a1 = (int*)malloc(sizeof(int) * N);
	int* a2 = (int*)malloc(sizeof(int) * N);
	int* a3 = (int*)malloc(sizeof(int) * N);
	int* a4 = (int*)malloc(sizeof(int) * N);
	int* a5 = (int*)malloc(sizeof(int) * N);
	int* a6 = (int*)malloc(sizeof(int) * N);
	int* a7 = (int*)malloc(sizeof(int) * N);
	int* a8 = (int*)malloc(sizeof(int) * N);
	int* a9 = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
		a7[i] = a1[i];
		a8[i] = a1[i];
		a9[i] = a1[i];
	}
	// ����ʹ��ĳЩ����ע����������������
	/*
	���磺
	int begin = clock();
	// InsertSort(a1, N); // ����Ҫֱ�Ӳ��룬��ע����
	int end = clock();
	*/
	int begin1 = clock();
	//InsertSort(a1, N);
	int end1 = clock();
	int begin2 = clock();
	ShellSort(a2, N);
	int end2 = clock();
	int begin3 = clock();
	//SelectSort(a3, N);
	int end3 = clock();
	int begin4 = clock();
	HeapSort(a4, N);
	int end4 = clock();
	int begin5 = clock();
	//BubbleSort(a4, N);
	int end5 = clock();
	int begin6 = clock();
	QuickSort(a6, 0, N - 1);
	int end6 = clock();
	int begin7 = clock();
	QuickSortNonR(a7, 0, N - 1);
	int end7 = clock();
	int begin8 = clock();
	MergeSort(a8, N);
	int end8 = clock();
	int begin9 = clock();
	MergeSortNonR(a9, N);
	int end9 = clock();
	printf("InsertSort:%d\n", end1 - begin1);
	printf("ShellSort:%d\n", end2 - begin2);
	printf("SelectSort:%d\n", end3 - begin3);
	printf("HeapSort:%d\n", end4 - begin4);
	printf("BubbleSort:%d\n", end5 - begin5);
	printf("QuickSort:%d\n", end6 - begin6);
	printf("QuickSortNonR:%d\n", end7 - begin7);
	printf("MergeSort:%d\n", end8 - begin8);
	printf("MergeSortNonR:%d\n", end9 - begin9);

	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
	free(a7);
	free(a8);
	free(a9);
}
int main()
{
	int flag = 0;
	if (flag)
	{
		TestInsertSort();
		TestShellSort();
		TestSelectSort();
		TestHeapSort();
		TestBubbleSort();
		TestQuickSort();
		TestQuickSortNonR();
		TestMergeSort();
		TestMergeSortNonR();
	}
	TestOP();

	return 0;
}