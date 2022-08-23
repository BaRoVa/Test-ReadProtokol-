#ifndef _PROTOCOL_TR_H
#define _PROTOCOL_TR_H

typedef unsigned char	u8_t;

typedef enum
{
	PRT_OK 	   	    = 0x00U,
	PRT_PRE_FALSE 	= 0x01U,  	/* Неправильный формат протокола*/
	PRT_CRC_FALSE  	= 0x02U,	/* Ошибка в проверке CRC8*/
} PRT_STATE;

u8_t GetFromAddres(void);
u8_t GetWhereAddres(void);
u8_t GetLengthMessages(void);

PRT_STATE ReadMessage(u8_t *msg);
void CleanMessage(void);

#endif
