#include <iostream>
#include <queue>
#include <cstdlib>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
	int N;
	cin >> N;

	int num;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		cin >> num;

		if (num != 0) {
			pq.push({ abs(num) , num });
		}
		else if (num == 0) {
			if (pq.size() != 0) {
				v.push_back(pq.top().second);
				pq.pop();
			}
			else if (pq.size() == 0) {
				v.push_back(0);
			}
		}
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}


}