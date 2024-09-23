/*
* Project: Pthreads Tutorial
* File: pthreads_hello.c
* Date: February 19, 2022
* Author: M. Ray Auhammud
* License: MIT License
*/

#include <stdio.h>
#include <pthread.h>

void *thread_function(void *arg);

int main()
{
    pthread_t thread_id;

    pthread_create(&thread_id, NULL, thread_function, NULL);

    printf("From main: Hello World !\n");

    printf("Exiting: main\n");

    // This should be the last statement in main()
    pthread_exit(NULL);
}

void *thread_function(void *arg)
{
    printf("From thread: Hello World !\n");
    
    printf("Exiting: thread\n");
}

