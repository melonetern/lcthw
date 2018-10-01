# stdin stdout std error

stdin 0 

stdout 1 printf() ~~ fprintf(stdout, ...)

stderr 2 perror() ~~ fprintf(stderr, ...)

In Linux shell make foo.c
void main(){
  fprintf(stdout, "stdout!");
  fprintf(stderr, "stderr!");
  printf("printf");
}
./foo
./foo 1>logout.txt 2>logerr.txt


