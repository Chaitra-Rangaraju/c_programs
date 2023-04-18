/*
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include <stdio.h>

void triangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

}

void diamond(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=(i*2)-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int j=1;j<=(2*n)-(2*i)-1;j++){
            printf("*");
        }
        printf("\n");
    }
}

void dia(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int j=1;j<=n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n,number;
    printf("1.triangle\n2.diamond\n3.perfect diamond\n");
    scanf("%d",&n);
    printf("Enter number: ");
    scanf("%d",&number);
    
    switch(n){
        case 1:triangle(number);
            break;
        case 2:diamond(number);
            break;
        case 3:dia(number);
            break;
    }
    return 0;
}
