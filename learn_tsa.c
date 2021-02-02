#include "learn_tsa.h"
#include <stdio.h>

struct MyMutex myMutex_;
struct MyMutex myMutex2_;

int resource GUARDED_BY(myMutex2_) = 0;


void Lock() NO_THREAD_SAFETY_ANALYSIS
{
    printf("Lock()\n");
}

void Unlock() NO_THREAD_SAFETY_ANALYSIS
{
    printf("Unlock()\n");
}


void unlockunlock() RELEASE(myMutex_)
{
    Unlock();
}

void locklock()
{
    Lock();
    resource = 1;
    printf("resource = %d", resource);
//    Unlock();
    unlockunlock();
}


int main()
{
    printf("Asdsadasdasdsa\n");

    return 0;
}


