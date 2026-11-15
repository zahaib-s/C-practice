#include <stdio.h>
int main(){
    int n,i,l,l2;
    printf("how many digits: ");
    scanf("%d",&n);
    if(n<2){
        printf("NO\n");
        return 0;
    }
    int arr[n];
    printf("Enter digits: ");
    for(int i=0;i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("array: ");
    for(i=0;i<n; i++){
        printf("%d ",arr[i]);
    }

    //12 45 26 183 72
       if(arr[0]>arr[1]){
        l=arr[0];
        l2=arr[1];
       }
       else{
        l=arr[1];
        l2=arr[0];
       }
    //l= 45
    //l2=12
    //10 50 30 40 80
    for(i=2;i<n;i++){
        if(arr[i]>l){
            l2=l;
            l=arr[i];
        }
        if(arr[i]>l2&&arr[i]<l){
            l2=arr[i];
        }
        
        printf("\n");
    }
    
    
    printf("\n");
    printf("l2: %d\n",l2);
}
