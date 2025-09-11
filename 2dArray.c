#include <stdio.h>

//Gets the amount of times that the user will do.
int getTime(){
    int amountTimes;

    scanf("%d", &amountTimes);

    return amountTimes;
}

//Gets the amount of lines and collums that the 2d array will have.
int getLinColTable(){
    int linColTable;

    scanf("%d", &linColTable);

    return linColTable;

}
int main(){
    int linCol = getLinColTable();
    int times = getTimes(); //The amount of cases that the user will do.
    
    int table[times][linCol][linCol]; //It needs to always be a square matrice.

    

    return 0;
}