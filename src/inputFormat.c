#include <stdio.h>
#include <stdlib.h>
#include "inputFormat.h"
#include "str.h"

#define TRUE 1
#define FALSE 0


//check input string format,command,data,or wrong input
void checkInput(char str[],Uint8* flag)
{
	int length;
	length=getStrLength(str);
	if(length==1)
	{
        switch(str[0])
        {
            case 'e':
            {
				*flag=CMD_EXIT_FLAG;
            }break;
			case 'c':
			{
				 *flag=CMD_CLEAR_FLAG;
			}break;
			default:
			{
				 *flag=CMD_UNDEFINED;
			}break;
        }
    }
	else
	{
		if(checkBin(str)==TRUE)
		{
			*flag=DATA_BIN_FLAG;
		}
		else if(checkDec(str)==TRUE)
		{
			*flag=DATA_DEC_FLAG;
		}
		else if(checkHex(str)==TRUE)
		{
			*flag=DATA_HEX_FLAG;
		}
		else
		{
			*flag=Winput_FLAG;
		}
	}
}

//check input string if it is binary format
int checkBin(char str[])
{
	int length,i;
	length=getStrLength(str);
	if(str[length-1]=='b')
	{
		 for(i=0;i<length-1;i++)
		{
			if(str[i]>='0'&&str[i]<='1')
			{
				
			}
			else
			{
				return FALSE;
			}
		   
		}
		return TRUE;
	}
	return FALSE;  
}

//check input string if it is decimal format
int checkDec(char str[])
{
	int length,i;
	length=getStrLength(str);
	if(str[length-1]=='d')
	{
		 for(i=0;i<length-1;i++)
		{
			if(str[i]>='0'&&str[i]<='9')
			{
				
			}
			else
			{
				return FALSE;
			}
		   
		}
		return TRUE;
	}
	return FALSE;  
}

//check input string if it is hex format
int checkHex(char str[])
{
	int length,i;
	length=getStrLength(str);
	if(str[length-1]=='h')
	{
		for(i=0;i<length-1;i++)
		{
			if(str[i]>='0'&&str[i]<='9')
			{
				
			}
			else if(str[i]>='a'&&str[i]<='f')
			{

			}
			else if(str[i]>='A'&&str[i]<='F')
			{
				
			}
			else
			{
			   return FALSE;
			}
		}
		return TRUE;
	}
	return FALSE;
}

