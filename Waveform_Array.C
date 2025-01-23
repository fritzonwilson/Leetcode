#include<stdio.h>
int main(){
    int n,m;
    int arr[50],arr1[50],arr2[50];
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        
        scanf("%d",&arr[i]); 
        
    }
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            
        if(arr[i]>arr[j]){
            
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            
        }
    }
    }
    
    if(n%2!=0){
        
        m=(n/2)+1;
        
    }else{
        
        m=n/2;
        
    }


    for(int i=0;i<m;i++){
        arr1[i]=arr[i];
    }
    
    
    for(int i=m;i<n;i++){
        arr2[i-(m)]=arr[i];
    }

    for(int i=0;i<m;i++){
        
        printf("%d ",arr1[i]);
        
        if(arr2[i]!=0){
            
            printf("%d ",arr2[i]);
        }
            
        
        }
}
