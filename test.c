#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

pthread_mutex_t mutex;
int nItems = 0;
void* producer(){
    printf("Talk shit\n");
}
void* consumer(){
    printf("Narrate\n");
}


int main(){
    pthread_t t1, t2;
    pthread_mutex_init(&mutex, NULL);

    pthread_create(&t1, NULL, producer, NULL);
    pthread_create(&t2, NULL, consumer, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    pthread_mutex_destroy(&mutex);
    return 0;
}