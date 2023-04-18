
#include <stdio.h>
char stack[100],top=-1;

void push(char input){
    top++;
    stack[top]=input;
}

void pop(){
    top--;
}

int main()
{
    char input[100];
    scanf("%s",input);
    
    int i=0,flag=0;
    
    while(input[i]!='\0'){
        if(input[i]=='(' || input[i]=='[' || input[i]=='{' || input[i]=='<'){
            push(input[i]);
        }
        else if(input[i]==')' && stack[top]=='('){
            pop();
        }
        else if(input[i]==']' && stack[top]=='['){
            pop();
        }
        else if(input[i]=='}' && stack[top]=='{'){
            pop();
        }
        else if(input[i]=='>' && stack[top]=='<'){
            pop();
        }
        else{
            flag=1;
            break;
        }
        i++;
    }
    
    if(flag==0){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }

    return 0;
}
