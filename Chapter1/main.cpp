#include <iostream>
#include "sort.h"
using namespace std;


// ����Լ�
void print(int N, int arr[]) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << ", ";
	}
	cout << endl;
}

// ����Լ�
void print1(int N, vector<int>& arr) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << ", ";
	}
	cout << endl;
}


int main() {
	int N;
	cin >> N;
	vector<int> arr4(N);
	vector<int> arr5(N);
	vector<int> arr6(N);

	//�����Ҵ��� �̿��Ͽ� �迭 ũ�� ����
	int* arr = new int[N];

	//���� �Է¹ޱ�
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		arr4[i] = arr[i];
		arr5[i] = arr[i];
		arr6[i] = arr[i];
	}
	int* arr1 = new int[N];
	copy_n(arr, N, arr1);
	int* arr2 = new int[N];
	copy_n(arr, N, arr2);
	int* arr3 = new int[N];
	copy_n(arr, N, arr3);


	//��������
	cout << "selection sort : ";
	selection_sort(N, arr);
	print(N, arr);

	// ��������
	cout << "insert sort : ";
	insert_sort(N, arr1);
	print(N, arr1);

	// ��������
	cout << "bubble sort : ";
	bubble_sort(N, arr2);
	print(N, arr2);

	// ��������(����ȭ)
	cout << "bubble sort(optimized) : ";
	bubble_sort_optimized(N, arr3);
	print(N, arr3);

	// ������
	cout << "quick sort : ";
	quick_sort(arr4);
	print1(N, arr4);

	//���� ����
	cout << "merge sort : ";
	merge_sort(arr5);
	print1(N, arr5);

	//�� ����
	cout << "heap sort : ";
	heap_sort(arr6);
	print1(N, arr6);
	

	// �����Ҵ� ���ݱ�
	delete[] arr;
	return 0;
}