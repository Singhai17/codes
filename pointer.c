#include <stdio.h> 
int main() { 
    int a = 10; 
    int *ptr = &a; 
    int **ptr2 = &ptr;  // Pointer to pointer 
    printf("Value of a: %d\n", **ptr2); 
 

    int n=5;
    int brr[n];
    
    brr[0]=1;brr[1]=2;brr[2]=3;brr[3]=4;brr[4]=5;
    for(int i =0;i<n;i++){
        printf("%d->",brr[i]);
    }
    printf("\n");
    
    brr[5]=6;
    for(int i =0;i<4;i++){
        printf("%d->",&brr[i]);
    }

    return 0; 
} 