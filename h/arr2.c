#include <stdio.h>
int main(){
    int n,i,as=1,ds=1;
    printf("how many digits: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter digits: ");
    for(int i=0;i<n; i++){
        scanf("%d",&arr[i]);
    }
// 18 10 8 7 3 2
if(n==1){
    printf("sorted\n");
    return 0;
}

for(i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        as=0;
    }
    if(arr[i]<arr[i+1]){
        ds=0;
    }
}
if(as || ds){
        printf("sorted\n");
    } else {
        printf("not sorted\n");
    }
}