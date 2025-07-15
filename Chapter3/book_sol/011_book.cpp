#include <iostream>
#include<stack>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> A(n, 0);
	vector<char> rv;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	stack<int> st;
	int num = 1;
	bool result = true;

	for (int i = 0; i < A.size(); i++) {
		int su = A[i];

		if (su >= num) {
			while (su >= num) {
				st.push(num++);
				rv.push_back('+');
			}
			st.pop();
			rv.push_back('-');
		}
		else {
			int n = st.top();
			st.pop();

			if (n > su) {
				cout << "NO";
				result = false;
				break;
			}
			else {
				rv.push_back('-');
			}
		}
	}
	if (result) {
		for (int i = 0; i < rv.size(); i++) {
			cout << rv[i] << "\n";
		}
	}


}