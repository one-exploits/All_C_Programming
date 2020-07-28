
#include <stdio.h>
#include <stdlib.h>
#define LSH_RL_BUFSIZE 1024

char *lsh_read_line(void);
int main(){
char *x;

x=lsh_read_line();
printf("%s",x);;

return 0; 	
}
char *lsh_read_line(void)
{
  int bufsize =1024;
  int position = 0;
  char *buffer = malloc(sizeof(char) * bufsize);
  printf("%d",sizeof(buffer));
  int c;

  if (!buffer) {
    fprintf(stderr, "lsh: allocation error\n");
    exit(EXIT_FAILURE);
  }

  while (1) {
    // Read a character
    c = getchar();

    // If we hit EOF, replace it with a null character and return.
    if (c == EOF || c == '\n') {
      buffer[position] = '\0';
      return buffer;
    } else {
      buffer[position] = c;
    }
    position++;

    // If we have exceeded the buffer, reallocate.
    if (position >= bufsize) {
      bufsize += LSH_RL_BUFSIZE;
      buffer = realloc(buffer, bufsize);
      if (!buffer) {
        fprintf(stderr, "lsh: allocation error\n");
        exit(EXIT_FAILURE);
      }
    }
  }
}
