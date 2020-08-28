

#include <stdio.h>
#include <stdlib.h>
#include "intList.h"

int count(int,int[],int,int);
main() {
int key;
int num[] = {1,2,3,4,1,3,4,1,4,5,1};
size_t n = sizeof(num) / sizeof(int);
printf("Enter integer you want to find: ");
scanf("%d",&key);
int oc = 0;
int cnt= count(key,num,n,oc);
printf("The count of integer %d in array is: %d",key,cnt);
}

int count(int num, int arr[], int length, int occur) {
       if (*arr == num) ++occur;  
    if (length == 1)
        return occur;
    else    
        count(num, arr+1, length-1, occur);
}
