#include <iostream>

using namespace std;




int main() {
	int N = 0;
	string Numbers;
	cin >> N;
	cin >> Numbers;

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += Numbers[i] - '0';
		//���ο� �ð��̴�. �ƽ�Ű �ڵ带 �̿��ؼ� ���ڸ� ���°� �ƴ� �ٸ� ����̴�.
		//���� 0�̶�� ���� ���ڷ� �������� �������� ��ŭ �� ���̳������� ���ڷ� ǥ���Ѵ�.
		// ���ʿ� ���� Numbers�� ���ڰ� �ƴ� ���ڿ��� �ν��Ѵ�.
	}
	cout << sum;

	return 0;
}