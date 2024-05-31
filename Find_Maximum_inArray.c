#include<stdio.h>
int main(){
    int n,a[10],j,max,maxpos=0; 
    printf("Enter the number of elements of an array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(j=1;j<n;j++){
        if (a[j]>max){
            max=a[j];
            maxpos=j;
        }   
    }
    printf("The maximum value in this array is %d & it's position %d\n",max,maxpos+1);
}
