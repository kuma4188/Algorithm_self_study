- ## [Notion](https://spotted-error-71e.notion.site/Chapter4_-2349d55aece680f38e36e3e60ea8c16b)


- ### [Problem15](#problem15-1)
- ### [Problem16](#problem16-1)
- ### [Problem17](#problem17-1)



#  #Problem15
[백준 2750번](https://www.acmicpc.net/problem/2750) <br>

### 문제
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

### 입력
첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수가 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.

### 출력
첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.



#  #Problem16
[백준 1377번](https://www.acmicpc.net/problem/1377) <br>

### 문제
```c++
bool changed = false;
for (int i=1; i<=N+1; i++) {
    changed = false;
    for (int j=1; j<=N-i; j++) {
        if (A[j] > A[j+1]) {
            changed = true;
            swap(A[j], A[j+1]);
        }
    }
    if (changed == false) {
        cout << i << '\n';
        break;
    }
}
```

위 소스에서 N은 배열의 크기이고, A는 정렬해야 하는 배열이다. 배열은 A[1]부터 사용한다.<br>

위와 같은 소스를 실행시켰을 때, 어떤 값이 출력되는지 구해보자.

### 입력
첫째 줄에 N이 주어진다. N은 500,000보다 작거나 같은 자연수이다. 둘째 줄부터 N개의 줄에 A[1]부터 A[N]까지 하나씩 주어진다. A에 들어있는 수는 1,000,000보다 작거나 같은 자연수 또는 0이다.

### 출력
정답을 출력한다.


#  #Problem17
[백준 1427번](https://www.acmicpc.net/problem/1427) <br>

### 문제
배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

### 입력
첫째 줄에 정렬하려고 하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.

### 출력
첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.