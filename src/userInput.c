#include <stdio.h>
#include <string.h>

int main(){

    // fgets in case of white spaces, scanf if no white spaces
    //fgets(variable name, character size limit of the answer, standard input)
    //scanf("%type of variable", &variable's pointer)


    char name[100];
    char month[20];
    int day;

    printf("\nWhat's you full name? ");
    fgets(name, 100, stdin);
    //to remove the \n at the end of the input
    name[strlen(name) - 1] = '\0';

    printf("What day is today? ");
    scanf("%d", &day);

    printf("What month is it? ");
    scanf("%s", &month);

    printf("\nHello %s, today is %s %dth.", name, month, day);

    return 0;
}