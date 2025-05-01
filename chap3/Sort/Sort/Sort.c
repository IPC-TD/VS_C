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

// ��������Ų����ӷ��������ţ���ΪŲ���Ƚ�����ʡһЩ������
void InsertSort(int* a, int n)
{
	assert(a);
	// ÿ��ѭ������a[i]λ�õ����ݵĲ���
	for (int i = 0; i < n; ++i)
	{
		int end = i;
		int tmp = a[end];
		// ���endǰ��λ�õ�������tmp�Ĵ�������ƶ�
		while (end - 1 >= 0)
		{
			if (a[end - 1] > tmp)
			{
				a[end] = a[end - 1];
				--end;
			}
			else
			{
				break;
			}
		}
		// ͣ����˵��end - 1�Ѿ���-1λ�ã�����a[end - 1]��tmpС
		// ��endλ���ǣ�tmpӦ�������ȷλ��
		a[end] = tmp;
	}
}

//// ֱ�Ӳ������򣨽�������
//void InsertSort_1(int* a, int n)
//{
//	assert(a);
//	// �����еڶ���Ԫ�ؿ�ʼ�������Ͻ�һ��������Ԫ��
//	// ���뵽ǰ�����������
//	for (int end = 1; end < n; ++end)
//	{
//		while (end - 1 >= 0) // ����ǰ��Ԫ���±�ʼ����Ч
//		{
//			// ��ǰ��Ԫ�ر�end��ʱ���򽻻�λ��
//			if (a[end] < a[end - 1])
//			{
//				Swap(&a[end], &a[end - 1]);
//				--end;
//			}
//			else
//			{
//				break; // ���ǰ���Ѿ�С�ڵ���end����������
//			}
//		}
//	}
//}

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

//// ϣ�����򣨸�����ֱ���汾��
//void ShellSort_1(int* a, int n)
//{
//	assert(a);
//	if (n <= 1)
//		return;
//
//	int gap = n;
//	int prev = 0;
//	int tmp = 0;
//	int end = 0;
//	while (gap > 1)
//	{
//		// ��gap > 1 ʱ������Ԥ����
//		// gap����С����С��3ʱ����3�����Ϊ0��
//		// +1 ��֤���һ��Ϊ1��gap = 0 + 1���൱��ֱ�Ӳ�������
//		gap = gap / 3 + 1;
//		for (int i = 0; i < n; ++i)
//		{
//			// ÿgap���֮��Ԫ�أ�Ϊһ�飬������������
//			tmp = a[i];
//			end = i;
//			prev = i - gap;
//			while (prev >= 0)
//			{
//				if (tmp < a[prev])
//				{
//					a[end] = a[prev];
//					end = prev;
//					prev -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end] = tmp;
//		}
//	}
//}

//// ѡ������
//// �ܸ�����С������Χ�����ڴ�������������
//// �ܸ���ȫ�����ص�����
//void SelectSort_1(int* a, int n)
//{
//	assert(a);
//	// ÿ�α���ѡ�����С��������
//	// �ֱ�������������࣬Ȼ�������߽�
//	// ������Χ��[left��right]����Ϊ������
//	int left = 0;
//	int right = n - 1;
//	int mini = 0;
//	int max = 0;
//	while (left < right)
//	{
//		// ���������С����������±�
//		mini = left;
//		max = left;
//		for (int i = left + 1; i <= right; ++i)
//		{
//			if (a[i] < a[mini])
//			{
//				mini = i;
//			}
//			if (a[i] > a[max])
//			{
//				max = i;
//			}
//		}
//		// ����С���������
//		Swap(&a[left++], &a[mini]);
//		
//		// �߼���������ѵģ������ֶ���ͼ���
//		// ���maxԭ����leftλ�ã��ᱻ���滻��mini_iλ��
//		// ������Ҫ�ж��Ƿ���Ҫ����
//		if (a[max] < a[mini])
//		{
//			max = mini; // �������ֵλ��
//		}
//		// �����ֵ�ŵ��ұ�
//		Swap(&a[right--], &a[max]);
//	}
//}

 //ѡ�����򣨴�ͳʵ�֣�
 //�����߼������򵥣��ͳ������ӣ��͸��ٵ�if��CUP��֧Ԥ����Ѻ�
 //����һ�μ���n������������ʱ��ʵ�ʵ�Ч�ʻ����
 //����Ȼ���ַ������ۺ�Ч�ʲ����ǱȽ�С�ģ�
