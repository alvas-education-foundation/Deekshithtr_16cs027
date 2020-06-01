#include<stdio.h> 

void printLeaders(int arr[], int size) 
{ 
    printf("leaders : ");
	for (int i = 0; i < size; i++) 
	{ 
		int j; 
		for (j = i+1; j < size; j++) 
		{ 
			if (arr[i] <= arr[j]) 
				break; 
		}	 
		if (j == size) 
		
			printf("%d\t",arr[i]); 
} 
} 

int main() 
{ 
	int arr[50],t,n;
	printf("test cases");
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	printf("number of elements : ");
	scanf("%d",&n);
	printf("enter the array ");
	for(int j=0;j<n;j++)
	{
	    scanf("%d",&arr[j]);
	}
	printLeaders(arr, n);
		printf("\n");
	}
	; 
	return 0; 

} 

