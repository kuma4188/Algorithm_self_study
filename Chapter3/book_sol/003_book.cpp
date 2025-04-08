#include <iostream>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num, question;
	int sum[100001] =  {};
	cin >> num >> question;
	for (int i = 1; i <= num; i++) {
		int temp;
		cin >> temp;
		sum[i] = sum[i - 1] + temp;
	}

	
	for (int i = 0; i < question; i++) {
		int start, end;
		cin >> start >> end;
		cout << sum[end] - sum[start - 1] << "\n";
	}
}