
#include <stdio.h>

int main()
{
    int n;
    int arr[100][100];
    printf("Enter: ");
    scanf("%d",&n);
    
    for(int f=1;f<=n;f++){
        arr[f][1]=1;
        arr[f][f]=1;
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<i;j++){
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("   ");
        }

        for(int j=1;j<=i;j++){
            printf("  %d   ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
