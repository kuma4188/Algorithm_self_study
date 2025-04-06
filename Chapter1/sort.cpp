#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//selection sort 삽입 오름차순 정렬
void selection_sort(int N, int arr[]) {
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}


// insert sort 오름차순 정렬
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


// bubble sort 오름차순 정렬
void bubble_sort(int N, int arr[]) {
	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < N-1-i; j++) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
			}
		}
	}
}

// bubble sort 오름차순 정렬 (최적화 ver)
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

//퀵정렬 여기서부터 시작
int partition(vector<int>& arr, int left, int right) {
	int mid = left + (right - left) / 2;
	int pivot = arr[mid]; //피벗을 중간값으로 설정

	//일단 피벗을 맨끝으로 이동시켜
	swap(arr[mid], arr[right]);

	int i = left;
	for (int j = left; j < right; ++j) {
		if (arr[j] < pivot) {
			swap(arr[i], arr[j]);
			++i;
		}
	}
	
	// 피벗을 제자리로 다시 이동시킴
	swap(arr[i], arr[right]);
	// 피벗의 최종 위치 반환
	return i;
}

//퀵 재귀 함수
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



// 병합 정렬

void merge(vector<int>& arr, int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;

	//임시 배열 만들기
	vector<int> L(n1);
	vector<int> R(n2);

	//값 복사
	for (int i = 0; i < n1; i++) L[i] = arr[left + i];
	for (int i = 0; i < n2; i++) R[i] = arr[mid+1 + i];

	//병합시작
	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k++] = L[i++];
		}
		else {
			arr[k++] = R[j++];
		}
	}

	//남은 요소 처리
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



//힙 정렬

void heapify(vector<int>& arr, int n, int i) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	//왼쪽 자식이 더 크면 largest 갱신
	if (left < n && arr[left] > arr[largest])
		largest = left;

	if (right < n && arr[right] > arr[largest])
		largest = right;

	if (largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}


// 힙정렬 함수
void heap_sort(vector<int>& arr) {
	int n = arr.size();

	//1단계 : 배열을 max heap으로 변환
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(arr, n ,i);
	}

	//2단계 : 가장 큰 값을 맨뒤로 보내고 고정, 그 후 사이즈 줄여서 다시 정렬
	for (int i = n - 1; i >= 0; i--) {
		swap(arr[0], arr[i]); // 가장 큰값 맨뒤로 보내고 고정
		heapify(arr, i, 0); // 남은 배열에 대해서 다시 힙 정렬
	}


}
