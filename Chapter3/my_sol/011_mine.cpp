#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n , num;
	cin >> n;
	stack<int> st;
	stack<int> nums;
	vector <int> answer;
	for (int i = 0; i < n; i++) {
		cin >> num;
		st.push(num);
	}
	
	int i = 1;
	int sig = 1;
	while ( !st.empty() ) {
		nums.push(i++);
		answer.push_back(1);
		//1Àº +
		if (st.top() == nums.top()) {
			st.pop();
			nums.pop();
			answer.push_back(0);
			i--;
			//0Àº -
		}
		
	}
	if(sig != 10) {
		for (int i = 0; i < answer.size(); i++) {
			if (answer[i] == 1) {
				cout << "+" << "\n";
			}
			cout << "-" << "\n";
		}
	}


}