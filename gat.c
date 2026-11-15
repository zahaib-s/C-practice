#include <stdio.h>
int fact(int n){
    int mul=1;
    if(n>=0){
        for (n=n; n>=1;n--){
        mul = mul *n;
        }
    }
        return mul;

}
int main(){
    for(int i=0;i<=8;i++){
        for(int k=7;k>=i;k--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            // printf("(%d,%d)",i,j);
    int n= fact(i);
   // printf("n: %d\n",n);
    //n! /r!(n-r)!
    int r=fact(j);
   // printf("r: %d\n",r);
    int nr = fact(i-j);
  //  printf("n-r: %d\n", nr);
    int nCr = n/(r*(nr));
    printf("%d ",nCr);

        }
printf("\n");

}
}