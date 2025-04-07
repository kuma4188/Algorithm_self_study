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
		//새로운 시각이다. 아스키 코드를 이용해서 숫자를 빼는게 아닌 다른 방식이다.
		//숫자 0이라는 것을 문자로 했을때를 기준으로 얼만큼 더 차이나는지를 숫자로 표현한다.
		// 애초에 받은 Numbers을 숫자가 아닌 문자열로 인식한다.
	}
	cout << sum;

	return 0;
}