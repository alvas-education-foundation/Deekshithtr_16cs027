#include <stdio.h> 
void printBoundary(int a[][100], int m, int n) 
{ 
    int sum=0;
	for (int i = 0; i < m; i++) { 
		for (int j = 0; j < n; j++) { 
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
				printf("%d",a[i][j]); 
				sum=sum+a[i][j];
			}
			else
			    printf(" ");
					printf(" "); 
		} 
	printf("\n");
	} 
	printf("sum : %d",sum);
} 

// Driver code 
int main() 
{ 
	int a[100][100],m,n;
	printf("m : ");
	scanf("%d",&m);
	printf("n : ");
	scanf("%d",&n);
	printf("enter array : ");
	for(int j=0;j<n;j++){
	   for(int i=0;i<m;i++){
	        	scanf("%d",&a[i][j]);
	    } 
	}
	printBoundary(a, m, n); 
	return 0; 
} 

