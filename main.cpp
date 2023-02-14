#include <iostream>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);
	const int spaces = 9;
	cout << "         *         \n"; // star at the top of the tree
	for(int i = 1; i <= 9; i++) {
		for(int ls = 0; ls < spaces - (i - 1); ls++) // left spaces
			cout << " ";
		for(int t = 0; t < (2 * i) - 1; t++) // tree body
			cout << "0";
		cout << "\n";
	}
	return 0;
}
