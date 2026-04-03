#include <stdio.h>

long my_strtol(char* str, char** endptr) {
  long res = 0;
  while (*p >= '0' && *p <= '9') {

        res = res * 10 + (*p - '0');
        p++; 
    }

    if (endptr != NULL) {
        *endptr = p;
    }
 return res;
}

int main() {
  char str[] = "2026hello";
  char* end;

  long val = my_strtol(str, &end);

  printf("%ld %s\n", val, end);
  return 0;
}
