#ifndef LED_COMMON_H
#define LED_COMMON_H


const unsigned char MixColMatrix[4][4] = {
	{4,  1, 2, 2},
	{8,  6, 5, 6},
	{11,14,10, 9},
	{2,  2,15,11},
};
const unsigned char sbox[16] = {12, 5, 6, 11, 9, 0, 10, 13, 3, 14, 15, 8, 4, 7, 1, 2};
//was byte
const char RC[48] = {
	0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3E, 0x3D, 0x3B, 0x37, 0x2F,
	0x1E, 0x3C, 0x39, 0x33, 0x27, 0x0E, 0x1D, 0x3A, 0x35, 0x2B,
	0x16, 0x2C, 0x18, 0x30, 0x21, 0x02, 0x05, 0x0B, 0x17, 0x2E,
	0x1C, 0x38, 0x31, 0x23, 0x06, 0x0D, 0x1B, 0x36, 0x2D, 0x1A,
	0x34, 0x29, 0x12, 0x24, 0x08, 0x11, 0x22, 0x04
};
const unsigned char FieldMult16[16][16] = {
    {0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  },
    {0x0,  0x1,  0x2,  0x3,  0x4,  0x5,  0x6,  0x7,  0x8,  0x9,  0xa,  0xb,  0xc,  0xd,  0xe,  0xf,  },
    {0x0,  0x2,  0x4,  0x6,  0x8,  0xa,  0xc,  0xe,  0x3,  0x1,  0x7,  0x5,  0xb,  0x9,  0xf,  0xd,  },
    {0x0,  0x3,  0x6,  0x5,  0xc,  0xf,  0xa,  0x9,  0xb,  0x8,  0xd,  0xe,  0x7,  0x4,  0x1,  0x2,  },
    {0x0,  0x4,  0x8,  0xc,  0x3,  0x7,  0xb,  0xf,  0x6,  0x2,  0xe,  0xa,  0x5,  0x1,  0xd,  0x9,  },
    {0x0,  0x5,  0xa,  0xf,  0x7,  0x2,  0xd,  0x8,  0xe,  0xb,  0x4,  0x1,  0x9,  0xc,  0x3,  0x6,  },
    {0x0,  0x6,  0xc,  0xa,  0xb,  0xd,  0x7,  0x1,  0x5,  0x3,  0x9,  0xf,  0xe,  0x8,  0x2,  0x4,  },
    {0x0,  0x7,  0xe,  0x9,  0xf,  0x8,  0x1,  0x6,  0xd,  0xa,  0x3,  0x4,  0x2,  0x5,  0xc,  0xb,  },
    {0x0,  0x8,  0x3,  0xb,  0x6,  0xe,  0x5,  0xd,  0xc,  0x4,  0xf,  0x7,  0xa,  0x2,  0x9,  0x1,  },
    {0x0,  0x9,  0x1,  0x8,  0x2,  0xb,  0x3,  0xa,  0x4,  0xd,  0x5,  0xc,  0x6,  0xf,  0x7,  0xe,  },
    {0x0,  0xa,  0x7,  0xd,  0xe,  0x4,  0x9,  0x3,  0xf,  0x5,  0x8,  0x2,  0x1,  0xb,  0x6,  0xc,  },
    {0x0,  0xb,  0x5,  0xe,  0xa,  0x1,  0xf,  0x4,  0x7,  0xc,  0x2,  0x9,  0xd,  0x6,  0x8,  0x3,  },
    {0x0,  0xc,  0xb,  0x7,  0x5,  0x9,  0xe,  0x2,  0xa,  0x6,  0x1,  0xd,  0xf,  0x3,  0x4,  0x8,  },
    {0x0,  0xd,  0x9,  0x4,  0x1,  0xc,  0x8,  0x5,  0x2,  0xf,  0xb,  0x6,  0x3,  0xe,  0xa,  0x7,  },
    {0x0,  0xe,  0xf,  0x1,  0xd,  0x3,  0x2,  0xc,  0x9,  0x7,  0x6,  0x8,  0x4,  0xa,  0xb,  0x5,  },
    {0x0,  0xf,  0xd,  0x2,  0x9,  0x6,  0x4,  0xb,  0x1,  0xe,  0xc,  0x3,  0x8,  0x7,  0x5,  0xa,  },
    };
    
