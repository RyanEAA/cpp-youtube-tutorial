

// pointers can interact with memory addresses and can be used to manipulate data in memory
#include <iostream>

int main(){
    int life;
    life = 4;

    int card;
    card = 40;
    int my_card = card;

    int* card_ptr = &card; 
    printf("card memory address is %p\n",card_ptr);
    printf("value of card is %d\n", card);
    printf("value of card using pointer is %d\n", *card_ptr);

    // & is the address of the operator
}