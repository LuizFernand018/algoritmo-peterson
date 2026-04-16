#include "../conta/conta.h"
#include "../peterson/peterson.h"
#include "thread.h"

void thread_P0(void* argcthread){
    enter(0);
    depositar(50);
    leave(0);

    return;
}

void thread_P1(void* argcthread){
    enter(1);
    depositar(1000);
    leave(1);

    return;
}