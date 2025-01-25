#include<stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    int j=0;
    int arr[n];
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int max = 0,sum;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>max)
        {
            max=sum;
            arr1[j]=arr[i];
            j++;
        } 
        
        if(sum<1)
        {
            sum=0;
            j=0;
            for(int k=0;k<n;k++){
                arr2[k]=arr1[k];
                arr1[k]==0;
        }
        
    }
    }
    
    printf("%d\n",max);
    
    for(int l=0;l<=n;l++){
        if(arr2[l]!=0){
            printf("%d ",arr2[l]);
        }
    }

}
