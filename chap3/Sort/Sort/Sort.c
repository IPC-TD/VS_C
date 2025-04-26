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
			int divided = PartSort1(a, r._left, r._right);
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