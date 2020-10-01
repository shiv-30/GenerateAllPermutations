#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void generateAllPermutations(string inp, int low, int high) {
	if(low == high) {
		cout << inp << " ";
		return;
	}
	for(int i = low; i <= high; ++i) {
		swap(inp[low], inp[i]);
		generateAllPermutations(inp, low + 1, high); // recursive call
		swap(inp[low], inp[i]); // backtrack
	}
	return;
}
int main() {
	string inp;
	cin >> inp;
	generateAllPermutations(inp, 0, inp.length()-1);
	return 0;
}