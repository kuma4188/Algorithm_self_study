#include <iostream>

using namespace std;


int main() {
	int N = 0;
	int A[1000];
	cin >> N;

	
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	long sum = 0;
	long max = 0;

	for (int i = 0; i < N; i++) {
		if (A[i] > max) {
			max = A[i];
		}
		sum += A[i];
	}

	double result = sum*100.0 / max / N ;
	//각각의 숫자들에 대해서 max를 나눠서 더해도 되고 , 한방에 나눠도 된다.
	//차라리 한번에 max를 나누는게 훨씬 효율적이다.
	cout << result;


	return 0;
}