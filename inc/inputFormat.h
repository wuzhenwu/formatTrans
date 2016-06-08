#ifndef _inputFormat_H_
#define _inputFormat_H_

#include "newDataTypes.h"
//check string flag 
#define DATA_BIN_FLAG  0 
#define DATA_DEC_FLAG  1
#define DATA_HEX_FLAG  2
#define Winput_FLAG    10
#define CMD_CLEAR_FLAG  20
#define CMD_EXIT_FLAG   21
#define CMD_UNDEFINED   29

void checkInput(char str[],Uint8* flag); //check input string format,command,data,or wrong input
int checkBin(char str[]); //check input string if it is binary format
int checkDec(char str[]); //check input string if it is decimal format
int checkHex(char str[]);//check input string if it is hex format

#endif