#include <stdio.h>
#include <stdlib.h>
#include "str.h"

// print the num in binary format
void putBin(int num)
{
    int temp=num,i=0,j=0,compen;
    char str[100];
    printf(" 2:    ");
    while(temp!=0)
    {
       str[i]=temp%2+'0';
       temp=temp/2;
       i++;
    }
    
    //0 compensate,to get a 0011,0010 efect
    compen=i%4;
    if(compen!=0)
    {
        for(j=0;j<(4-compen);j++)
        {
            str[i]='0';
            i++;
        }
    }
    
    //output
    for(j=i-1;j>=0;j--)
    {
         printf("%c",str[j]);
         if((j<i-1)&&((j%4)==0)&&(j>0))
         {
            printf(",");
         }
    }
    printf("\n");
}


// print the num in multiple formats
void putNum(int num)
{
	putBin(num);
	printf("10:    %d\n",num);//output
	printf("16:    %x\n",num);//output
}

//get input string length
Uint8 getStrLength(char str[])
{
	Uint8 i=0;
    while(str[i]!='\0') //get the length
    {
        i++;
    }
	return i;
}

//transform the string to decimal num
int strDec2num(char str[])
{
    Uint8 i,length;
    int num=0;
	length=getStrLength(str);
    for(i=0;i<length-1;i++)
    {
		num=10*num+(str[i]-'0');
    }
    return num;
} 

 //transform the string to binary num
int strBin2num(char str[])
{
    Uint8 i,length;
    int num=0;
	length=getStrLength(str);
    for(i=0;i<length-1;i++)
    {
		num=2*num+(str[i]-'0');
    }
    return num;
}

//transform the string to hex num
int strHex2num(char str[])
{
    Uint8 i,length;
    int num=0;
	length=getStrLength(str);
    for(i=0;i<length-1;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            num=16*num+(str[i]-'0');
        }
        else if(str[i]>='a'&&str[i]<='f')
        {
            num=16*num+(str[i]-'a'+10);
        }
        else if(str[i]>='A'&&str[i]<='F')
        {
            num=16*num+(str[i]-'A'+10);
        }
    }
    return num;
}
