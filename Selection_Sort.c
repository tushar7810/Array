#include<stdio.h>
int main(){
    int n,a[10],index,t;
    printf("Enter the number of elements of an array :  ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n-2;i++){
        index=i;
        for( int j=i+1;j<n;j++){
           if(a[index]>a[j]){
            index=j;
           }
        }
        t=a[i];
        a[i]=a[index];
        a[index]=t;
    }
    //
    printf("After ascending sort : ");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