void SelectSort(int* a, int n)
{
	assert(a);
	int min = 0;
	// ÿ����һ������С������a[i]
	for (int i = 0; i < n; ++i)
	{
		// ÿ�α���ѡ��һ����С�����±�
		min = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		// ����С����a[i]����
		Swap(&a[min], &a[i]);
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

// ���ŷ�������������ָ�뷨 / hoare�汾��
int Partition1(int* a, int begin, int end)
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

// ���ŷ����������ڿӷ���
int Partition2(int* a, int begin, int end)
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

// ���ŷ���������ǰ��ָ�뷨��������++prev����˼·��
int Partition3(int* a, int begin, int end)
{
	// ����QuickSort�����end > begin
	assert(a);

	// ��ע���������ͱʼ�д��˼·һ�£���ϸ�ڴ���ͬ

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
		// ���һ��cur��ͣ��keyλ�ã���Ȼ��
		if (cur <= end)
		{
			Swap(&a[++prev], &a[cur++]);
		}
	}
	// �����С�ڵ���key�����ŵ��������
	// ��prevλ�ã����ǽ���λ��
	return prev;
}

//// ���ŷ���������ǰ��ָ�뷨��������prev����˼·��
//int Partition3_1(int* a, int begin, int end)
//{
//	// ����QuickSort�����end > begin
//	assert(a);
//
//	int key = a[end];
//	// ǰ��ָ�뷨��cur���ҵ������������ͨ��prev���õ������
//	// �Ų�����keyΪ���ģ���С�Ҵ�����
//	int cur = begin;
//	int prev = begin;
//	while (cur <= end)
//	{
//		// curָ�븺����С��key����
//		// ��ȵľ������������ˣ����ٽ���������
//		while (cur < end && a[cur] >= key)
//		{
//			++cur;
//		}
//		// ���ҵ��ı�keyС����������ǰ��prev��λ��
//		// ���һ��cur��ͣ��keyλ�ã���Ȼ��
//		if (cur <= end)
//		{
//			Swap(&a[prev++], &a[cur++]);
//		}
//	}
//	// �����С�ڵ���key�����ŵ��������
//	// ��prev - 1λ�ã����ǽ���λ��
//	return prev - 1;
//}

//// �������� (�������汾)
//void QuickSort_1(int* a, int left, int right)
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
//	QuickSort(a, key + 1, rightTmp);
//}

void _QuickSort(int* a, int left, int right, int depth)
{
	assert(a);
	// ֻ�ڷ�Χ��Чʱ�ݹ�
	if (right <= left)
	{
		return;
	}
	else if (depth == 0)
	{
		// ���ݹ���ȳ�����ֵʱ�����ö����򣬱�������
		HeapSort(a + left, right - left + 1);
	}
	else if (right - left < 10)
	{
		// �������Сʱ���ݹ�Ĵ����϶࣬���۽ϴ�
		// ���Ե�����������С���������Ч���Ϻõĺ�������
		// ������õ���������£����������ײ�Ľڵ�����
		// �Ϳ���֪��Ϊ������10��������Ҫ���ö��ٴεݹ��ˣ�
		// ���ο�������ÿ�ζ���ȡ��������λ����Ϊkey
		InsertSort(a + left, right - left + 1);

	}
	else
	{
		// ��ȡ��λ����Ϊkey����ֹ�ӽ����������ѡ����ֵ��
		int midIndex = GetMidIndex(a, left, right);
		Swap(&a[right], &a[midIndex]);

		// ��������
		// ��������[left,right]��Χ������
		// �ų���a[right]ֵ(keyֵ��Ϊ�磬��С�Ҵ�����У������ؽ���λ��

		//// ����ָ�뷨
		//int divided = Partition1(a, left, right); 
		//// �ڿӷ�
		//int divided = Partition2(a, left, right);
		// ǰ��ָ�뷨
		int divided = Partition3(a, left, right);

		// �ݹ�������������
		_QuickSort(a, left, divided - 1, depth - 1);
		_QuickSort(a, divided + 1, right, depth - 1);
	}
}

// ���������Ż��汾ʵ�֣���������ȡ�У��ͻ������
void QuickSort(int* a, int left, int right)
{
	assert(a);
	// ֻ�ڷ�Χ��Чʱ�ݹ�
	if (right <= left)
	{
		return;
	}
	int maxDepth =  2 * (int)log2(right - left);

	_QuickSort(a, left, right, maxDepth);
}

//// �����������Ż��ı�׼ʵ�֣�
//void QuickSortStandard(int* a, int left, int right)
//{
//	assert(a);
//	// ֻ�ڷ�Χ��Чʱ�ݹ�
//	if (right <= left)
//	{
//		return;
//	}
//	// ��������
//	// ��������[left,right]��Χ������
//	// �ų���a[right]ֵ(keyֵ��Ϊ�磬��С�Ҵ�����У������ؽ���λ��
//
//	//// ����ָ�뷨
//	//int divided = Partition1(a, left, right); 
//	//// �ڿӷ�
//	//int divided = Partition2(a, left, right);
//	// ǰ��ָ�뷨
//	int divided = Partition3(a, left, right);
//
//	// �ݹ�������������
//	QuickSortStandard(a, left, divided - 1);
//	QuickSortStandard(a, divided + 1, right);
//}

//// �������� �ǵݹ�ʵ�֣����ã���ʹ��intΪջԪ�أ�
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
//			int divided = Partition1(a, begin, end);
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

// �������� �ǵݹ�ʵ�� ��ʹ��rangeΪջԪ�أ�
// �������Ѿ��ų����˴����߼����������ƴ�ǰջ�����У����ݴ������⣩
void QuickSortNonR(int* a, int left, int right)
{
	if (right <= left)
		return;

	// ��������ʼ��ջ
	Stack s;
	StackInit(&s);
	// ����һ�����䷶Χ��ջ
	// ����ĵڶ���������û��ʹ�ýṹ�����r
	// 	// Range r = { left, right };
	// ����ʹ�á���������������������һ�������ṹ�����C99��֧��
	StackPush(&s, (Range) { left, right });

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
			int divided = Partition1(a, r._left, r._right);
			//printf("��ջ����1��%d %d\n", r1._left, r1._right);
			//printf("��ջ����2��%d %d\n", r2._left, r2._right);
			//Sleep(100);
			StackPush(&s, (Range) { r._left, divided - 1 }); // C99��֧��
			StackPush(&s, (Range) { divided + 1, r._right }); // C99��֧��
			//Range r1 = { r._left, divided - 1 };
			//Range r2 = { divided + 1, r._right };
			//StackPush(&s, r2); 
			//StackPush(&s, r1);
		}
		else
		{
			InsertSort(a + r._left, r._right - r._left + 1);
		}
	}
	StackDestroy(&s);
}

