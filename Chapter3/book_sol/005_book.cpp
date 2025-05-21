#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector <long> s(n, 0);
	vector <long> c(n, 0);

	cin >> s[0];

	for (int i = 1; i < n; i++) {
		int tmp;
		cin >> tmp;
		s[i] = s[i - 1] + tmp;
	}


	long answer = 0;
	for (int i = 0; i < n; i++) {
		int remainder = s[i] % m;
		if (remainder == 0) {
			answer++;
		}
		c[remainder]++;
	}
	for (int i = 0; i < m; i++) {

		if (c[i] > 1) {
			answer = answer + (c[i] * (c[i] - 1) / 2);

		}
	}

	cout << answer << "\n";

}
