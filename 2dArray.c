#include <stdio.h>

int askCases(){
    int cases;
    printf("Write the amout of cases that you want to know the middle term.\n");
    printf("And, with enter, write the table of proposed costs, with only 3 collums:\n\n");

    scanf("%d", &cases);

    return cases;
}

void fillTable(int (*table)[3], int cases){
    int i, j;
    for(j = 0; j < cases; j++){

        for(i = 0; i < 3; i++){
            scanf("%d", *(table[cases] + i));
        }
    }
}

int main(){
    int cases; //The amount of cases that the user will write.

    cases = askCases();

    int costTable[cases][3]; //The amount of lines is the number of cases, but there will be only 3 collums

    fillTable(costTable, cases);

    return 0;
}