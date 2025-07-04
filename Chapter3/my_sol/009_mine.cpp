#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool check(int A, int C, int G, int T , vector<char> D) {
	int res = 0;
	//cout <<" 이게 : " << D.size() << "\n";
	for (int i = 0; i < A; i++) {
		if ( find(D.begin(), D.end(), 'A') == D.end() == false) { // vector내에 0이 존재하지 않음
			res += 1000;
			D.erase(remove(D.begin(), D.end(), 'A'), D.end());
		}
	}
	for (int i = 0; i < C; i++) {
		if (find(D.begin(), D.end(), 'C') == D.end() == false) { // vector내에 0이 존재하지 않음
			res += 100;
			D.erase(remove(D.begin(), D.end(), 'C'), D.end());
		}
	}
	for (int i = 0; i < G; i++) {
		if (find(D.begin(), D.end(), 'G') == D.end() == false) { // vector내에 0이 존재하지 않음
			res += 10;
			D.erase(remove(D.begin(), D.end(), 'G'), D.end());
		}
	}
	for (int i = 0; i < T; i++) {
		if (find(D.begin(), D.end(), 'T') == D.end() == false) { // vector내에 0이 존재하지 않음
			res += 1;
			D.erase(remove(D.begin(), D.end(), 'T'), D.end());
		}
	}
	if(res == A * 1000 + C * 100 + G * 10 + T) {
		return true;
	}
	else {
		return false;
	}
}


int main() {
	int DNA_len;
	int part_len;
	string s;
	int A, C, G, T;

	cin >> DNA_len >> part_len;
	cin >> s;
	cin >> A >> C >> G >> T;
	vector<char> DNA(s.begin(), s.end());
	int count = 0;
	for (int i = 0; i < DNA_len - part_len + 1; i++) {
		vector<char> D(DNA.begin() + i, DNA.begin() + i + part_len);
		if (check(A, C, G, T, D)) {
			count++;
		}
	}

	cout << count << "\n";
}