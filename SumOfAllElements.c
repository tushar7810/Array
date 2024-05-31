#include<stdio.h>
int main(){
    int a[8],n,sum=0; 
    float avg;
    printf("Enter the number of elements of an array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("The sum of elements of an array is : %d\n",sum);
    return 0;
}
