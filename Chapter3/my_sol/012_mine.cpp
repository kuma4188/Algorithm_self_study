#include <iostream>
#include<stack>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> A(n, 0);
	vector <int> rv;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < n; i++) {
		int su = A[i];
		bool result = true;
		for (int j = i + 1; j < n; j++) {
			if (su < A[j]) {
				result = false;
				rv.push_back(A[j]);
				break;
			}
		}
		if (result == true) {
			rv.push_back(-1);
		}
	}

	for (int i = 0; i < n; i++) {
		cout << rv[i] << " " ;
	}

}