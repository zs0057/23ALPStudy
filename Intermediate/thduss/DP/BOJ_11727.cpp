#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);

    int d[10005];
    int mod = 10007, n;

    cin >> n;
    
    // 초기값 정하기
    d[1] = 1;
    d[2] = 3;
    for(int i=3; i <= n; i++) d[i] = (d[i-1] + d[i-2] * 2) % mod;

    cout << d[n];
}
