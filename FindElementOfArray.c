#include<stdio.h>
int main(){
    //Find any elemeng of the array 
    int n,a[10];
    printf("Enter the number of elements of an array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int item,j,index;
    printf("Enter an item : ");
    scanf("%d",&item);
    for(j=0;j<n;j++){
        if(a[j]==item){
            printf("%d item found at position %d\n",item,j+1);
            index=j;
        }
    }
    if(index == -1){
        printf("Item not present in array\n");
    }
    return 0;
}
