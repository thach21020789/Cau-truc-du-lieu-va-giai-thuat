#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n; cin >> n;
	vector <string> s1;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		s1.push_back(s);
	}

	int q; cin >> q;
	vector <string> s2;
	for (int i = 0; i < q; i++) {
		string s; cin >> s;
		s2.push_back(s);
	}

	vector <int> result;
	for (int i = 0; i < s2.size(); i++) {
		int count = 0;
		for (int j = 0; j < s1.size(); j++) {
			if (s2[i] == s1[j]) {
				count++;
			}
		}
		result.push_back(count);
	}
	for (int i = 0; i < result.size(); i++) cout << result[i] << endl;
	return 0;
}