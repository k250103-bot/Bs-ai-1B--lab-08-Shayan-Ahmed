#include <stdio.h>
int main(){
	int i,j;
	int matrix[3][3]={
	{12,45,32},
	{2,13,45},
	{56,72,45}
	};
	int matrix2[3][3]={
	{15,98,43},
	{65,34,64},
	{76,54,21}
};
	

	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%4d ",matrix[i][j]+matrix2[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
