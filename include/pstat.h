#ifndef _PSTAT_H_
#define _PSTAT_H_

#include "param.h"

struct pstat {
    int inuse[NPROC]; 
    int tickets[NPROC]; 
    int pid[NPROC]; 
    int ticks[NPROC];
    int passvalue[NPROC];
    int stride[NPROC];
    int priority[NPROC];
};

#endif