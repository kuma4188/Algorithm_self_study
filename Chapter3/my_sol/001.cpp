#include <iostream>

using namespace std;

/*
#######################
1��° �ٿ��� ������ ���� N (1 <= N <= 100) ,
2��° �ٿ��� ���� N���� ������� �־�����.
�Է����� �־��� N���� ������ ���� ����Ѵ�.
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