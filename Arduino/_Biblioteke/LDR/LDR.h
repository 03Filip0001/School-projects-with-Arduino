#ifndef LDR_h
#define LDR_h

#include "Arduino.h"

class LDR{

	private:
		int pin_A,pin_B,pin_C,pin_D,pin_E,pin_F,pin_G;
		int base1, base2, base3, base4;
		int pins[7] = {pin_A,pin_B,pin_C,pin_D,pin_E,pin_F,pin_G};
		//int pins[7] = {2,3,4,5,6,7,8};
		int numbers[10] = {
			// Nisam jos invertovao redosled
			// Jesam
			// Brojevi nisu dobro ispisani (osim 1)
			129, //0b01111110 +
			121, //0b01111001 + 
			109, //0b01101101 +
			134, //0b01111001 +
			204, //0b00110011 +
			164, //0b01011011 +
			160, //0b01011111 +
			143, //0b01110000 +
			128, //0b01111111 +
			132  //0b01111011 +
		};
		
		// Ne obaziri se na ovo
		int inv_numbers[10][2] = {
			// Nisam jos invertovao redosled
			{0, 0b00000001},
			{1, 0b01001111},
			{2, 0b00010010},
			{3, 0b00000110},
			{4, 0b01001100},
			{5, 0b00100100},
			{6, 0b00100000},
			{7, 0b00001111},
			{8, 0b00000000},
			{9, 0b00000100}
		};
	public:
		LDR(int SEG_A, int SEG_B, int SEG_C, int SEG_D, 
			int SEG_E, int SEG_F, int SEG_G,
			int base1, int base2, int base3, int base4);
		void Setup();
		void showNumber(int data);
		
		// Ovo ispod nije nista zavrseno
		// ne obaziri se na to
		//void showInvNumber(uint16_t invData);
		//void InvertCurrent(int base1, int base2, int base3,int base4);
			

};

#endif