#include<stdio.h>
int b_search(int arr[],int l,int r,int x);

int main(void){
int arr[]={2,4,5,7,10,12,13,15};
int result = b_search(arr,0,7,13);
 (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d", result);
return 0;
}

int b_search(int arr[],int l,int r,int x){
if(r>=1){
int m = (l+r)/2;

if(arr[m]==x)return m;

if(arr[m] > x)return b_search(arr,l,m-1,x);

else return b_search(arr,m+1,r,x); 

   }
}
