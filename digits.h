#ifndef DIGITS_H
#define DIGITS_H

PROGMEM const unsigned char sound[] = {
  0xf0, 0x08, 0x08, 0xf8, 0x04, 0x02, 0x01, 0xff,
  0x00, 0x04, 0xf9, 0x01, 0x06, 0xf8, 0x00, 0x01,
  0x01, 0x01, 0x02, 0x04, 0x08, 0x0f, 0x00, 0x02,
  0x09, 0x08, 0x06, 0x01,
};
PROGMEM const unsigned char noSound[] = {
  0x00, 0xf0, 0x08, 0x08, 0xf8, 0x44, 0x22, 0x11,
  0xcf, 0x04, 0x02, 0x01, 0x08, 0x04, 0x03, 0x01,
  0x00, 0x00, 0x04, 0x08, 0x0f, 0x00, 0x00, 0x00,
};
PROGMEM const unsigned char win[] = {
  0x00, 0x00, 0x00, 0x10, 0x20, 0xc0, 0x00, 0x00,
  0x00, 0x70, 0x0e, 0x01, 0x80, 0x40, 0x20, 0x00,
  0x00, 0x00, 0xf0, 0x08, 0x04, 0x08, 0xf0, 0xf0,
  0xf3, 0xf0, 0xf0, 0xf0, 0xf0, 0xf6, 0xf1, 0xf0,
  0x08, 0x04, 0x08, 0xf0, 0x00, 0x09, 0x12, 0x0c,
  0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f,
  0x1f, 0x07, 0x0c, 0x12, 0x09, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x20, 0x30, 0x38, 0x3f, 0x3f,
  0x38, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
};

PROGMEM const unsigned char dead[] = {
  0x00, 0x00, 0xf0, 0xfc, 0xfe, 0xfe, 0x7f, 0x7f,
  0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xfe, 0xfe,
  0xfc, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0f,
  0x1f, 0x9f, 0x3e, 0x7e, 0xef, 0xe3, 0xe3, 0xef,
  0x7e, 0x3e, 0x9f, 0x1f, 0x0f, 0x01, 0x00, 0x00,
  0x30, 0x38, 0x38, 0x60, 0x60, 0xc1, 0xc3, 0x86,
  0x86, 0x0e, 0x0e, 0x86, 0x86, 0xc3, 0xc1, 0x60,
  0x60, 0x38, 0x38, 0x30, 0x30, 0x70, 0x70, 0x18,
  0x18, 0x0c, 0x0c, 0x07, 0x07, 0x03, 0x03, 0x07,
  0x07, 0x0c, 0x0c, 0x18, 0x18, 0x70, 0x70, 0x30,
};

PROGMEM const unsigned char titleImage[] = {
  0xff, 0xff, 0xff, 0x1c, 0x38, 0x70, 0xf0, 0x78,
  0x3e, 0xff, 0xff, 0xff, 0x00, 0x00, 0xee, 0xee,
  0xcc, 0x00, 0xf0, 0xf0, 0xf0, 0xe0, 0xe0, 0xf0,
  0xf0, 0xe0, 0xc0, 0x00, 0x80, 0xc0, 0xe0, 0x60,
  0x60, 0x60, 0xe0, 0xc0, 0x80, 0x00, 0xc0, 0xe0,
  0xf0, 0xb0, 0x30, 0x30, 0x70, 0x60, 0x00, 0xf0,
  0xf0, 0xf0, 0xe0, 0x00, 0xc0, 0xe0, 0xf0, 0xf0,
  0xc0, 0x00, 0xf0, 0xf0, 0xf0, 0x30, 0x80, 0xc0,
  0xe0, 0x60, 0x60, 0x60, 0xe0, 0xc0, 0x80, 0x00,
  0x80, 0xc0, 0xe0, 0x60, 0x60, 0x60, 0xe0, 0xc0,
  0x80, 0x20, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
  0xc0, 0x80, 0x00, 0x80, 0xc0, 0xe0, 0x60, 0x60,
  0x60, 0xe0, 0xc0, 0x80, 0x00, 0xe0, 0xe0, 0xe0,
  0xc0, 0xe0, 0xe0, 0xc0, 0x80, 0x3f, 0x3f, 0x3f,
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f,
  0x3f, 0x20, 0x00, 0x3f, 0x3f, 0x3f, 0x00, 0x3f,
  0x3f, 0x3f, 0x21, 0x00, 0x00, 0x3f, 0x3f, 0x3f,
  0x20, 0x0f, 0x1f, 0x3f, 0x3b, 0x33, 0x33, 0x33,
  0x3b, 0x1b, 0x00, 0x39, 0x3b, 0x1b, 0x33, 0x3b,
  0x3f, 0x3f, 0x1e, 0x00, 0x00, 0x07, 0x1f, 0x3f,
  0x3f, 0x3f, 0x2f, 0x07, 0x1f, 0x3f, 0x3f, 0x3f,
  0x2f, 0x03, 0x00, 0x0f, 0x1f, 0x3f, 0x3b, 0x33,
  0x33, 0x33, 0x3b, 0x1b, 0x00, 0x0f, 0x1f, 0x3f,
  0x3b, 0x33, 0x33, 0x33, 0x3b, 0x1b, 0x00, 0xff,
  0xff, 0xff, 0x38, 0x38, 0x3d, 0x1f, 0x0f, 0x00,
  0x0f, 0x1f, 0x3f, 0x3b, 0x33, 0x33, 0x33, 0x3b,
  0x1b, 0x00, 0x3f, 0x3f, 0x3f, 0x21, 0x00, 0x01,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x02,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

PROGMEM const unsigned char digit_1[] = {
  0b00000,
  0b11111,
  0b00000,
};

PROGMEM const unsigned char digit_2[] = {
  0b11001,
  0b10101,
  0b10010,
};
PROGMEM const unsigned char digit_3[] = {
  0b10001,
  0b10101,
  0b11111,
};
PROGMEM const unsigned char digit_4[] = {
  0b00111,
  0b00100,
  0b11111,
};
PROGMEM const unsigned char digit_5[] = {
  0b10111,
  0b10101,
  0b11101,
};
PROGMEM const unsigned char digit_6[] = {
  0b11111,
  0b10101,
  0b11101,
};
PROGMEM const unsigned char digit_7[] = {
  0b00001,
  0b00001,
  0b11111,
};
PROGMEM const unsigned char digit_8[] = {
  0b11111,
  0b10101,
  0b11111,
};

#endif // DIGITS_H
