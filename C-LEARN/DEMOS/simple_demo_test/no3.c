#include<stdint.h>
typedef union{
    uint16_t reg;
    struct{
        uint16_t speed :8;
        uint16_t en :1;
        uint16_t block_err :1;
        uint16_t temp_err :1;
        uint16_t curr_err :1;
        uint16_t res :4;
    }bitbit;
}MotorReg;
typedef struct{
    
}