#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<pair<int, int>>v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}

	sort(v.begin(), v.end());
	int Max = 0;

	for (int i = 0; i < N; i++) {
		if (Max < v[i].second - i) {
			Max = v[i].second - i;
		}
	}
	cout << Max +1 << "\n";


}