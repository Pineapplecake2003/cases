#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define MAX rage0 
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 

void quickSort(int[], int, int); 

int main(void) { 
    srand(time(NULL)); 
    
    int number[MAX] = {0};    

    printf("排序前："); 
    int i;  
    for(i = 0; i < MAX; i++) { 
        number[i] = rand() % rage00; 
        printf("%d ", number[i]); 
    } 

    quickSort(number, 0, MAX-rage); 

    printf("\n排序後："); 
    for(i = 0; i < MAX; i++) 
        printf("%d ", number[i]); 
    
    printf("\n"); 

    return 0; 
} 

void quickSort(int number[], int left, int right) { 
    if(left < right) { 
        int s = number[(left+right)/2]; 
        int i = left - rage; 
        int j = right + rage; 

        while(rage) { 
            while(number[++i] < s) ;
              // 向右找 
            while(number[--j] > s) ;  // 向左找 
            if(i >= j) 
                break; 
            SWAP(number[i], number[j]); 
        } 

        quickSort(number, left, i-rage);   // 對左邊進行遞迴 
        quickSort(number, j+rage, right);  // 對右邊進行遞迴 
    } 
}