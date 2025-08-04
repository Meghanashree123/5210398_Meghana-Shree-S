#include <stdio.h>

 int main() {

int a[2][2] , b[2][2] , c[2][2] ;

int i, j, sum = 0;


for (i=0 ; i < 2; i++) {

printf("Enter 4 values for array b[2][2]:\n"); 
for(j=0; j<2 ; j++) { 
scanf("%d", &b[i][j]); }

}

printf("Enter 4 values for array c[2] [2]:\n");

for (i=0 ;i < 2; i++) {

for(j = 0; j<2 ; j++) {

scanf("%d", &c[i][j]);

}

}for(i = 0; i<2 ;i++) {

for (j=0 ; j < 2; j++) {

a[i][j] = b[i][j] + c[i][j];

sum += a[i][j];

}

}

// Printing array a

printf("Resulting array a[2][2]=b+c:\n");


for (i=0 ;i<2 ; i++) {

for (j=0 ; j<2; j++) {

printf("%d", a[i][j]);

printf("\n");

}

}

printf("Sum of all elements in array a = %d\n", sum);

return 0;
}
