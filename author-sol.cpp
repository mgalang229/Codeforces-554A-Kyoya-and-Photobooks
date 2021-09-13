#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string given;
	cin >> given;
	// insert letters from 'a' to 'z' in the given string (in all positions)
	// use a set to filter out the duplicates
	set<string> s;
	for (int i = 0; i <= (int) given.size(); i++) {
		for (char c = 'a'; c <= 'z'; c++) {
			// 'given.substr(0, i)' -> beginning characters (if there are)
			// 'c' -> the character that we need to insert
			// 'given.substr(i)' -> remaining characters (if there are)
			s.insert(given.substr(0, i) + c + given.substr(i));
		}
	}
	cout << (int) s.size() << '\n';
	return 0;
}
