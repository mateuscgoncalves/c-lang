//
// Created by Mateus Da Costa on 15/04/2021.
//

#include <stdlib.h>
#include <stdio.h>

void fortune_cookie(char msg[]){
    printf("Message reads: %s\n", msg);

    //Exibe o sizeof do ponteiro
    printf("msg occupies %i bytes\n", sizeof(msg));
}

int main(){
    char quote[] = "Cookies make you fat";

    //Passa o ponteiro da variavel quote
    fortune_cookie(quote);

    //C entende que nesse caso queremos o sizeof da array, não só do ponteiro
    printf("quote occupies %i bytes\n", sizeof(quote));

    printf("The quote string is stored at: %p\n", quote);
}