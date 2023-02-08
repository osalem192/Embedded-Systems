/*
 * BIT_MATH.h
 *
 *  Author: omar salem
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SetBit(x,y) x|=(1<<y)
#define ClrBit(x,y) x&=(~(1<<y))
#define ToggleBit(x,y) x^=(1<<y)
#define ReadBit(x,y) ((x&(1<<y))>>y)

#endif /* BIT_MATH_H_ */