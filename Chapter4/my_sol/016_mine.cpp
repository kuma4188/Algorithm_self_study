#include <iostream>
#include<vector>
using namespace std;

int main() {
    bool changed = false;
    int N;

    cin >> N;
    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N + 1; i++) {
        changed = false;
        for (int j = 1; j <= N - i; j++) {
            if (A[j] > A[j + 1]) {
                changed = true;
                //swap(A[j], A[j + 1]);
            }
        }
        if (changed == false) {
            cout << i << '\n';
            break;
        }
    }



}