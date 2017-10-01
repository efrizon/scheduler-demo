#include <stdio.h>

int main() {
	int a[5], n;

	scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &n);

	for (int i=1; i<=n; i++) {
        int flag = 1;
		for (int j=0; j<5; j++) {
			if (i % a[j] == 0) printf ("%d", j), flag = 0;
		}
		if (flag) printf ("-");
		printf ("\n");
	}
	return 0;
}
