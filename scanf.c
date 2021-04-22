//
// Created by Mateus Da Costa on 22/04/2021.
//

#include <stdlib.h>
#include <stdio.h>

int main(){
    char first_name[20];
    char last_name[20];

    printf("Enter first and last name:");
    scanf("%19s %19s", first_name, last_name);

    printf("First: %s Last: %s\n", first_name, last_name);
}