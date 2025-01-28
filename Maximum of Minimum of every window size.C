#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  int max=-1000000;
  int min=100000;
  for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
  }
  for(int i=1;i<n+1;i++){
      int p=i;
      int r=0;
      for(int j=0;j<((n-i)+1);j++){
          
          for(int k=r;k<p;k++){
              if(arr[k]<min){
          min=arr[k];
          
          
      }
  }
  p++;
  r++;
  if(min>max){
      max=min;
  }
  min=10000;
  
  
  }
  printf("%d ",max);
  max=-1000000;
  
  }
}
