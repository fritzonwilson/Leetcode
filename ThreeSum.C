#include <stdio.h>

int main()
{
    int n;
    int arr[50];
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    printf("%d %d %d\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }

    
}
