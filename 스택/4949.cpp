#include<iostream>
#include<stack>
#include <string.h>
using namespace std;
char str[101];
void VPS() {
	stack<char> s;
	int i, L = strlen(str);
	for (i = 0; i < L; i++) {
		if (str[i] == '('||str[i] == '[') {
			s.push(str[i]);
		}
		else if (str[i] == ')') {
			if (s.empty()) {
				printf("no\n");
				return;
			}
			if(s.top() == '(')
				s.pop();
			else {
				printf("no\n");
				return;
			}
		}
		else if (str[i] == ']') {
			if (s.empty()) {
				printf("no\n");
				return;
			}
			if (s.top() == '[')
				s.pop();
			else {
				printf("no\n");
				return;
			}
		}
	}
	if (s.empty())printf("yes\n");
	else printf("no\n");
}
int main(void) {
	while (true) {
		cin.getline(str,101);
		if (str[0] == '.') break;
		VPS();
	}
	return 0;
}