const unsigned char qsbox[16][16] = {
        {0xcc, 0xc5, 0xc6, 0xcb, 0xc9, 0xc0, 0xca, 0xcd, 0xc3, 0xce, 0xcf, 0xc8, 0xc4, 0xc7, 0xc1, 0xc2},
        {0x5c, 0x55, 0x56, 0x5b, 0x59, 0x50, 0x5a, 0x5d, 0x53, 0x5e, 0x5f, 0x58, 0x54, 0x57, 0x51, 0x52},
        {0x6c, 0x65, 0x66, 0x6b, 0x69, 0x60, 0x6a, 0x6d, 0x63, 0x6e, 0x6f, 0x68, 0x64, 0x67, 0x61, 0x62},
        {0xbc, 0xb5, 0xb6, 0xbb, 0xb9, 0xb0, 0xba, 0xbd, 0xb3, 0xbe, 0xbf, 0xb8, 0xb4, 0xb7, 0xb1, 0xb2},
        {0x9c, 0x95, 0x96, 0x9b, 0x99, 0x90, 0x9a, 0x9d, 0x93, 0x9e, 0x9f, 0x98, 0x94, 0x97, 0x91, 0x92},
        {0x0c, 0x05, 0x06, 0x0b, 0x09, 0x00, 0x0a, 0x0d, 0x03, 0x0e, 0x0f, 0x08, 0x04, 0x07, 0x01, 0x02},
        {0xac, 0xa5, 0xa6, 0xab, 0xa9, 0xa0, 0xaa, 0xad, 0xa3, 0xae, 0xaf, 0xa8, 0xa4, 0xa7, 0xa1, 0xa2},
        {0xdc, 0xd5, 0xd6, 0xdb, 0xd9, 0xd0, 0xda, 0xdd, 0xd3, 0xde, 0xdf, 0xd8, 0xd4, 0xd7, 0xd1, 0xd2},
        {0x3c, 0x35, 0x36, 0x3b, 0x39, 0x30, 0x3a, 0x3d, 0x33, 0x3e, 0x3f, 0x38, 0x34, 0x37, 0x31, 0x32},
        {0xec, 0xe5, 0xe6, 0xeb, 0xe9, 0xe0, 0xea, 0xed, 0xe3, 0xee, 0xef, 0xe8, 0xe4, 0xe7, 0xe1, 0xe2},
        {0xfc, 0xf5, 0xf6, 0xfb, 0xf9, 0xf0, 0xfa, 0xfd, 0xf3, 0xfe, 0xff, 0xf8, 0xf4, 0xf7, 0xf1, 0xf2},
        {0x8c, 0x85, 0x86, 0x8b, 0x89, 0x80, 0x8a, 0x8d, 0x83, 0x8e, 0x8f, 0x88, 0x84, 0x87, 0x81, 0x82},
        {0x4c, 0x45, 0x46, 0x4b, 0x49, 0x40, 0x4a, 0x4d, 0x43, 0x4e, 0x4f, 0x48, 0x44, 0x47, 0x41, 0x42},
        {0x7c, 0x75, 0x76, 0x7b, 0x79, 0x70, 0x7a, 0x7d, 0x73, 0x7e, 0x7f, 0x78, 0x74, 0x77, 0x71, 0x72},
        {0x1c, 0x15, 0x16, 0x1b, 0x19, 0x10, 0x1a, 0x1d, 0x13, 0x1e, 0x1f, 0x18, 0x14, 0x17, 0x11, 0x12},
        {0x2c, 0x25, 0x26, 0x2b, 0x29, 0x20, 0x2a, 0x2d, 0x23, 0x2e, 0x2f, 0x28, 0x24, 0x27, 0x21, 0x22},
        };

#endif
