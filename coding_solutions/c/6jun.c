#include <stdio.h> 
void printArray(int arr[], int size); 
int gcd(int a, int b); 
void leftRotate(int arr[], int d, int n) 
{ 
	int i, j, k, temp; 
	d = d % n; 
	int g_c_d = gcd(d, n); 
	for (i = 0; i < g_c_d; i++) { 
		temp = arr[i]; 
		j = i; 
		while (1) { 
			k = j + d; 
			if (k >= n) 
				k = k - n; 
			if (k == i) 
				break; 
			arr[j] = arr[k]; 
			j = k; 
		} 
		arr[j] = temp; 
	} 
} 
void printArray(int arr[], int n) 
{ 
	int i; 
	printf("After rotating from 4th position the array is :\n");
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
} 
int gcd(int a, int b) 
{ 
	if (b == 0) 
		return a; 
	else
		return gcd(b, a % b); 
} 
int main() 
{ 
	int arr[] = {0 ,3 ,6 ,9 ,12 ,14 ,18 ,20 ,22 ,25 ,27}; 
	int n;
	printf("Enter the Position N from where you want to rotate : ");
	scanf("%d",&n);
	leftRotate(arr, n, 11); 
	printArray(arr, 11); 
	getchar(); 
	return 0; 
} 

