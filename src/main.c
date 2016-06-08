//function:jinzhi transform
//notition: input str range: <100 char   input num range :2^32
/*process:
 * 			1.get the input string
 * 			2.check the string whether command ,data or wrong input
 * 			3.judge the type of string,and do the relative procejure
 * 			  if the string is command ,do the relative command
 * 			  if the string is data,transform it to data,then print it
 * 			  if the string is wrong input,print the warning message
 * 			4.wait for a new input string
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "newDataTypes.h"
#include "inputFormat.h"
#include "str.h"

int system(const char *string); // system command

void main(int argc, char **argv)
{
    char str[100];
    int num;
	Uint8 inputFlag;
    printf("******************* welcome! ****************************\n");
    printf("1. input data, 2:xxxd,10:xxxb,16:xxxh\n");
    printf("2. input cmd, e for exit,c for clear\n");
	printf("3. input str range, <100 char,input num range :2^32\n");
    printf("*********************************************************\n\n");
    while(1)
    {
        printf("please input:"); //input the string
        scanf("%s",str);
        checkInput(str,&inputFlag);//check input string format,command,data,or wrong input
	    switch(inputFlag)//acording to the input string format, do the corresponding process
        {
			case CMD_CLEAR_FLAG:
			{
				system("cls");
			}break;
			case CMD_EXIT_FLAG:
			{
				exit(1);
			}break;
			case CMD_UNDEFINED:
			{
				printf("command is undefine!\n");
			}break;
			case Winput_FLAG:
			{
				printf("input is not supported!\n");
			}break;
			case DATA_BIN_FLAG:
			{
				num=strBin2num(str);
				putNum(num);
			}break;
			case DATA_DEC_FLAG:
			{
				num=strDec2num(str);
				putNum(num);
			}break;
			case DATA_HEX_FLAG:
			{
				num=strHex2num(str);
				putNum(num);
			}break;
			default:
			{};break;
		}
	}
}
