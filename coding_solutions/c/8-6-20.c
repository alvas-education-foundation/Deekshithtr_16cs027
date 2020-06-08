#include<stdio.h> 
void printArray(int p[], int n) 
{ 
	for (int i = 0; i < n; i++) 
	printf("%d ",p[i]) ;
	printf("\n");
} 

void printAllUniqueParts(int n) 
{ 
	int p[n];
	int k = 0; 
	p[k] = n; 
	while (1) 
	{ 
		printArray(p, k+1); 
		int rem_val = 0; 
		while (k >= 0 && p[k] == 1) 
		{ 
			rem_val += p[k]; 
			k--; 
		} 
		if (k < 0) return; 
		p[k]--; 
		rem_val++; 
		while (rem_val > p[k]) 
		{ 
			p[k+1] = p[k]; 
			rem_val = rem_val - p[k]; 
			k++; 
		} 
		p[k+1] = rem_val; 
		k++; 
	} 
} 
int main() 
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
	printf("All Unique Partitions of %d \n",n); 
	printAllUniqueParts(n); 
	return 0; 
} 

