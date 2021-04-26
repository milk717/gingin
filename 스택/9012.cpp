#include<iostream>
#include <cstdio>
#include<stack>
#include <string.h>
using namespace std;
char str[52];
void VPS() {
	stack<char> s;
	int i, L = strlen(str);
	for (i = 0; i < L; i++) {
		if (str[i] == '(') {
			s.push(str[i]);
		}
		else if (str[i] == ')') {
			if (!s.empty()) s.pop();
			else {
				printf("NO\n");
				return;
			}
		}
	}
	if (s.empty())printf("YES\n");
	else printf("NO\n");
}
int main(void) {
	int t;
	cin >> t;
	while (t--) {
		cin >> str;
		VPS();
	}
	return 0;
}