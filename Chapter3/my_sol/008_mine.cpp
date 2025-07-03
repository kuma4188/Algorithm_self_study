#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	int N;
	
	cin >> N;
	vector<int> arr(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	vector<int> tmp(arr);


	sort(arr.begin(), arr.end());

	int start = 0;
	int end = 1;
	int max = arr[N-1];
	int sum = arr[start] + arr[end];
	while (end < N) {
		if (sum <= max) {
			tmp.erase(remove(tmp.begin(), tmp.end(), sum), tmp.end());
			end++;
			sum = arr[start] + arr[end];
		}
		else if (sum > max) {
			start++;
			end = start + 1;
			if (end == N) {
				break;
			}
			else {
				sum = arr[start] + arr[end];
			}
			
		}
	}
	int count = N - tmp.size();
	cout << count << "\n";
}