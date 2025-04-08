#include <iostream>

using namespace std;



int main() {
	int num, question;
	int arr[100000];
	int sum[100000] = { 0 };
	cin >> num >> question;
	for (int i = 1; i <= num; i++) {
		cin >> arr[i];
		sum[i] = sum[i - 1] + arr[i];
	}

	int start, end;
	for (int i = 0; i < question; i++) {
		cin >> start >> end;
		cout << sum[end] - sum[start-1] << endl;
	}



	return 0;
}