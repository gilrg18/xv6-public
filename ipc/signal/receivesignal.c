#include <signal.h>
#include <stdio.h>

int ciclo;
void signal_processer(int p)
{
  printf("Senal recibida");
  ciclo = 0;
}

int main()
{
  ciclo = 1;
  signal(10,signal_processer);
  while(ciclo)
  {
    printf("Esperando por senal\n");
  }
  return 0;
}