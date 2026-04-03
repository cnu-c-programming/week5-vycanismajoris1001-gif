#include <stdio.h>

int main() {
  int arr[5] = {10,20,30,40,50};
  int size = 5;
  int index;

  scanf("%d", &index);

  if (scanf("%d", &index) != 1) {
        printf("숫자만 입력 가능합니다.\n");
        return 1;
    }

    if (index < 0 || index >= size) {
        printf("error\n"); 
    else {
        printf("%d\n", arr[index]);
    }
  return 0;
}
