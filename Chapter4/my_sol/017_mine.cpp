#include <iostream>
#include<vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>v;

	while (N > 0) {
		v.push_back(N % 10);
		N = N / 10;
	}
	vector<int> ans;

	for (int i = 0; i < v.size(); i++) {
		int max = 0;
		int max_index = i;
		for (int j = i; j < v.size(); j++) {
			if (max < v[j]) {
				max = v[j];
				max_index = j;
			}
		}
		swap(v[max_index], v[i]);
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}
	
}