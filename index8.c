#include<stdio.h>
int main() {
    int arr[100],n,i,key,found =0;
    printf("enter number of elements:");
    sacnf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
printf("enter elements to search:");
scanf("%d",&key);
for(i=0;i<n;i++){
    if(arr[i]==key){
        printf("element found at position%d",i+1);
        found = 1;
        break;
    }
}if(found==0)
printf("element not found");
return 0;
}
