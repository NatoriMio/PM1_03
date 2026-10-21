#include <stdlib.h>
#include<stdio.h>
int main()
{
    // ↓おまじない。消さないように
    system("chcp 65001 > nul"); // コンソールをUTF-8にする設定
    printf("Hello World\n");
    printf("pull request\n");
    return 0;
}