#include <stdio.h>

int main() {

    // testing comment for single line
    
    /* testing
    multiline
    comment
    */

    /* Escape sequences consist of a backlash following a single letter, they specify actions within lines or string of texts.
        \n = new line
        \t = tab
        \" = brakets inside a string
        \' = single quote inside a string
        \\ = backslash inside a string
     */

    printf("I\ndon't\nlike\npickles!\n\n");
    printf("1\t22\t3\n4\t5\t6\n7\t8\t9\n\n");
    printf("\"Bazinga!\" - Some guy from a Tv Show\n");
    printf("Wow!\n");
    return 0;
}