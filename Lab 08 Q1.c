#include <stdio.h>
int main() {
	int i,j,input;
	printf("How many tables? ");
	scanf("%d", &input);
	for (i=1;i<=input;i++){
		printf("%d: \t",i);
		for (j=1;j<6;j++){
			printf("%4d",i*j);
		}
		printf("\n");
	}
}
