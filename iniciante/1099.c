#include <stdio.h>

int main() {
	int n;
	if (scanf("%d", &n) != 1) return 0;

	for (int tc = 0; tc < n; tc++) {
		int x, y;
		if (scanf("%d %d", &x, &y) != 2) break;

		int a = x < y ? x : y;
		int b = x < y ? y : x;

		int soma = 0;
		int start = a + 1;
		if (start % 2 == 0) start++;

		for (int v = start; v < b; v += 2) {
			soma += v;
		}

		printf("%d\n", soma);
	}

    return 0;
}

