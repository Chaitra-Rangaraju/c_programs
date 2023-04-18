
#include <stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    
    int i=0,flag=0;
    if(strlen(str1) != strlen(str2) ){
        flag=1;
    }
    while(str1[i]!='\0' && str2[i]!='\0'){
        if(str1[i]!=str2[i]){
            flag=1;
            break;
        }
        i++;
    }
    
    if(flag==0){
        printf("Equal");
    }else if(flag==1){
        printf("Not equal");
    }
    return 0;
}

