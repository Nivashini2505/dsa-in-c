#include<stdio.h>

int findmissingnumber(int arr[],int n){
    int xor1=0;
    int xor2=0;
    for(int i=1;i<=n;i++){
        xor1=xor1^i;
    }
    for(int i=0;i<n-1;i++){
        xor2=xor2^arr[i];
    }
    return (xor1^xor2);
}
int main(){
    int arr[]={1,2,3,5};
    int n=5;
    int missingnumber=findmissingnumber(arr,n);
    printf("the missing number is: %d",missingnumber);
    return 0;
}