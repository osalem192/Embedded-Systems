/*
 * GPIO_DRIVER.c
 *
 *  Author: omar salem
 */ 
#include "BIT_MATH.h"
#include "STD_TYPE.h"
#include "ATmega32_Regs.h"


void Set_Bin_Dir(uint8 port, uint8 pinnum, uint8 dir)
{
	switch (port)
	{
		case 'a':
		case 'A': if (dir == 1) SetBit(MYDDRA, pinnum);
				  else ClrBit(MYDDRA,pinnum); 
			break;
		case 'b':
		case 'B': if (dir == 1) SetBit(MYDDRA, pinnum);
				  else ClrBit(MYDDRB,pinnum);
			break;
		case 'c':
		case 'C': if (dir == 1) SetBit(MYDDRA, pinnum);
				  else ClrBit(MYDDRC,pinnum);
			break;
		case 'd':
		case 'D': if (dir == 1) SetBit(MYDDRA, pinnum);
				  else ClrBit(MYDDRD,pinnum);
			break;
	}
}

void Pin_Write(uint8 port, uint8 pinnum, uint8 dir)
{
		switch (port)
		{
			case 'a':
			case 'A': if (dir == 1) SetBit(MYPORTA, pinnum);
			else ClrBit(MYPORTA,pinnum);
			break;
			case 'b':
			case 'B': if (dir == 1) SetBit(MYPORTB, pinnum);
			else ClrBit(MYPORTB,pinnum);
			break;
			case 'c':
			case 'C': if (dir == 1) SetBit(MYPORTC, pinnum);
			else ClrBit(MYPORTC,pinnum);
			break;
			case 'd':
			case 'D': if (dir == 1) SetBit(MYPORTD, pinnum);
			else ClrBit(MYPORTD,pinnum);
			break;
		}
}

void Pin_Toggle(uint8 port, uint8 pinnum)
{
	switch (port)
	{
		case 'a':
		case 'A': ToggleBit(MYPORTA, pinnum);
		break;
		case 'b':
		case 'B': ToggleBit(MYPORTB, pinnum);
		break;
		case 'c':
		case 'C': ToggleBit(MYPORTC, pinnum);
		break;
		case 'd':
		case 'D':ToggleBit(MYPORTD, pinnum);
		break;
	}
}

uint8 Pin_Read(uint8 port, uint8 pinnum)
{	uint8 z;
	switch (port)
	{
		case 'a':
		case 'A': z = ReadBit(MYPINA, pinnum);
		break;
		case 'b':
		case 'B': z = ReadBit(MYPINB, pinnum);
		break;
		case 'c':
		case 'C': z = ReadBit(MYPINC, pinnum);
		break;
		case 'd':
		case 'D': z = ReadBit(MYPIND, pinnum);
		break;
	}
		return z;
} 

// you can change the whole port by simply changing pinnum to 0xFF