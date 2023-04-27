#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int random_num, guess, attempts = 0;
    srand(time(0));

    random_num = rand() % 100 + 1; 

    printf("Sayi tahmin oyununa hos geldiniz!\n\n");
    do {
        printf("Tahmininizi girin (1-100 arasinda): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > random_num) {
            printf("Daha kucuk bir sayi girin.\n\n");
        } else if (guess < random_num) {
            printf("Daha buyuk bir sayi giriniz \n\n");
        } else {
            printf("Tebrikler! %d. denemenizde dogru tahmin yaptiniz.\n", attempts);
        }
    } while (guess != random_num);

    return 0;
}

