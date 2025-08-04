#include <stdio.h>
int main(){

int a[5];

int i;

printf("enter the values for the array:");


for(i=0;i<5;i++){

scanf("%d", &a[i]);

}

printf("the values entered by the user are: \n");


for(i=0;i<5;i++){
 printf("%d\n",a[i]);

}

return 0;
}
