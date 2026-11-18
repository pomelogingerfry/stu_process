#include<stdint.h>
typedef union{
    uint16_t raw_data;
    struct{
        uint16_t speed:5;
        uint8_t en:1;
        uint16_t temp:5;
        uint8_t warn:1;
        uint16_t reserve:4;
    }bit;
}CanMsg;
uint8_t gettemp(const CanMsg *p){
    return p->bit.temp;
}
void SetSpeed(CanMsg *p,uint8_t speed_val){
    if(speed_val>31){
        speed_val=0;
    }
    p->bit.speed=speed_val;
}