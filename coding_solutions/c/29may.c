#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a range : ");
    scanf("%d", &num);
   
printf("Armstrong numbers are : ");
    for(int i=0;i<=num;i++){
         originalNum = i;
        while(originalNum!=0){
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;

       originalNum /= 10;
        }
        if(result==i){
            printf("%d\t", i);
            
        }
        result=0;
    }
    return 0;
}
