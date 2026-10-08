/*

Demonstrate how pointers work by calling upon functions that manipulate values, swap values, retarget pointers, and using an array.

Name: Bode Reed

Date: 2026, 10, 07

*/



#include "prices.h"

#include <stdio.h>



int main(void) {

    int latte = 350;

    int *tag = &latte;

    int mocha = 450;

    int tea = 250;

    int *special = &mocha;



    printf("latte=%d addr=%p tag=%p *tag=%d\n", latte, (void *)&latte, (void *)tag, *tag);



    set_price(tag, 400);

    printf("after set_price: latte=%d\n", latte);



    printf("before swap: latte=%d mocha=%d\n", latte, mocha);

    swap_cents(&latte, &mocha);

    printf("after swap: latte=%d mocha=%d\n", latte, mocha);



    print_price("missing tag", NULL);



    printf("special was mocha %d; ", *special);

    retarget(&special, &tea);

    printf("after retarget, special is tea %d\n", *special);



    int board[] = {latte, mocha, tea};

    int *p = board;



    printf("board: %d %d %d\n", *(p + 0), *(p + 1), *(p + 2));



    return 0;

}
