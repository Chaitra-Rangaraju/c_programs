
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter: ");
    scanf("%[^\n]",str);
    printf("%s",str);
    
    int count=0,i=0;
    if(str[i]!='\0'){
        count=1;
    }
    while(str[i]!='\0'){
        if(str[i+1]!=' ' && str[i+1]!= '\0' && str[i+1]!='\t' && (str[i]==' ' || str[i]=='\t')){
            count++;
        }
        i++;
    }
    printf("\n%d words",count);

    return 0;
}
