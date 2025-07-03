#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int N;
	int M;

	cin >> N;
	cin >> M;

	vector<int> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	int start =0;
	int end = N-1;
	int sum = arr[start] + arr[end];
	int count = 0;

	while (start < end) {
		if (sum < M) {
			sum -= arr[start++];
			sum += arr[start];
		}
		else if (sum > M) {
			sum -= arr[end--];
			sum += arr[end];
		}
		else {
			count++;
			sum -= arr[end--];
			sum += arr[end];
		}
	}

	cout << count << "\n";
}