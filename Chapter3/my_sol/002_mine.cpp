#include <iostream>

using namespace std;


int main() {
	double N,arr[1000];
	double max = 0;
	double sum = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	
	for (int i = 0; i < N; i++) {
		sum += arr[i] / max * 100;
	}

	cout << sum / N;


	return 0;
}