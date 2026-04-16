#include "peterson.h"

int turn = 0;
bool wants[2] = {0, 0};
void enter(int task){
    int other = 1 - task;

    wants[task] = 1;
    __sync_synchronize();

    turn = other;
    __sync_synchronize();

    while(wants[other] && (turn == other)){
        __sync_synchronize();
    }
}

void leave(int task){
    __sync_synchronize();
    wants[task] = 0;
}