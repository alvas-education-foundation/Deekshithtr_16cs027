#include <stdio.h> 
int getInvCount(int arr[], int n) 
{ 
    int inv_count = 0; 
    for (int i = 0; i < n - 1; i++) 
        for (int j = i + 1; j < n; j++) 
            if (arr[i] > arr[j]) 
                inv_count++; 
  
    return inv_count; 
} 
int main() 
{ 
    int arr[100],n,t;
    printf("enter the test cases :");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
       printf("enter n value:");
       scanf("%d",&n);
       printf("enter array value");
       for(int j=0;j<n;j++){
           scanf("%d",&arr[j]);
       }
       printf(" Number of inversions are %d \n", getInvCount(arr, n)); 
    }
    
    return 0; 
} 
