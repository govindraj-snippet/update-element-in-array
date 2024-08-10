# include <stdio.h>

int main(){
    int arr[10];
    printf("enter the elements of array having size 10\n");

    for(int i = 0 ; i < 10 ; i ++ ){
        scanf("%d",arr[i]);
    }

    int ind ; 
    printf("enter the which index that you want to update \n");
    scanf("%d" , &ind );
     int val ;
    printf("enter the value that you want to update\n ");
    scanf("%d" ,&val);

    arr[ind] = val ; 

    printf("final array \n");
    for(int i = 0 ; i < 10 ; i ++ ){
        printf("%d" ,arr[i]);
    }

    return 0 ;
    
}