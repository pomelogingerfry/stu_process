#include<stdio.h>
#include<stdint.h>
typedef union{
    uint16_t val;
    uint8_t buf[2];
}uu;
int main(){
    uu UU;
    UU.val=0x1236;
    printf("%X,%X\r\n",UU.buf[0],UU.buf[1]);
    getchar();
    return 0;

}