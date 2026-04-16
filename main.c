#include <stdio.h>
#include <pthread.h>
#include "threads/thread.h"
#include "peterson/peterson.h"
#include "conta/conta.h"

int main(){
    for(int i = 0; i < 10000; i++){
        saldo = 0;

        pthread_t t1, t2;

        pthread_create(&t1, NULL, (void*)thread_P0, NULL);
        pthread_create(&t2, NULL, (void*)thread_P1, NULL);

        pthread_join(t1, NULL);
        pthread_join(t2, NULL);

        if(saldo != 1050){
            printf("ERRO! Saldo = %d\n", saldo);
            return 1;
        }
    }

    printf("Tudo certo!\n");
    return 0;
}