// 数の表示とサイコロ
#include <stdio.h>
#include <stdlib.h>//スタンダードライブラリ
#include <time.h>//rand関数を
int main(void){
    srand((unsigned int)time(NULL));
    int randnum = rand() % 100 + 1; //%100で 1-99まで表示
    // printf("%d", randnum);
    printf("スライムが%d匹あらわれた", randnum);
}
