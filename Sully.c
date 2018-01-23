#include <stdio.h>
int i = 5;
int main(){char str[10]; while(i != 0){sprintf(str, "Sully_%d.c", i);FILE *fd = fopen(str, "w"); char *c = "#include <stdio.h>%cint i = %d;%cint main(){char str[10]; while(i != 0){sprintf(str, %cSully_%%d.c%c, i);FILE *fd = fopen(str, %cw%c); char *c = %c%s%c; fprintf(fd, c, 10, i--, 10, 34, 34, 34, 34, 34, c, 34, 10);}}%c"; fprintf(fd, c, 10, i--, 10, 34, 34, 34, 34, 34, c, 34, 10);}}
