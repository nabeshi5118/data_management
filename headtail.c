#include <stdio.h>
#include <stdlib.h>
int main(){
    int head=0;
    int tail=0;
    printf("Tossing a coin...");
    for(int i=0;i<3;i++){
        int num=rand()%3;
        if(num==1){
            printf("Round %d:Heads\n",i);
            head++;
        }else{
            printf("Round %d:Tails\n",i);
            tail++;
        }
    }
    printf("Heads:%d,Tails:%d\n",head,tail);
    return 0;

}