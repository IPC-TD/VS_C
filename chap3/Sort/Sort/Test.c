#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"

void TestInsertSort()
{
	int arr[] = { 1, 6, 3, 2, 5, 7, 4, 8 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	Print(arr, arrSize);
	InsertSort(arr, arrSize);
	Print(arr, arrSize);

}
void TestShellSort()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	Print(arr, arrSize);
	ShellSort(arr, arrSize);
	// Print(arr, arrSize);
}
void TestHeapSort()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	Print(arr, arrSize);
	HeapSort(arr, arrSize);
	Print(arr, arrSize);
}
void TestSelectSort()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	Print(arr, arrSize);
	SelectSort(arr, arrSize);
	Print(arr, arrSize);
}
int main()
{
	int flag = 0;
	if (flag)
	{
		TestInsertSort();
		TestShellSort();
		TestHeapSort();

	}
	TestSelectSort();
	return 0;
}