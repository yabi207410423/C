#include "../define/df.h"
//void fun2(unsigned char x,long** ptr);

void StoreResult(unsigned int x, unsigned long*** ptr);
void MemoryAlloc(unsigned int x, unsigned long*** ptr);
unsigned int LookupTable(unsigned long*** ptr, unsigned int x, unsigned int y, unsigned int MaxValue);
void MemoryFree(unsigned long*** ptr, unsigned int x);
