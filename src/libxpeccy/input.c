#include <stdlib.h>
#include "input.h"

typedef struct {
	char key;
	unsigned char row;
	unsigned char mask;
} keyScan;

keyScan keyTab[40] = {
	{'1',4,1},{'2',4,2},{'3',4,4},{'4',4,8},{'5',4,16},{'6',3,16},{'7',3,8},{'8',3,4},{'9',3,2},{'0',3,1},
	{'q',5,1},{'w',5,2},{'e',5,4},{'r',5,8},{'t',5,16},{'y',2,16},{'u',2,8},{'i',2,4},{'o',2,2},{'p',2,1},
	{'a',6,1},{'s',6,2},{'d',6,4},{'f',6,8},{'g',6,16},{'h',1,16},{'j',1,8},{'k',1,4},{'l',1,2},{'E',1,1},
	{'C',7,1},{'z',7,2},{'x',7,4},{'c',7,8},{'v',7,16},{'b',0,16},{'n',0,8},{'m',0,4},{'S',0,2},{' ',0,1}
};

// keyboard

Keyboard* keyCreate() {
	Keyboard* keyb = (Keyboard*)malloc(sizeof(Keyboard));
	keyRelease(keyb,0,0);
	return keyb;
}

void keyDestroy(Keyboard* keyb) {
	free(keyb);
}

void keyPress(Keyboard* keyb,char key1,char key2) {
	for (int i=0; i<40; i++) {
		if ((keyTab[i].key == key1) || (keyTab[i].key == key2)) {
			keyb->map[keyTab[i].row] &= ~keyTab[i].mask;
		}
	}
}

void keyRelease(Keyboard* keyb,char key1,char key2) {
	if ((key1 == 0) && (key2 == 0)) {
		for (int i=0; i<8; i++) keyb->map[i] = 0x1f;
	} else {
		for (int i=0; i<40; i++) {
			if ((keyTab[i].key == key1) || (keyTab[i].key == key2)) {
				keyb->map[keyTab[i].row] |= keyTab[i].mask;
			}
		}
	}
}

unsigned char keyInput(Keyboard* keyb, unsigned char prt) {
	unsigned char res = 0x1f;
	for (int i = 0; i < 8; i++) {
		if (~prt & 0x80) res &= keyb->map[i];
		prt <<= 1;
	}
	return res;
}

// joystick

Joystick* joyCreate() {
	Joystick* joy = (Joystick*)malloc(sizeof(Joystick));
	joy->type = XJ_KEMPSTON;
	joy->state = 0;
	return joy;
}

void joyDestroy(Joystick* joy) {
	free(joy);
}

void joyPress(Joystick* joy, unsigned char mask) {
	joy->state |= mask;
}

void joyRelease(Joystick* joy, unsigned char mask) {
	joy->state &= ~mask;
}

unsigned char joyInput(Joystick* joy) {
	unsigned char res = 0xff;
	switch (joy->type) {
		case XJ_KEMPSTON:
			res = (joy->state & 0x1f) | 0xe0;	// high 3 bits is set
			break;
	}
	return res;
}

// mouse

Mouse* mouseCreate() {
	Mouse* mou = (Mouse*)malloc(sizeof(Mouse));
	mou->buttons = 0xff;
	mou->xpos = 0;
	mou->ypos = 0;
	mou->flags = INF_ENABLED;
	return mou;
}

void mouseDestroy(Mouse* mou) {
	free(mou);
}