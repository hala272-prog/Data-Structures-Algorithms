#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Required for bool, true, and false

int main(){

int array[10];
int i , j;
int n , target , index1 , index2 ;
int find = 0 ;

// enter  the element of the array and the target 
printf("enter the number of element in the table ");
scanf("%d",&n);
printf("enter the elements of the table :\n");
for ( i = 0;i<n ; i++){
    scanf("%d",&array[i]);
}
printf("enter the target ");
scanf("%d",&target);

// comptuting 
for (i=0;i<n;i++){
    for (j = i+1 ; j<n ;j++){
        if (array[i] + array[j] == target){
            index1 = i;
            index2 = j;
            find = 1 ;
        }
        
    }
}

//output
printf("the array is : ");
for (int i = 0;i<n ; i++){
printf(" %d\t ",array[i]);
}
if (find == 1){
    printf("the target is : %d\n",target);
    printf("Indices of the two numbers whose sum equal to target value: %d are %d and %d\n",target,index1,index2);
}else{
    printf("there no two values in the array eqaule to %d\n",target);
}
return 0;
}