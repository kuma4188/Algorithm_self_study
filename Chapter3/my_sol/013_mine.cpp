#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	queue <int> que;

	for (int i = 1; i <= N; i++) {
		que.push(i);
	}
	while (que.size() != 1) {
		que.pop();
		que.push(que.front());
		que.pop();
	}
	cout << que.back();

}