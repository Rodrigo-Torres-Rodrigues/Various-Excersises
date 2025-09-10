#include <stdio.h>
#include <stdbool.h>

int askCases(){
    int cases;
    printf("Write the amout of cases that you want to know the middle term.\n");
    printf("And, with enter, write the table of proposed costs, with only 3 collums:\n\n");

    scanf("%d", &cases);

    return cases;
}

void fillTable(int (*table)[3], int cases){
    int i, j;

    //it also works if the user write with spaces.
    for(j = 0; j < cases; j++){

        for(i = 0; i < 3; i++){
            scanf("%d", table[j] + i);
        }
    }
}

//Shows the table
void showTable(int tab[][3], int cas){
    int i, j;
    for(j = 0; j < cas; j++){

        for(i = 0; i < 3; i++){
            printf(" %d |", tab[j][i]);
        }
        printf("\n");
    }
}

void calcTable(int tab[][3], int cas, int *mid[]){
    int i, j, lin;
    bool middle = false;

    for(lin = 0; lin < cas; lin++){

        for(i = 0; middle = false; i++){
        }
    }
}

int main(){
    int cases; //The amount of cases that the user will write.

    cases = askCases();

    int costTable[cases][3]; //The amount of lines is the number of cases, but there will be only 3 collums

    fillTable(costTable, cases);
    showTable(costTable, cases);

    int middles[cases]; //The middle terms

    calcMiddle(costTable, cases, middles);

    return 0;
}