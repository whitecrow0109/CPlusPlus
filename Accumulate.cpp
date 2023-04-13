#include <bits/stdc++.h>

using namespace std;

/* 	std::accumulate
		template<class InputIterator, class T>
			T accumulate(InputIterator first, InputIterator last, T init)
*/

int main() {
	int x[105];
	for (int i = 1; i <= 100; i ++) x[i] = i;
	int sum = accumulate(x + 1, x + 101, 0);
	cout << sum << endl;
}
