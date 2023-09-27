#include <stdio.h>
int main(){
    int number;
    do {
        printf("Please enter the number:");
	scanf("%d", &number);
    } while (number < 1 || number > 100);
    for (int i = 1; i <= number; ++i) {
        printf("%d and then..\n", i);
    }
    printf("that's all.\n"); 
}
