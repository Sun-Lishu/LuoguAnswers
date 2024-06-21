#include<bits/stdc++.h>
using namespace std;
int x;
int y;
int parting(int a, int b) {
	x = a + 1;
	y = b - 1;
	int z = 0;
	for (int i = x; i <= y; i++) {
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
			z += i;
		}
	}
	return z;
}
int main() {
	int a;
	int b;
	cin >> a >> b;
	cout << parting(a, b) << endl;
	return 0;
}
