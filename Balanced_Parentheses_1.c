#include<stdio.h>  
int main()  
{  
    char expression[50];  
    int x=0, i=0; 
    scanf("%s", expression);  
    while(expression[i]!= NULL)  
    {  
       if(expression[i]=='(')  
        {  
            x++;    // incrementing 'x' variable   
        }  
        else if(expression[i]==')')  
        {  
            x--;   // decrementing 'x' variable  
            if(x<0)  
            break;  
        }  
        i++;       // incrementing 'i' variable.  
    }  
    if(x==0)  
    {  
        printf("True");  
    }  
      
    else  
    {  
        printf("False");  
    }  
    return 0;  
}  