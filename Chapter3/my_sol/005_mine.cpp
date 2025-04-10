#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int combi(int n) {
	return (n * (n - 1))/2;
}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;

	vector <int> sum(n+1, 0);

	for (int i = 1; i <= n; i++) {
		int tmp;
		cin >> tmp;
		sum[i] = sum[i - 1] + tmp;
		sum[i] %= 3;
	}
	int res = 0;

	for (int i = 0; i < m; i++) {
		res += combi(count(sum.begin()+1, sum.end(), i));
	}
	res  += count(sum.begin()+1, sum.end(), 0);
	cout << res << "\n";

}