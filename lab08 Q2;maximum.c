#include <stdio.h>
int main(){
	int i,j,max=0;
	int matrix[3][3]={
	{12,45,32},
	{2,13,45},
	{56,72,45}
	};
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if (matrix[i][j]>max){
				max=matrix[i][j];
			}
			
		}
	}
	printf("%d",max);
	return 0;
}
