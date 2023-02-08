/*
 * GPIO_DRIVER.h
 *
 *  Author: omar salem
 */ 

#include "STD_TYPE.h"
#ifndef GPIO_DRIVER_H_
#define GPIO_DRIVER_H_

void Set_Bin_Dir(uint8 port, uint8 pinnum, uint8 dir);
void Pin_Write(uint8 port, uint8 pinnum, uint8 dir);
void Pin_Toggle(uint8 port, uint8 pinnum);
uint8 Pin_Read(uint8 port, uint8 pinnum);
// you can change the whole port by simply changing pinnum to 0xFF


#endif /* GPIO_DRIVER_H_ */