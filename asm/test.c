#include <stdio.h>
#include "rdtsc.h"

int main(int argc, char* argv[])
{
  unsigned long long a,b;

  a = rdtsc();
  b = rdtsc();

  printf("%llu\n", b-a);
  return 0;
}
