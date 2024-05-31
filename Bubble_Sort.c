#include<stdio.h>
int main(){
    int n,a[10],index,t;
    printf("Enter the number of elements of an array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-(i+1);j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("After ascending sort : ");
    for (int i = 0; i < n; i++){
        printf("%d\t",a[i]);
    }
  return 0;
}
