#include<stdio.h>
int main(){
    int n,a[10],min,j,minpos=0; 
    printf("Enter the number of elements of an array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(j=1;j<n;j++){
        if(a[j]<min){
            min=a[j];
            minpos=j;
        }
    }
    printf("The minmum value in this array is %d & it's position %d\n",min,minpos+1);
  return 0;
}
