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

void calcMiddle(int tab[][3], int cas, int *mid){
    int i, j, high, middle, low;

    for(j = 0; j < cas; j++){
        high = tab[j][0];
        middle = tab[j][0];
        low = tab[j][0];

        for(i = 1; i < 3; i++){

            if(tab[j][i] >= high){ //it needed the '='because it would break if the user puts two equal numbers.
                high = tab[j][i];

            }if(tab[j][i] <= low){
                low = tab[j][i];

            }else{
                middle = tab[j][i]; //If the number isn't higher or lower, they are in the middle.

            }

        }

        mid[j] = middle;
    }
}

void showMid(int mid[], int cas){
    int i;

    printf("\n\nThe ones in the middle, according to the number of cases:\n");
    for(i = 0; i < cas; i++){
        printf("%d: %d |", i + 1, mid[i]);
    }

    printf("\n");

}

int main(){
    int cases; //The amount of cases that the user will write.

    cases = askCases();

    int costTable[cases][3]; //The amount of lines is the number of cases, but there will be only 3 collums

    fillTable(costTable, cases);
    showTable(costTable, cases);

    int middles[cases]; //The middle terms

    calcMiddle(costTable, cases, middles);

    showMid(middles, cases);

    return 0;
}