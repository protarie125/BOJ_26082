#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	cout << 3 * c * b / a;

	return 0;
}