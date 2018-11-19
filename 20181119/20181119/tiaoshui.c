#include <stdio.h>  

int main() {
	int a, b, c, d, e;
	for (a = 1; a < 6; ++a) {
		for (b = 1; b < 6; ++b) {
			for (c = 1; c < 6; ++c) {
				for (d = 1; d < 6; ++d) {
					for (e = 1; e < 6; ++e) {
						if (((b == 2 || a == 3) && (b == 2 || e == 4) &&
							(c == 1 || d == 2) && (c == 5 || d == 3) &&
							(e == 4 || a == 1)) == 1) {
							if (((b == 2 && a == 3) || (b == 2 && e == 4) ||
								(c == 1 && d == 2) || (c == 5 && d == 3) ||
								(e == 4 && a == 1)) == 0) {
								while ((a != b) && (a != c) && (a != d) && (a != e) && (b != c) && (b != d) && (b != e) &&
									(c != d) && (c != e) && (d != e)) {
									printf("A=%d B=%d C=%d D=%d E=%d\n", a, b, c, d, e);
									break;
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}