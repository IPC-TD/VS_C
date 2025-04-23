#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include "Stack.h"

// ����ĺ�������Ĭ��������

// ��ӡ����
void Print(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
// ���ݽ���
void Swap(int* a, int* b)
{
	assert(a && b);
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
// ��������
void InsertSort(int* a, int n)
{
	assert(a);
	// ÿ��ѭ������a[i+1]λ�õ����ݵĲ���
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		int tmp = a[end + 1];
		// ���endλ�õ�������tmp�Ĵ�������ƶ�
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}
		// ͣ����˵��end�Ѿ���-1λ�ã�����a[end]��tmpС
		// ��end + 1λ���ǣ�tmpӦ�������ȷλ��
		a[end + 1] = tmp;
	}
}

// ϣ������
void ShellSort(int* a, int n)
{
	assert(a);
	int end = 0;
	int tmp = 0;
	int gap = n;
	// ����ɴ�С�����ж�β�������Ԥ����
	// gap����1ʱ������Ԥ����Ĺ���
	while (gap > 1)
	{
		// ���ÿ����С3����Ч�ʽϸߣ��ۺϳ������Ž⣩
		// +1��֤�����һ�Σ�gapһ��Ϊ1
		// ��gap == 1 ʱ���൱��ֱ�Ӳ������򣨱�֤����
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; ++i)
		{
			end = i;
			tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
		// Print(a, n); // ��ӡÿ��Ԥ�����ĵ��������
	}

}

// ѡ������
void SelectSort(int* a, int n)
{
	assert(a);
	// ÿ�α���ѡ�����С��������
	// �ֱ�������������࣬Ȼ�������߽�
	// ������Χ��[left��right]����Ϊ������
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		// ���������С����������±�
		int mini_i = left;
		int max_i = left;
		for (int i = left + 1; i <= right; ++i)
		{
			if (a[i] < a[mini_i])
			{
				mini_i = i;
			}
			if (a[i] > a[max_i])
			{
				max_i = i;
			}
		}
		// ����С���������
		Swap(&a[left], &a[mini_i]);
		
		// �߼���������ѵģ������ֶ���ͼ���
		// ���maxԭ����leftλ�ã��ᱻ���滻��
		// ������Ҫ�ж�
		// ��ԭ�������ֵ���Ƿ񱻴�left��������mini_i��λ��
		if (&a[max_i] < &a[mini_i])
		{
			max_i = mini_i; // �������ֵλ��
		}
		// �����ֵ�ŵ��ұ�
		Swap(&a[right], &a[max_i]);

		++left;
		--right;
	}
}

// ������
// ���µ����㷨
void AdjustDwon(int* a, int n, int root)
{
	assert(a);
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		// ����Һ��Ӵ��ڣ��Ҵ������ӣ��򽻻�
		if (child + 1 < n && a[child] < a[child + 1])
		{
			++child;
		}

		// ������ӱȸ��״��򽻻�
		if (a[child] > a[parent])
		{
			Swap(&a[parent], &a[child]);
		}

		// ��������������������������ά�ֶ�����
		parent = child;
		child = parent * 2 + 1;
	}

}
// ������
void HeapSort(int* a, int n)
{
	assert(a);
	// ��������н���
	// �����һ����Ҷ�ӽڵ㣬һ��ʼ���µ�����ֱ���Ѷ�
	int parent = (n - 1 - 1) / 2; // child = n - 1��
	while (parent >= 0)
	{
		AdjustDwon(a, n, parent);
		--parent;
	}
	// ������
	for (int i = n - 1; i > 0; --i)
	{
		// ÿ��ȡ�Ѷ��������βԪ�ؽ�����
		// Ȼ���ų���β���ݣ�������Ϊ�ѵĲ���
		Swap(&a[0], &a[i]);

		// �ԶѶ����ݽ������µ���
		AdjustDwon(a, i, 0);
	}
}

