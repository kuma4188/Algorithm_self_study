#include <iostream>

using namespace std;




int main() {
	int N = 0;
	string Numbers;
	cin >> N;
	cin >> Numbers;

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += Numbers[i] - '0';
	}
	cout << sum;

	return 0;
}