#include<stdio.h>
typedef int (*op_func)(int,int);
int clac(op_func vp,int x,int y){
    return vp(x,y);
}
int add(int a,int b){
    return (a+b);
}
int sub(int a,int b){
    return (a-b);
}
int main(){
    printf("%d\r\n",clac(add,7,5));
    printf("%d\r\n",clac(sub,6,1));
    getchar();
    return 0;
}
