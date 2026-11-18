#include<stdio.h>
#include<stdint.h>
void set_bit(uint32_t *val,int n){
    *val|=(1U<<n);
}
void clr_bit(uint32_t *val,int n){
    *val=*val&~(1U<<n);
}
int main(){
    uint32_t a=2;
    uint32_t *p=&a;
    set_bit(p,6);
    printf("将第6位置1后为%#X\r\n",*p);
    clr_bit(p,6);
    printf("%#X",*p);
    getchar();
return 0;
}