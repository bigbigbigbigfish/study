#include<stdio.h>

char*  names[] = { "aaa", "bbb", "ccc", "ddd", "eee", "end"
};

void reverse_string(char * string) {
	if (*names == "end") {
		return 0;
	}
	else {
		reverse_string(string + 1);
		printf("%s\n", *string);
	}
}


int main() {
	reverse_string(names);
	system("pause");
	return 0;
}