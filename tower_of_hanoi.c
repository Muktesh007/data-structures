#include<stdio.h>
void towerOfHanoi(int n, char A, char B, char C) {

	if (n == 1) {

		printf("\n Move disk 1 from rod %c to rod %c", A, C);
		return;

	}
	towerOfHanoi(n-1, A, B, C);
	printf("\n Move disk %d from rod %c to rod %c", n, A, C);
	towerOfHanoi(n-1, B, C, A);
}
int main() {
	int n = 4;
	towerOfHanoi(n, 'A', 'C', 'B');
	return 0;
}

