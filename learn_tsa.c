#include "learn_tsa.h"
#include <stdio.h>

struct MyMutex;
int resource = 0;


void Lock() NO_THREAD_SAFETY_ANALYSIS
{
    printf("Lock()\n");
}

void Unlock() NO_THREAD_SAFETY_ANALYSIS
{
    printf("Unlock()\n");
}


void locklock()
{
    Lock();
    resource = 1;
    printf("resource = %d", resource);
    Unlock();
}


int main()
{
    printf("Asdsadasdasdsa\n");

    return 0;
}


