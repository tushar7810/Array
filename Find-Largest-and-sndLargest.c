#include<stdio.h>
int main(){
    int n,a[10];
    printf("Enter the number of elements of an array : ");
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int max1,max2;
    if(a[0] > a[1]){
        max = a[0];
        max2 = a[1];
    }else{
        max1 = a[1];
        max2 = a[0];
    }
    for(int i = 2 ; i < n ; i++){
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] < max1){
            max2 = a[i];
        }
    }
    printf("The largest & 2nd largest value is %d & %d\n",max1,max2);

    return 0;
}
