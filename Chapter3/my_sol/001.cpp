#include <iostream>

using namespace std;

/*
#######################
1번째 줄에는 숫자의 개수 N (1 <= N <= 100) ,
2번째 줄에는 숫자 N개가 공백없이 주어진다.
입력으로 주어진 N개의 숫자의 합을 출력한다.
#######################
*/




int main() {
	int N, num;
	int sum = 0;
	cin >> N >> num;

	for (int i = 0; i < N; i++) {
		sum += num % 10;
		num = num / 10;
	}
	cout << sum;
	return 0;
}