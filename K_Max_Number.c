#include<stdio.h>
#include<limits.h>
int maximum_number(int ar[],int n, int i){
    if(i==n){
        return INT_MIN;
    }
    int max=maximum_number(ar,n, i+1);
    if(ar[i]>max){
        return ar[i];

    }
    else{
        return max;
    }
}
int main(){
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
  }
  int result=maximum_number(a,n,0);
  printf("%d", result);

  return 0;
}