// �鲢�����޼������������
void MergeArray(int* a, int begin1, int end1, int begin2, int end2, int* tmp)
{
	assert(a && tmp);
	int index = begin1, left = begin1, right = end2;
	// ���������е���߿�ʼ������ѡ���С������д��tmp����
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[index++] = a[begin1++];
		}
		else
		{
			tmp[index++] = a[begin2++];
		}
	}
	// ����˵������һ�������Ѿ�����ȫд�룬��ʣ�µ���һ��д�뼴��
	while (begin1 <= end1)
	{
		tmp[index++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[index++] = a[begin2++];
	}
	// ���洢��tmp�����й鲢�õ����ݣ�д�ص�ԭ������
	for (int i = left; i <= right; ++i)
	{
		a[i] = tmp[i];
	}
}
void _MergeSort(int* a, int left, int right, int* tmp)
{
	assert(a && tmp);
	// �ų���Ч����
	if (left >= right)
	{
		return;
	}
	// ����˵�������еݹ�鲢
	else if (right - left > 10)
	{
		// ������ָ�����ҶԳ������
		int begin1 = left;
		int end1 = left + (right - left) / 2;
		int begin2 = end1 + 1;
		int end2 = right;
		// �ݹ�������������
		_MergeSort(a, begin1, end1, tmp);
		_MergeSort(a, begin2, end2, tmp);
		// ��ʱ�������䶼Ϊ���򣬺�����������������ϲ���������һ����������
		MergeArray(a, begin1, end1, begin2, end2, tmp);
	}
	// С�����ò������򣬼��ٵݹ���������������漸��ڵ����࣬Ҳ��ʾ�ݹ�����ࣩ
	else
	{
		// ֱ�Ӳ���������������ã����������Ԫ�ظ���
		InsertSort(a + left, right - left + 1);
	}
}
// �鲢����ݹ�ʵ��
void MergeSort(int* a, int n)
{
	assert(a);
	// 0����1����������������
	if (n <= 1)
		return;

	// ����һ�����飬���ںϲ�������������ʱ����ʱ�洢
	// ���￪�ã�����ݹ�ʱ���Ͳ�ͬƵ��malloc�������ڴ���Ƭ
	int* tmp = (int*)malloc(sizeof(int) * n);
	assert(tmp);
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}

