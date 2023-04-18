
#include <stdio.h>

int main()
{
    int n,arr[100],res[100];
    
    printf("Enter total numbers");
    scanf("%d",&n);
    printf("Enter:\n");
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }
    
    res[0]=arr[0];
    int k=1,flag=0;
    for(int i=1;i<n;i++){
        flag=0;
        for(int j=0;j<n;j++){
            if(res[j]==arr[i]){
                flag=1;
            }
        }
        if(flag==0){
            res[k]=arr[i];
            k++;
        }
    }
    
    printf("\n");
    for(int i=0;i<k;i++){
        printf("%d - ",res[i]);
    }
    printf("\n%d",k--);

    return 0;
}
