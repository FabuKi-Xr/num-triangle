#include<stdio.h>
int main() {
	int num, i, j, k;
	printf("Enter number : ");
	scanf_s("%d", &num);
	for (i = 1;i <= num;i++) {
		for (j = 1;j <= i;j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}