#include <stdio.h>

int main(int argc, char **argv)
{
    //define string
    char str[100];
    
    while(1)
    {
        //input string
        printf("please input:");
        scanf("%s",str);
        puts(str);
        
        //check
        i=0;
        while(str[i]!='\n')
        {
            i++;
        }
        i=i-1;
        if(str[i]=='q') //quit 命令
        {
                
        }
        else if(str[i]=='b')//2进制
        {
            
        }
        else if(str[i]=='q')//16进制
        {
            return 0;
        }
        else//10进制
        {
            
        }
    }
	
    return 0;
}
