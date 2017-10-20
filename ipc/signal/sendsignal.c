#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  kill(atoi(argv[1]),atoi(argv[2]));
  printf("Senal %s enviada a %s\n",argv[2],argv[1]);
  return 0;
}