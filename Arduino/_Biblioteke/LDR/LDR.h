#ifndef LDR_h
#define LDR_h

#include "Arduino.h"

class LDR{

	private:
		int pin_A,pin_B,pin_C,pin_D,pin_E,pin_F,pin_G;
		int base1, base2, base3, base4;
		//int pins[7] = {pin_A,pin_B,pin_C,pin_D,pin_E,pin_F,pin_G};
		int pins[7] = {2,3,4,5,6,7,8};
		//OVO TI TREBA
		//int pins[7];
		//int base[4] = {9,10,11,12};
		int numbers[10] = {
			192, //0b00111111 + 00111111 11000000
			121, //0b01111001 + 01111001 10000110
			164, //0b01101101 + 01011011 10100100
			176, //0b01111001 + 01001111 10110000
			153, //0b00110011 + 01100110 10011001
			146, //0b01011011 + 01101101 10010010
			130, //0b01011111 + 01111101 10000010
			143, //0b01110000 + 
			128, //0b01111111 +
			132  //0b01111011 +
		};
		
		// Ne obaziri se na ovo
		int inv_numbers[10] = {
			// Nisam jos invertovao redosled
			63,		 	//11000000 00111111
			134, //10000110 01111001
			0b00010010,
			0b00000110,
			0b01001100,
			0b00100100,
			0b00100000,
			0b00001111,
			0b00000000,
			0b00000100
		};
	public:
		LDR(int SEG_A, int SEG_B, int SEG_C, int SEG_D, 
			int SEG_E, int SEG_F, int SEG_G/*,
			int base1, int base2, int base3, int base4*/);
		void Setup();
		void showNumber(int data);
		
		// Ovo ispod nije nista zavrseno
		// ne obaziri se na to
		void showInvNumber(int invData);
		//void InvertCurrent(int base1, int base2, int base3,int base4);
			

};

#endif