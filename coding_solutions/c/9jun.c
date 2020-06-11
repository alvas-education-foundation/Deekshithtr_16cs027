#include <stdio.h> 


int n;

void rotateMatrix(int matrix[][n], int k) { 

int temp[n]; 


k = k % n; 

for (int i = 0; i < n; i++) { 


	for (int t = 0; t < n - k; t++) 
	temp[t] = matrix[i][t]; 


	for (int j = n - k; j < n; j++) 
	matrix[i][j - n + k] = matrix[i][j]; 

	for (int j = k; j < n; j++) 
	matrix[i][j] = temp[j - k]; 
} 
} 

void displayMatrix(int matrix[][n]) { 
for (int i = 0; i < n; i++) { 
	for (int j = 0; j < n; j++) 
	printf ("%d\t",matrix[i][j]); 
	printf("\n");
} 
} 

int main() { 
int matrix[10][10];
int k;
printf("n value : ");
scanf("%d",&n);

printf("k value : ");
scanf("%d",&k);

printf("enter the values\n");
for (int i=0;i<k;i++){
    for(int j=0;j<k;j++){
        scanf("%d",&matrix[i][j]);
    }
}

rotateMatrix(matrix, k); 

displayMatrix(matrix); 

return 0; 
} 

