#include <stdio.h>

void sum(int, int); // Function declaration

void sum(int a, int b) {

int c = a + b;

printf("sum = %d", c);

}

int main() {

sum(2, 3); // Correct function call

return 0;

}
