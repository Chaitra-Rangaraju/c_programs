
#include <stdio.h>
#include<string.h>

int roman(char s[]){
    int value=0,i=0,flag=0;
    while(s[i]!='\0'){
        if(s[i]=='I'){
            value=value+1;
            flag=1;
        }
        if(s[i]=='V'){
            if(flag==1){
                value=value+4-1;
            }
            else{
                value=value+5;
            }
            flag=0;
        }
        if(s[i]=='X'){
            if(flag==1){
                value=value+9-1;
            }
            else{
                value=value+10;
            }
            flag=2;
        }
        if(s[i]=='L'){
            if(flag==2){
                value=value+40-10;
            }
            else{
                value=value+50;
            }
            flag=0;
        }
        if(s[i]=='C'){
            if(flag==2){
                value=value+90-10;
            }
            else{
                value=value+100;
            }
            flag=3;
        }
        if(s[i]=='D'){
            if(flag==3){
                value=value+400-100;
                flag=0;
            }
            else{
                value=value+500;
            }
            flag=0;
        }
        if(s[i]=='M'){
            if(flag==3){
                value=value+900-100;
            }
            else{
                value=value+1000;
            }
            flag=0;
        }
        
        i++;
    }
    printf("%d\n",value);
    return value;
}

int main()
{
    int i=0,num=0;
    char string[100];
    scanf("%s",string);
    
    num = roman(string);
    
    printf("The numbe is %d",num);
    
    return 0;
}
