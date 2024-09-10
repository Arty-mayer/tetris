#pragma once;
#include <avr/pgmspace.h>

namespace Tetris {



const uint8_t PROGMEM partFigure[5] = {
  0b11111000, 
  0b10001000,
  0b10001000,
  0b10001000,
  0b11111000,

};

const uint8_t PROGMEM partField[5] = {
  0b11111000, 
  0b11001000,
  0b10101000,
  0b10011000,
  0b11111000,

};

const uint8_t PROGMEM partAnim1[5] = {
  0b01110000, 
  0b10001000,
  0b10001000,
  0b10001000,
  0b01110000,

};

const uint8_t PROGMEM partAnim2[5] = {
  0b10001000, 
  0b01110000,
  0b01010000,
  0b01110000,
  0b10001000,

};
const uint8_t PROGMEM partAnim3[5] = {
  0b10001000, 
  0b01010000,
  0b00100000,
  0b01010000,
  0b10001000,

};

const uint8_t PROGMEM partAnim4[5] = {
  0b00000000, 
  0b01010000,
  0b00100000,
  0b01010000,
  0b00000000,

};

const uint8_t PROGMEM partAnim5[5] = {
  0b00000000, 
  0b00000000,
  0b00100000,
  0b00000000,
  0b00000000,

};

const uint8_t PROGMEM bild_I[32] = {
  0b11111111, 0b11111111,
  0b10000000, 0b00000001,
  0b10000000, 0b00000001,
  0b11111111, 0b11111111,  
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
};

const uint8_t PROGMEM bild_O[32] = {
  0b11111111, 0b00000000,
  0b10000001, 0b00000000,
  0b10000001, 0b00000000,
  0b10000001, 0b00000000,
  0b10000001, 0b00000000,
  0b10000001, 0b00000000,
  0b10000001, 0b00000000,
  0b11111111, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,  
};

const uint8_t PROGMEM bild_J[32] = {
  0b11111111, 0b11000000,
  0b10000000, 0b01000000,
  0b10000000, 0b01000000,
  0b10011111, 0b11000000,
  0b10010000, 0b00000000,
  0b10010000, 0b00000000,
  0b11110000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,

  
};

const uint8_t PROGMEM bild_L[32] = {
  0b11110000, 0b00000000,
  0b10010000, 0b00000000,
  0b10010000, 0b00000000,
  0b10011111, 0b11000000,
  0b10000000, 0b01000000,
  0b10000000, 0b01000000,
  0b11111111, 0b11000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  
};
const uint8_t PROGMEM bild_S[32] = {
  0b11111110, 0b00000000,
  0b10000010, 0b00000000,
  0b10000010, 0b00000000,
  0b11110011, 0b11000000,
  0b00010000, 0b01000000,
  0b00010000, 0b01000000,
  0b00011111, 0b11000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
};
const uint8_t PROGMEM bild_Z[32] = {
  0b00011111, 0b11000000,
  0b00010000, 0b01000000,
  0b00010000, 0b01000000,
  0b11110011, 0b11000000,
  0b10000010, 0b00000000,
  0b10000010, 0b00000000,
  0b11111110, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
};

const uint8_t PROGMEM bild_T[32] = {
  0b11111111, 0b11000000,
  0b10000000, 0b01000000,
  0b10000000, 0b01000000,
  0b11110011, 0b11000000,
  0b00010010, 0b00000000,
  0b00010010, 0b00000000,
  0b00011110, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
};





