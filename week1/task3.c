#include <stdio.h>

int main(){
    int number;
    printf("Please enter the number:");
    scanf("%d", &number);
    for(int i = 1; i < number + 1; ++i){
        printf("%d and then..\n", i);
    }
    printf("that's all.\n");
    return 0;
}
