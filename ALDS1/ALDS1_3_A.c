#include <ctype.h>
#include <stdio.h>

int stack[100];
int top;

void push(int a) {
  top++;
  stack[top] = a;
}

int pop() {
  top--;
  return stack[top + 1];
}

int main() {
  char s[100];
  int a;
  int b;

  while (scanf("%s", s) != EOF) {
    if (isdigit(s[0])) {
      push(atoi(s));
    } else {
      a = pop();
      b = pop();
      if (s[0] == '+') {
        push(a + b);
      } else if (s[0] == '-') {
        push(a - b);
      } else if (s[0] == '*') {
        push(a * b);
      }
    }
  }

  printf("%d\n", pop());

  return 0;
}