  const uint8_t PROGMEM menuHeart[54] ={ //18x18
  0b00000000, 0b00000000, 0b00000000,
  0b00011100, 0b00001110, 0b00000000,
  0b00110110, 0b00011011, 0b00000000,
  0b01100011, 0b00110001, 0b10000000,
  0b11000001, 0b11100000, 0b11000000,
  0b10000000, 0b11000000, 0b01000000,
  0b10000000, 0b00000000, 0b01000000,
  0b10000000, 0b00000000, 0b01000000,
  0b11000000, 0b00000000, 0b11000000,
  0b01100000, 0b00000001, 0b10000000,
  0b00110000, 0b00000011, 0b00000000,
  0b00011000, 0b00000110, 0b00000000,
  0b00001100, 0b00001100, 0b00000000,
  0b00000110, 0b00011000, 0b00000000,
  0b00000011, 0b00110000, 0b00000000,
  0b00000001, 0b11100000, 0b00000000,
  0b00000000, 0b11000000, 0b00000000,
  0b00000000, 0b00000000, 0b00000000,
};
  const uint8_t PROGMEM menuOut[54] ={
    
  0b00000000, 0b00000000, 0b00000000,
  0b00111111, 0b11111000, 0b00000000,
  0b01111111, 0b11111100, 0b00000000,
  0b01110000, 0b00011100, 0b00000000,
  0b01100000, 0b00001100, 0b00000000,
  0b01100000, 0b00001100, 0b00000000,
  0b01100000, 0b00000001, 0b00000000,
  0b01100000, 0b00000001, 0b10000000,
  0b01100000, 0b01111111, 0b11000000,
  0b01100000, 0b01111111, 0b11000000,
  0b01100000, 0b00000001, 0b10000000,
  0b01100000, 0b00000001, 0b00000000,
  0b01100000, 0b00001100, 0b00000000,
  0b01100000, 0b00001100, 0b00000000,
  0b01110000, 0b00011100, 0b00000000,
  0b01111111, 0b11111100, 0b00000000,
  0b00111111, 0b11111000, 0b00000000,
  0b00000000, 0b00000000, 0b00000000,
};
  
  const uint8_t PROGMEM menuBack[54] ={

  0b00000000, 0b00000000, 0b00000000,
  0b00000000, 0b00000000, 0b00000000,
  0b00000001, 0b00000000, 0b00000000,
  0b00000011, 0b00000000, 0b00000000,
  0b00000111, 0b11111110, 0b00000000,
  0b00001111, 0b11111111, 0b00000000,
  0b00000111, 0b11111111, 0b10000000,
  0b00000011, 0b00000111, 0b10000000,
  0b00000001, 0b00000011, 0b10000000,
  0b00000000, 0b00000011, 0b10000000,
  0b00000000, 0b00000011, 0b10000000,
  0b00000000, 0b00000111, 0b10000000,
  0b01111111, 0b11111111, 0b10000000,
  0b01111111, 0b11111111, 0b00000000,
  0b01111111, 0b11111110, 0b00000000,
  0b00000000, 0b00000000, 0b00000000,
  0b00000000, 0b00000000, 0b00000000,
  0b00000000, 0b00000000, 0b00000000,
};
 const uint8_t PROGMEM manuStart[54] ={
  0b00000000, 0b00000000, 0b00000000,
  0b00001111, 0b11111111, 0b00000000,
  0b00011111, 0b11111111, 0b10000000,
  0b00011100, 0b00000011, 0b10000000,
  0b00011000, 0b00000001, 0b10000000,
  0b00011000, 0b00000001, 0b10000000,
  0b00000000, 0b00100001, 0b10000000,
  0b00000000, 0b00110001, 0b10000000,
  0b01111111, 0b11111001, 0b10000000,
  0b01111111, 0b11111001, 0b10000000,
  0b00000000, 0b00110001, 0b10000000,
  0b00000000, 0b00100001, 0b10000000,
  0b00011000, 0b00000001, 0b10000000,
  0b00011000, 0b00000001, 0b10000000,
  0b00011100, 0b00000011, 0b10000000,
  0b00011111, 0b11111111, 0b10000000,
  0b00001111, 0b11111111, 0b00000000,
  0b00000000, 0b00000000, 0b00000000,
};

const uint8_t PROGMEM menuSpeed[54] ={
  0b00000000, 0b00000000, 0b00000000,
  0b01100001, 0b11100110, 0b00000000,
  0b01100001, 0b11100110, 0b00000000,
  0b01111001, 0b10000111, 0b10000000,
  0b01111001, 0b10000111, 0b10000000,
  0b00011001, 0b10000110, 0b00000000,
  0b00011001, 0b10000110, 0b00000000,
  0b00000000, 0b00000000, 0b00000000,
  0b00000100, 0b00010000, 0b00000000,
  0b00000100, 0b00010000, 0b00000000,
  0b00000100, 0b00010000, 0b00000000,
  0b00000100, 0b00010000, 0b00000000,
  0b00000100, 0b00010000, 0b00000000,
  0b00010101, 0b01010100, 0b00000000,
  0b00001110, 0b00111000, 0b00000000,
  0b00000100, 0b00010000, 0b00000000,
  0b00000000, 0b00000000, 0b00000000,
  0b00000000, 0b00000000, 0b00000000,
};
}
