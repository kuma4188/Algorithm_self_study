#include <iostream>
#include<vector>
#include <algorithm>
#include<limits>
using namespace std;

int main() {
	int N, L;
	cin >> N >> L;
	int* A = new int[N]();
	vector <int> V;
	vector <int> Answer;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < L - 1; i++) {
		V.push_back(INT_MAX);
	}

	for (int i = 0; i < N; i++) {
		V.push_back(A[i]);
		auto min =  min_element(V.begin(), V.end());
		int mint = *min;
		cout << mint << " ";
		V[i] = INT_MAX;
	}

}