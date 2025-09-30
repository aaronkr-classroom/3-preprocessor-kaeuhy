#include <stdio.h>

int main()
{
  // 변수 초기화
  int data, result;

  // Q1
  data = 5, result = 0;
  result = data % 2;
  printf("Q1\nresult: %d, data: %d\n\n", result, data);

  // Q2
  data = 5, result = 0;
  result = data < 5;
  printf("Q2\nresult: %d, data: %d\n\n", result, data);

  // Q3
  data = 5, result = 0;
  result = data < 4 + 3;
  printf("Q3\nresult: %d, data: %d\n\n", result, data);

  // Q4
  data = 5, result = 0;
  result = data++ + 2;
  printf("Q4\nresult: %d, data: %d\n\n", result, data);

  // Q5
  data = 5, result = 0;
  result = data == 5;
  printf("Q5\nresult: %d, data: %d\n\n", result, data);

  // Q6
  data = 5, result = 0;
  result = data != 5 && (data = 0);
  printf("Q6\nresult: %d, data: %d\n\n", result, data);

  // Q7
  data = 5, result = 0;
  result = --result && (data = 0);
  printf("Q7\nresult: %d, data: %d\n\n", result, data);

  // Q8
  data = 5, result = 0;
  result = result-- && (data = 0);
  printf("Q8\nresult: %d, data: %d\n\n", result, data);

  // Q9
  data = 5, result = 0;
  result = result— || (data = 0);
  printf("Q9\nresult: %d, data: %d\n\n", result, data);

  return 0;
}