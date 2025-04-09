#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, question;
	cin >> N >> question;
	//int sum[1024][1024] = {};
	vector < vector <int> > sum(1024, vector <int>(1024, 0));
	
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			int tmp;
			cin >> tmp;
			sum[i][j] = sum[i ][j - 1] + tmp;
			if (j == 4) {
				sum[i + 1][0] = sum[i][4];
			}
		}
	}

	for (int i = 1; i <= N+1; i++) {
		sum[i][0] = 0;
	}

	for (int i = 0; i < question; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << sum[x2][y2] - sum[x1][y1 - 1] << "\n";
	}
}


/*
결국엔 실패했다.
(2,2) 부터 (3,4)의 합이라고 해서
(2,2) + (2,3) + (2,4)+ (3,1)+(3,2)+(3,3)+(3,4) 
인줄 알았으나 ....
(2,2) + (2,3) + (2,4)+ (3,2)+(3,3)+(3,4)
이었다. 그러니까 정확하게 사각형모양을 만들어야 했다.
*/