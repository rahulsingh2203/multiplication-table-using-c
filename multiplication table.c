#include <stdio.h>

int main() {
    int num ;
    printf("Enter the number whose multiplication table you want: \n");
    scanf("%d", &num);
    printf("Multiplication Table of %d are as follows: \n", num);
    for(int i=1; i<11;i++){
        printf("%d X %d = %d \n", num,i,num*i);
    };

    return 0;
}