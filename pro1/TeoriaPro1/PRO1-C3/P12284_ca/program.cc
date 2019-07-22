#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;

typedef pair<int, string> p;

bool comp(const p& p1, const p& p2) {
	if (p1.first == p2.first) return p1.second < p2.second;
	else return p1.first > p2.first;
}

int main() {
	int n, k;
	while(cin >> n >> k) {
		string s;
		map<string, int> m;
		for (int i = 0; i < n; ++i) { cin >> s; ++m[s]; }
		vector<p> v(m.size());
		map<string, int>::iterator it = m.begin();
		while (it != m.end()) { v.push_back(make_pair(it->second, it->first)); ++it; }
		sort(v.begin(), v.end(), comp);
		for (int i = 0; i < k; ++i) cout << v[i].second << endl;
		cout << "----------" << endl;
	}
}