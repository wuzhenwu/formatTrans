#ifndef _STR_H_
#define _STR_H_

#include "newDataTypes.h"
Uint8 getStrLength(char str[]); //get input string length

int strDec2num(char str[]); //transform the string to decimal num
int strBin2num(char str[]); //transform the string to binary num
int strHex2num(char str[]); //transform the string to hex num

void putBin(int num); // print the num in binary format
void putNum(int num); // print the num in multiple formats

#endif