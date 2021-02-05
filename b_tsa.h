#ifndef B_TSA_H
#define B_TSA_H

#include "clang_tsa.h"

#define TSA_DECLARE_STRUCT_CAPABILITY(structname) \
    struct CAPABILITY(#structname) structname

#define TSA_DECLARE_MUTEX(mutexname) \
    extern struct mutex mutexname

#define TSA_DECLARE_SPINLOCK(lockname) \
    extern spinlock_t lockname

#define TSA_DECLARE_HLIST_HEAD(name) \
    extern struct hlist_head name


TSA_DECLARE_STRUCT_CAPABILITY(mutex);
TSA_DECLARE_STRUCT_CAPABILITY(spinlock);

TSA_DECLARE_HLIST_HEAD(binder_deferred_list);
TSA_DECLARE_MUTEX(binder_deferred_lock);

TSA_DECLARE_HLIST_HEAD(binder_devices);
TSA_DECLARE_HLIST_HEAD(binder_procs);
TSA_DECLARE_MUTEX(binder_procs_lock);

TSA_DECLARE_HLIST_HEAD(binder_dead_nodes);
TSA_DECLARE_SPINLOCK(binder_dead_nodes_lock);

extern atomic_t binder_last_id;


#endif // B_TSA_H

