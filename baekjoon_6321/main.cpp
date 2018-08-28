#include <cstdio>

int t;
char n[51];
int main() {
	scanf_s("%d", &t);
	for (int i = 1; i <= t; i++) {
		scanf_s("%s", n, 51);
		printf("String #%d\n", i);
		for (int j = 0; n[j]; j++) {
			if (n[j] == 'Z') printf("A");
			else printf("%c", n[j] + 1);
		}
		printf("\n\n");
	}
	return 0;
}