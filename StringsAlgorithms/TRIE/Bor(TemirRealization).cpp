#include <iostream>
using namespace std;

struct vertex {
	int next[26];
	int cnt;
	bool isWord;
	
	vertex() {
		cnt = 0;
		isWord = false;
	}
};

vertex t[100010];
int sz = 1;

void fill(int v) {
	for (int i = 0; i < 26; i++) {
		t[v].next[i] = -1;
	}
}

void addString(string s) {
	int v = 0;
	for (int i = 0; i < s.size(); i++) {
		int c = s[i] - 'a';
		if (t[v].next[c] == -1) {
			t[v].next[c] = sz;
			fill(sz);
			sz++;
		}
		v = t[v].next[c];
		t[v].cnt++;
	}
	t[v].isWord = true;
}

int checkPrefix(string p) {
	int v = 0;
	for (int i = 0; i < p.size(); i++) {
		int c = p[i] - 'a';
		if (t[v].next[c] == -1) {
			return 0;
		} else {
			v = t[v].next[c];
		}
	}
	return t[v].cnt;
}

int main() {
	fill(0);
	
	return 0;
}
