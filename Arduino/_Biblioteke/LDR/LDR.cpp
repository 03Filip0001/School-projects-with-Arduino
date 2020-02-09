#include "LDR.h"
#include "Arduino.h"

LDR::LDR(int SEG_A, int SEG_B, int SEG_C, int SEG_D, 
		 int SEG_E, int SEG_F, int SEG_G/*,
		 int base1, int base2, int base3, int base4*/){
	pin_A = SEG_A;
	pin_B = SEG_B;
	pin_C = SEG_C;
	pin_D = SEG_D;
	pin_E = SEG_E;
	pin_F = SEG_F;
	pin_G = SEG_G; 
	/*
	//OVO TI TREBA
	pins[0] = SEG_A;
	pins[1] = SEG_B;
	pins[2] = SEG_C;
	pins[3] = SEG_D;
	pins[4] = SEG_E;
	pins[5] = SEG_F;
	pins[6] = SEG_G;
	*/
}

void LDR::Setup(){
	pinMode(pin_A, OUTPUT);
	pinMode(pin_B, OUTPUT);
	pinMode(pin_C, OUTPUT);
	pinMode(pin_D, OUTPUT);
	pinMode(pin_E, OUTPUT);
	pinMode(pin_F, OUTPUT);
	pinMode(pin_G, OUTPUT);
	/*
	pinMode(base1, OUTPUT);
	pinMode(base2, OUTPUT);
	pinMode(base3, OUTPUT);
	pinMode(base4, OUTPUT);
	
	digitalWrite(base[0], HIGH);
	digitalWrite(base[1], LOW);
	digitalWrite(base[2], HIGH);
	digitalWrite(base[3], LOW);
	*/
}

void LDR::showNumber(int data){
	for(int i = 0; i < 7; i++){
			digitalWrite(pins[i], numbers[data] & (1 << i));
	}
}

// Ovo ispod nije nista zavrseno
// ne obaziri se na to

void LDR::showInvNumber(int invData) {
	for(int i = 0; i < 7; i++){
			digitalWrite(pins[i], inv_numbers[invData] & (1 << i));
	}
}
/*
void LDR::InvertCurrent(int base1, int base2, int base3,int base4){
	
}*/
