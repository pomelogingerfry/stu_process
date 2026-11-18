#include<stdio.h>
typedef struct{
    char name[16];
    int score;
}STU;
STU* findmax(STU stu[],int len){
    int i=1;
    int max=0;
    for(i+1;i<len;i++){
        if(stu[i].score>stu[max].score){
            max=i;
        }
    }
    return &stu[max];
}
int main(void){
    STU stus[]={
        {"ZHANG",80},
        {"LI",98},
        {"WANG",77}        
    };
    STU *p=findmax(stus,3);
    printf("%s %d\n",p->name,p->score);
    getchar();
    return 0;

}