#include <iostream>

using namespace std;

int part_sum(int n, int m) {
	int res = 0;
	// n은 시작 , m은 간격
	for (int i = n; i <= n + m; i++) {
		res += i;
	}
	return res;
}

int whole_sum(int n) {
	int res = 1;
	for (int i = 1; i < ((n+1) / 2); i++) {
		for (int j = 1; j< ((n + 1) / 2); j++) {
			if (n == part_sum(i, j) ) {
				res++;
			}
		}
	}
	return res;
}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cout << whole_sum(n);

 
}