// ð������
void BubbleSort(int* a, int n)
{
	assert(a);
	// ð������ÿ�˱�����һ�����ֵ�ŵ���Χβ��
	// ������Ƕ�ÿ��Ԫ�رȽϣ�����Ⱥ��Ԫ�ش��򽻻���ֱ��β��ֹͣ
	// �ܹ���Ҫ���� n - 1 ��

	// ������Ԫ�ط�Χ
	for (int end = n - 1; end > 0; --end)
	{
		// һ�˱�������һ�����ֵ����end��
		for (int i = 0; i < end; ++i)
		{
			if (a[i] > a[i + 1])
			{
				Swap(&a[i], &a[i + 1]);
			}
		}
	}
}
// ����ȡ��
int GetMidIndex(int* a, int left, int right)
{
	assert(a);
	int mid = left + (right - left) / 2;
	if (a[left] < a[right])
	{
		if (a[mid] > a[right])
		{
			return right;
		}
		else if (a[left] > a[mid])
		{
			return left;
		}
		else
		{
			return mid;
		}
	}
	else // a[left] >= a[right]
	{
		if (a[mid] > a[left])
		{
			return left;
		}
		else if (a[right] > a[mid])
		{
			return right;
		}
		else
		{
			return mid;
		}
	}
}
//// �������汾
//// ��������
//void QuickSort(int* a, int left, int right)
//{
//	assert(a);
//	// ֻ�ڷ�Χ��Чʱ�ݹ�
//	if (right <= left)
//	{
//		return;
//	}
//	int leftTmp = left;
//	int rightTmp = right;
//	// ��ȡ��λ����Ϊkey����ֹ�ӽ����������ѡ����ֵ��
//	int midIndex = GetMidIndex(a, left, right);
//	Swap(&a[right], &a[midIndex]);
//	int key = right;
//	// �Ų�����keyΪ���ģ���С�Ҵ�����
//	while (left < right)
//	{
//		if (a[left] <= a[key]) 
//		{
//			++left;
//		}
//		else if (a[right] >= a[key])
//		{
//			--right;
//		}
//		else 
//		{
//			Swap(&a[left], &a[right]);
//		}
//	}
//	Swap(&a[left], &a[key]);
//
//	// �ݹ�������������
//	QuickSort(a, leftTmp, key - 1);
//	QuickSort(a, key+1, rightTmp);
//}
// ���ŷ�������������ָ�뷨 / hoare�汾��
int PartSort1(int* a, int begin, int end)
{
	// ����QuickSort�����end > begin
	assert(a);
	int key = end;
	// �Ų�����keyΪ���ģ���С�Ҵ�����
	while (begin < end)
	{
		if (a[begin] <= a[key])
		{
			++begin;
		}
		else if (a[end] >= a[key])
		{
			--end;
		}
		else // �Ҵ�������������������С����ִ�н���
		{
			Swap(&a[begin], &a[end]);
		}
	}
	// ͣ����ʱ��begin
	Swap(&a[begin], &a[key]);

	return begin;
}
//// ���ŷ�������������ָ�뷨 / hoare�汾���������Ų��ã�
//int PartSort1(int* a, int begin, int end) {
//	assert(a);
//	int key = end;
//	int left = begin;
//	int right = end - 1;  // ��end-1��ʼɨ�裬����key�������
//
//	while (left < right) {
//		// �����ҵ�һ������a[key]��Ԫ��
//		while (left < right && a[left] <= a[key]) ++left;
//		// �����ҵ�һ��С��a[key]��Ԫ��
//		while (left < right && a[right] >= a[key]) --right;
//		Swap(&a[left], &a[right]);
//	}
//
//	// ����left==right������Ƿ���Ҫ����key
//	if (a[left] > a[key]) {
//		Swap(&a[left], &a[key]);
//		return left;
//	}
//	else {
//		// ������Ԫ�ؾ�С��key��key�����ƶ�
//		return key;
//	}
//}
// ���ŷ����������ڿӷ���
int PartSort2(int* a, int begin, int end)
{
	// ����QuickSort�����end > begin
	assert(a);
	int key = a[end];
	// �Ų�����keyΪ���ģ���С�Ҵ�����
	while (begin < end)
	{
		// ���������key�����
		while (begin < end && a[begin] <= key)
		{
			++begin;
		}
		// �������ҵ��Ĵ�������䵽�����Ŀӣ�����beginλ���γ��µĿ�
		Swap(&a[begin], &a[end]);

		// ���ҷ�����keyС����
		while (begin < end && a[end] >= key)
		{
			--end;
		}
		// �������ҵ��Ĵ�������䵽�����Ŀӣ�������endλ�����±�ɿ�
		Swap(&a[begin], &a[end]);
	}
	// ��key��䵽���У�ͣ����ʱ��beginλ�ñ�ȻΪ�ӣ�
	a[begin] = key;

	return begin;
}
// ���ŷ���������ǰ��ָ�뷨��
int PartSort3(int* a, int begin, int end)
{
	// ����QuickSort�����end > begin
	assert(a);
	int key = a[end];
	// ǰ��ָ�뷨��cur���ҵ������������ͨ��prev���õ������
	// �Ų�����keyΪ���ģ���С�Ҵ�����
	int cur = begin;
	int prev = cur - 1;
	while (cur <= end)
	{
		// curָ�븺����С��key����
		// ��ȵľ������������ˣ����ٽ���������
		while (cur < end && a[cur] >= key) 
		{
			++cur;
		}
		// ���ҵ��ı�keyС����������ǰ��++prev��λ��
		// ���һ��cur��ͣ��keyλ��
		if (cur <= end)
		{
			Swap(&a[++prev], &a[cur++]);
		}
	}
	// �����С�ڵ���key�����ŵ��������
	// ��prevλ�ã����ǽ���λ��
	return prev;
}
// ��������
void QuickSort(int* a, int left, int right)
{
	assert(a);
	// ֻ�ڷ�Χ��Чʱ�ݹ�
	if (right <= left)
	{
		return;
	}
	else if (right - left > 10)
	{
		// ��ȡ��λ����Ϊkey����ֹ�ӽ����������ѡ����ֵ��
		int midIndex = GetMidIndex(a, left, right);
		Swap(&a[right], &a[midIndex]);

		// ��������
		// ��������[left,right]��Χ������
		// �ų���a[right]ֵΪ�磬��С�Ҵ�����У������ؽ���λ��

		//// ����ָ�뷨
		//int divided = PartSort1(a, left, right); 
		//// �ڿӷ�
		//int divided = PartSort2(a, left, right);
		// ǰ��ָ�뷨
		int divided = PartSort3(a, left, right);

		// �ݹ�������������
		QuickSort(a, left, divided - 1);
		QuickSort(a, divided + 1, right);
	}
	else
	{
		// �������Сʱ���ݹ�Ĵ����϶࣬���۽ϴ�
		// ���Ե�����������С���������Ч���Ϻõĺ�������
		// ������õ���������£����������ײ�Ľڵ�����
		// �Ϳ���֪��Ϊ������10��������Ҫ���ö��ٴεݹ��ˣ�
		// ���ο�������ÿ�ζ���ȡ��������λ����Ϊkey
		InsertSort(a + left, right - left + 1);
	}
}
//// �������� �ǵݹ�ʵ�֣����ã�
//void QuickSortNonR(int* a, int left, int right)
//{
//	if (right <= left)
//		return;
//
//	Stack s;
//	StackInit(&s);
//
//	StackPush(&s, right);
//	StackPush(&s, left);
//
//	while (!StackEmpty(&s))
//	{
//		int begin = StackTop(&s);
//		StackPop(&s);
//		int end = StackTop(&s);
//		StackPop(&s);
//		if (begin >= end)
//		{
//			continue;
//		}
//		else if (end  - begin > 10)
//		{
//			int mid = GetMidIndex(a, begin, end);
//			Swap(&a[end], &a[mid]);
//			int divided = PartSort1(a, begin, end);
//			StackPush(&s, end);
//			StackPush(&s, divided + 1);
//			StackPush(&s, divided - 1);
//			StackPush(&s, begin);
//		}
//		else
//		{
//			InsertSort(a + begin, end - begin + 1);
//		}
//	}
//	StackDestroy(&s);
//}

