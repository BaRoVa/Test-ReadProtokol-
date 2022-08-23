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

int main(void) {

    while (1)
    {
    	//unsigned char messages[13] = {0x01,0x02,0x03,0x04,0x05,0x2a, 0xff,0x35, 0x34, 0x33, 0x32, 0x31, 0x68}; /* TRUE */
		if (ReadMessage(messages) == PRT_OK)
			CleanMessage();
	}
}
