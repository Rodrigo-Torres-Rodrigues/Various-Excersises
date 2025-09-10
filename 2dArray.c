#include <stdio.h>

int askCases(){
    int cases;
    printf("Write the amout of cases that you want to know the middle term.\n");
    printf("And, with enter, write the table of proposed costs, with only 3 collums");

    scanf("%d", &cases);

    return cases;
}

int main(){
    int cases; //The amount of cases that the user will write.

    cases = askCases();

    int costTable[cases][3]; //The amount of lines is the number of cases, but there will be only 3 collums


    return 0;
}