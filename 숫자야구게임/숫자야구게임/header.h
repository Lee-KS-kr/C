#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STRIKE 2
#define BALL 1

int* check(int*, int*);
void makeUserNum(int*);
void makeComNum(int*);
int tm_secDiff(time_t, time_t);
int tm_minDiff(time_t, time_t);