// �������� �ǵݹ�ʵ�֣������Ѿ��ų����˴����߼����������ƴ�ǰջ�����У����ݴ������⣩
// ����Ӧ���ص��Ų�Ϊʲô��������ʱ�������С1000000����rangeԪ�صĵ�pop��ջ����pushѹ��ջ������
void QuickSortNonR(int* a, int left, int right)
{
	if (right <= left)
		return;

	Stack s;
	StackInit(&s);

	Range r = { left, right };
	StackPush(&s, (Range) { left, right });

	// ����ĵڶ���������û��ʹ�ýṹ�����r
	// ����ʹ�á���������������������һ�������ṹ�����C99��֧��
	// StackPush(&s, (Range) { left, right });

	while (!StackEmpty(&s))
	{
		Range r = StackTop(&s);
		StackPop(&s);
		//printf("��ջ���ݣ�%d %d\n", r._left, r._right);
		if (r._left >= r._right)
		{
			continue;
		}
		else if (r._right - r._left > 10)
		{
			int mid = GetMidIndex(a, r._left, r._right);
			Swap(&a[r._right], &a[mid]);
			int divided = PartSort1(a, r._left, r._right);
			Range r1 = { r._left, divided - 1 };
			Range r2 = { divided + 1, r._right };
			//printf("��ջ����1��%d %d\n", r1._left, r1._right);
			//printf("��ջ����2��%d %d\n", r2._left, r2._right);
			//Sleep(100);
			//StackPush(&s, (Range) { r._left, divided - 1 }); // C99��֧��
			//StackPush(&s, (Range) { divided + 1, r._right }); // C99��֧��
			StackPush(&s, r2); 
			StackPush(&s, r1);
		}
		else
		{
			InsertSort(a + r._left, r._right - r._left + 1);
		}
	}
	StackDestroy(&s);
}

////�������Ų��ã�
//void QuickSortNonR(int* a, int left, int right) {
//	if (right <= left) return;
//
//	Stack s;
//	StackInit(&s);
//	StackPush(&s, (Range) { left, right });
//
//	while (!StackEmpty(&s)) {
//		Range r = StackTop(&s);
//		StackPop(&s);
//
//		if (r._left >= r._right) continue;
//
//		// С����ʹ�ò��������Ż�
//		if (r._right - r._left <= 10) {
//			InsertSort(a + r._left, r._right - r._left + 1);
//			continue;
//		}
//
//		// ����ȡ���Ż�
//		int mid = GetMidIndex(a, r._left, r._right);
//		Swap(&a[r._right], &a[mid]);
//
//		int divided = PartSort1(a, r._left, r._right);
//
//		// ȷ��divided�ںϷ���Χ�� [r._left, r._right-1]
//		if (divided >= r._right) divided = r._right - 1;
//		if (divided <= r._left) divided = r._left;
//
//		Range r1 = { r._left, divided - 1 };
//		Range r2 = { divided + 1, r._right };
//
//		// ѹջ˳�����Һ��󣬼���ջ���
//		if (r2._left < r2._right) StackPush(&s, r2);
//		if (r1._left < r1._right) StackPush(&s, r1);
//	}
//	StackDestroy(&s);
//}