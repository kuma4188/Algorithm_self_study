#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//selection sort ���� �������� ����
void selection_sort(int N, int arr[]) {
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}


// insert sort �������� ����
void insert_sort(int N, int arr[]) {
	for (int i = 1; i < N; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}


// bubble sort �������� ����
void bubble_sort(int N, int arr[]) {
	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < N-1-i; j++) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
			}
		}
	}
}

// bubble sort �������� ���� (����ȭ ver)
void bubble_sort_optimized(int N, int arr[]) {
	for (int i = 0; i < N - 1; i++) {
		int tri = 0;
		for (int j = 0; j < N - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				tri++;
			}
		}
		if (tri == 0) {
			break;
		}
	}
}

//������ ���⼭���� ����
int partition(vector<int>& arr, int left, int right) {
	int mid = left + (right - left) / 2;
	int pivot = arr[mid]; //�ǹ��� �߰������� ����

	//�ϴ� �ǹ��� �ǳ����� �̵�����
	swap(arr[mid], arr[right]);

	int i = left;
	for (int j = left; j < right; ++j) {
		if (arr[j] < pivot) {
			swap(arr[i], arr[j]);
			++i;
		}
	}
	
	// �ǹ��� ���ڸ��� �ٽ� �̵���Ŵ
	swap(arr[i], arr[right]);
	// �ǹ��� ���� ��ġ ��ȯ
	return i;
}

//�� ��� �Լ�
void quicksort(vector<int>& arr, int left, int right) {
	if (left < right) {
		int pivotIndex = partition(arr, left, right);
		quicksort(arr, left, pivotIndex - 1);
		quicksort(arr, pivotIndex + 1, right);
	}
}


void quick_sort(vector<int>& arr) {
	quicksort(arr, 0, arr.size() - 1);
}



// ���� ����

void merge(vector<int>& arr, int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;

	//�ӽ� �迭 �����
	vector<int> L(n1);
	vector<int> R(n2);

	//�� ����
	for (int i = 0; i < n1; i++) L[i] = arr[left + i];
	for (int i = 0; i < n2; i++) R[i] = arr[mid+1 + i];

	//���ս���
	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k++] = L[i++];
		}
		else {
			arr[k++] = R[j++];
		}
	}

	//���� ��� ó��
	while (i < n1) arr[k++] = L[i++];
	while (i < n2) arr[k++] = R[j++];
}

void mergeSort(vector<int>& arr, int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

void merge_sort(vector<int>& arr) {
	mergeSort(arr, 0, arr.size() - 1);
}



//�� ����

void heapify(vector<int>& arr, int n, int i) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	//���� �ڽ��� �� ũ�� largest ����
	if (left < n && arr[left] > arr[largest])
		largest = left;

	if (right < n && arr[right] > arr[largest])
		largest = right;

	if (largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}


// ������ �Լ�
void heap_sort(vector<int>& arr) {
	int n = arr.size();

	//1�ܰ� : �迭�� max heap���� ��ȯ
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(arr, n ,i);
	}

	//2�ܰ� : ���� ū ���� �ǵڷ� ������ ����, �� �� ������ �ٿ��� �ٽ� ����
	for (int i = n - 1; i >= 0; i--) {
		swap(arr[0], arr[i]); // ���� ū�� �ǵڷ� ������ ����
		heapify(arr, i, 0); // ���� �迭�� ���ؼ� �ٽ� �� ����
	}


}
