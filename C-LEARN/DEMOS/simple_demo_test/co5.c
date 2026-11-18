#include<stdio.h>
#include<stdint.h>
typedef union{
    uint32_t u32;
    uint8_t u8[4];
}u32u8;
int main(){
    u32u8 UU;
    UU.u32=0x12345678;
    printf("%#X\r\n%#X\r\n%#X\r\n%#X\r\n",UU.u8[0],UU.u8[1],UU.u8[2],UU.u8[3]);
     getchar();
     return 0;
}
