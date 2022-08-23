/*
 ============================================================================
 Name        : SendReciveProtokol.c
 Author      : Batrakov R. V.
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "protokol_translate.h"


// | 0x01 | 0x02 | 0x03 | 0x04 | 0-256(size of messages) | Source message | Destination message | Message sizeof(N) |   CRC8   |
// |->4 byte static preamble <-|         1 byte			 |    1 byte      |       1 byte        |	  N byte		|	1 byte |
//											\/
//											\/
//FIXME:: size of messages : it mean all "Header size"+"Message sizeof(N)  or only "Message sizeof(N)" ????
int main(void)
{

    while (1)
    {
    	unsigned char messages[13] = {0x01,0x02,0x03,0x04,0x05,0x2a, 0xff,0x35, 0x34, 0x33, 0x32, 0x31, 0x68}; /* TRUE */
		if (ReadMessage(messages) == PRT_OK)
			CleanMessage();
	}
}