// ԭ���Ĺ鲢����ʵ�֣��ǵݹ飩
void _MergeSortNonR(int* a, int left, int right, int* tmp)
{
	assert(a && tmp);
	if (left >= right)
		return;

	// �Ƚ�С��10�������ò����������ɣ�right + 1��/2 ����������
	int gap = 10;
	for (int i = 0; i <= right; i += gap) // ѭ��1
	{
		InsertSort(a + i, i + gap <= right + 1 ? gap : right + 1 - i);
	}
	// �ٽ��������䣬�������й鲢
	for (; gap <= right; gap *= 2)
	{
		// ����ÿ��gap���京��������������£���������ĳ���
		// ��������������������ڣ���Ŀǰ����gap���ȵ���Ч���䣬�ϲ�Ϊһ���µ����������
		// 
		// �ٸ����ӣ�
		// ����right = 99��gap = 10����������100����
		// forѭ��2���������ڣ���10��10���ȵ��������飬�鲢Ϊ 5��20���ȵ���������
		// ��һ��ѭ�� gap = 20����Ὣ5��20���ȵ��������飬�鲢Ϊ2��40���ȵ�����+1��10���ȵ��������顣
		// 
		// ����ı߽���ƣ���������ڿ��ƽ�������end1 �� end2 ʼ�ղ�����right
		// ִ��ÿһ��ǰ�����ж������Ƿ���Ч

		// ��ʼ����
		// ��μ���̫���ж�������������CPU�����㣬�������������
		int begin1 = 0;
		int end1 = gap - 1 <= right ? gap - 1 : right;
		int begin2 = end1 + 1 <= right ? end1 + 1 : right;
		int end2 = begin2 + gap - 1 <= right ? begin2 + gap - 1 : right;
		int index = 0;
		while (begin1 <= right)
		{
			// �������������䣬�ϲ���һ����������
			MergeArray(a, begin1, end1, begin2, end2, tmp);
			// ������Ҫ����������
			begin1 = end2 + 1;
			end1 = begin1 + gap - 1;
			end1 = end1 > right ? right : end1;

			begin2 = end1 + 1;
			end2 = begin2 + gap - 1;
			end2 = end2 > right ? right : end2;
		}
	}
}
// �鲢����ǵݹ�ʵ��
void MergeSortNonR(int* a, int n)
{
	assert(a);
	// 0����1����������������
	if (n <= 1)
		return;

	int* tmp = (int*)malloc(sizeof(int) * n);
	assert(tmp);

	//_MergeSortNonR(a, 0, n - 1, tmp);

	int insetGap = 10;
	for (int i = 0; i < n; i += insetGap) 
	{
		// ֱ�Ӳ��뺯����������һ�����������飬������Ԫ�ظ���
		// ÿ�δ���a����һ���������ʼ��ַ��������a�������һ����������Ϊ��ȷ�ĸ�����ʾ
		InsertSort(a + i, i + insetGap < n ? insetGap : n - i);
	}
	for (int gap = insetGap; gap < n; gap *= 2)
	{
		int begin1 = 0, end1 = 0;
		int begin2 = 0, end2 = 0;
		for (int i = 0; i < n; i += 2 * gap)
		{
			begin1 = i;
			end1 = i + gap - 1;
			begin2 = i + gap;
			end2 = i + 2 * gap - 1;
			// ���begin2�����ڣ���˵���鲢�ĵڶ������䲻����
			// ��һ����Ϊ�������䣬���ù鲢����������gap����������鲢
			if (begin2 >= n)
			{
				break;
			}
			// ������˵���ڶ���������ڣ���ô�ڶ��������������
			// ��Ҫ��������Ч��Χ
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			// ����Ҫ�鲢���������䣬�����鲢����
			MergeArray(a, begin1, end1, begin2, end2, tmp);
		}
	}
	free(tmp);
}
void createDirectory(const char* dirName)
{
	// ������Ŀ¼��ŷָ�����ļ�
	// ��ʧ���Ҵ����벻��EEXIST��Ŀ¼�Ѵ��ڣ����ű����˳���
	if (_mkdir("sub") != 0 && errno != EEXIST) {
		printf("�޷�����subĿ¼��ʧ��ԭ��%s\n", strerror(errno));
		exit(-1);
	}
}
// ����������д��subĿ¼�µ����ļ�
void writeFile(int* arr, int size, int* partNumber)
{
	// �����ļ��У����û�еĻ���
	createDirectory("sub");

	char subFileName[30];
	sprintf(subFileName, "sub\\dataSegment%d.txt", (*partNumber)++);

	FILE* outputFilePtr = fopen(subFileName, "w");
	if (outputFilePtr == NULL)
	{
		printf("���ļ���ʧ�ܣ�ʧ��ԭ��%s\n", strerror(errno));
		exit(-1);
	}
	for (int i = 0; i < size; ++i)
	{
		fprintf(outputFilePtr, "%d\n", arr[i]);
	}
	fclose(outputFilePtr); // �ر��ļ���������������д�룻
}
// �鲢����ʵ�֣����ţ�
char* MergeSortFile(const char* file)
{
	assert(file);
	// �ȴ������ļ�
	FILE* inputFilePtr = fopen(file, "r");
	if (inputFilePtr == NULL)
	{
		printf("���ļ���ʧ�ܣ�ʧ��ԭ��%s\n", strerror(errno));
		exit(-1);
	}

	int gap = 10; // �����ݷָ�� n / gap ��
	int num = 0;
	int* arr = (int*)malloc(sizeof(int) * gap);
	assert(arr);
	int size = 0;
	int partNumber = 0; // ÿ�����ļ������ֺ�׺
	// ��gap��࣬��ȡ�����ļ����ŵ������У������ڴ����������
	// ����󽫽��д�����ļ�
	for (int i = 0; fscanf(inputFilePtr, "%d\n", &num) != EOF; ++i)
	{
		if (i < gap - 1)
		{
			arr[size++] = num;
		}
		else
		{
			arr[size++] = num;
			QuickSort(arr, 0, size - 1);

			writeFile(arr, size, &partNumber);
			i = -1, size = 0;
		}
	}
	// �������һ�����ݣ�����У�
	if (size != 0)
	{
		QuickSort(arr, 0, size - 1);
		writeFile(arr, size, &partNumber);
	}
	free(arr);
	// �����ʲôԭ������������ļ���ȡ
	if (feof(inputFilePtr))
	{
		printf("�����ļ���ȡ��ϣ�\n");
	}
	else if (ferror(inputFilePtr))
	{
		printf("�����ļ���ȡ�����������\n");
	}
	fclose(inputFilePtr);

	// �� partNumber ���ļ����й鲢����
	createDirectory("sub"); // �����ļ��У����û�еĻ���
	char* tmpFileName = "sub\\tmpFile.txt";
	char* fileName = (char*)malloc(sizeof(char) * 30);
	for (int i = 0; i < partNumber; ++i) // �ܹ���partNumber�������ļ���Ҫ�鲢
	{
		FILE* tmpFilePtr = fopen(tmpFileName, "w"); // ��ʱ�洢�ļ��鲢���
		if (tmpFilePtr == NULL) printf("tmpFilePtr�ļ���ʧ�ܣ�ԭ��%s", strerror(errno));

		// �򿪵�i���ļ�
		sprintf(fileName, "sub\\dataSegment%d.txt", i);
		FILE* inputFilePtr1 = fopen(fileName, "r");
		if (inputFilePtr1 == NULL) printf("��%d���ļ���ʧ�ܣ�ԭ��%s", i, strerror(errno));

		// �򿪵�i+1���ļ�
		sprintf(fileName, "sub\\dataSegment%d.txt", i + 1);
		FILE* inputFilePtr2 = fopen(fileName, "r");
		if (inputFilePtr2 == NULL)
		{
			if (i == partNumber - 1)
			{
				FILE* inputFilePtr1 = fopen(fileName, "w");
				if (inputFilePtr1 == NULL) printf("��%d���ļ���ʧ�ܣ�ԭ��%s", i, strerror(errno));
			}
			else
			{
				printf("��%d���ļ���ʧ�ܣ�ԭ��%s", i + 1, strerror(errno));

			}
		}

		int num1, num2;
		int ret1 = fscanf(inputFilePtr1, "%d\n", &num1) != EOF;
		int ret2 = fscanf(inputFilePtr2, "%d\n", &num2) != EOF;
		// �鲢�����ļ�������
		while (ret1 && ret2)
		{
			if (num1 < num2)
			{
				fprintf(tmpFilePtr, "%d\n", num1);
				ret1 = fscanf(inputFilePtr1, "%d\n", &num1) != EOF;
			}
			else
			{
				fprintf(tmpFilePtr, "%d\n", num2);
				ret2 = fscanf(inputFilePtr2, "%d\n", &num2) != EOF;
			}
		}
		// ������ʣ�����ݵ��ļ����ݼ���д��
		if (ret1)
		{
			fprintf(tmpFilePtr, "%d\n", num1);
			while (fscanf(inputFilePtr1, "%d\n", &num1) != EOF)
				fprintf(tmpFilePtr, "%d\n", num1);
		}
		if (ret2)
		{
			fprintf(tmpFilePtr, "%d\n", num2);
			while (fscanf(inputFilePtr2, "%d\n", &num2) != EOF)
				fprintf(tmpFilePtr, "%d\n", num2);
		}
		// ������ж�ȡʧ�ܵĽ���
		if (ferror(inputFilePtr1))
		{
			printf("%s��ǰһ���ļ�δ������ȡ����", fileName);
		}
		if (ferror(inputFilePtr1))
		{
			printf("%s�ļ�δ������ȡ����", fileName);
		}
		fclose(inputFilePtr1);
		fclose(inputFilePtr2); // �رգ�����Ҫ�ԡ�wģʽ��д��鲢�õ�����
		fclose(tmpFilePtr); // �رգ�������������д��

		// ֻ��ģʽ�򿪸ղ�д�õ���ʱ�����ļ�
		tmpFilePtr = fopen(tmpFileName, "r"); 
		if (tmpFilePtr == NULL) printf("tmpFilePtr�ļ���ʧ�ܣ�ԭ��%s", strerror(errno));

		// д�뵱ǰѭ���ġ�i + 1����Ŀ���ļ���
		// ����ļ�����Ϊ�´�ѭ���ģ�inputFilePtr1���򿪣������´ι鲢
		inputFilePtr2 = fopen(fileName, "w"); 
		if (inputFilePtr2 == NULL) printf("��%d���ļ���ʧ�ܣ�ԭ��%s", i + 1, strerror(errno));

		// ����ʱ�ļ�������д��ԭ��i + 1�����ļ�
		int num3;
		while (fscanf(tmpFilePtr, "%d\n", &num3) != EOF)
		{
			fprintf(inputFilePtr2, "%d\n", num3);
		}
		// �ر������ļ�
		fclose(tmpFilePtr); // �´�ѭ�����ԡ�w��ģʽ�򿪣��������ݻᱻ��������������
		fclose(inputFilePtr2); // �����������ݽ�������д��
	}
	return fileName;
}

// ��������
void CountSort(int* a, int n)
{
	assert(a);
	if (n <= 1)
		return;

	int maxValue = a[0];
	int minValue = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > maxValue)
			maxValue = a[i];
		if (a[i] < minValue)
			minValue = a[i];
	}
	int size = maxValue - minValue + 1;
	int* tmpArr = (int*)malloc(sizeof(int) * size);
	assert(tmpArr);
	memset(tmpArr, 0, sizeof(int) * size);
	for (int i = 0, index = 0; i < n; ++i)
	{
		index = a[i] - minValue;
		++tmpArr[index];
	}
	for (int i = 0, index = 0; i < size; ++i)
	{
		while (tmpArr[i] != 0)
		{
			a[index++] = i + minValue;
			--tmpArr[i];
		}
	}
	free(tmpArr);
}