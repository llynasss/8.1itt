#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>

using namespace std;

char* change(char* s) {
	int l = 0;

	char* buf = new char(2 * strlen(s) - 1);

	for (int i = 0; s[i] != '\0'; i++) {
		if ((s[i] == 'n' && s[i + 1] == 'o') || (s[i] == 'o' && s[i + 1] == 'n')) {
			buf[l] = '*';
			buf[l + 1] = '*';
			buf[l + 2] = '*';
			l += 3;
			i++;
		}
		else {
			buf[l] = s[i];
			l++;
		}
	}
	buf[l] = '\0';
	return buf;
}

bool isTrue(char* s) {
	for (int i = 0; s[i] != '\0'; i++) {
		if ((s[i] == 'n' && s[i + 1] == 'o') || (s[i] == 'o' && s[i + 1] == 'n')) {
			return true;
		}
	}
	return false;
}



void main() {
	char s[101];
	bool p;
	char* kk;

	cout << "Enter string: "; cin.getline(s, 100);

	p = isTrue(s);

	kk = change(s);

	cout << "line: ";
	for (int i = 0; kk[i] != '\0'; i++) {
		cout << kk[i];
	}
	cout << endl;

	cout << p << endl;
}
