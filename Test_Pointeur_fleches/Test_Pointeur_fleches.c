#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int hauteur = 10;
int largeur = 20;
int increment, increment2, increment3, x = 1, y = 1;
signed int VAL = 0;
void displaygrid() {
    printf("\n");
    for (increment = 1; increment <= largeur; increment++) {
        printf("_");
    }
    printf("\n");
    for (increment2 = 1; increment2 < hauteur; increment2++) {
        printf("|");
        for (increment3 = 1; increment3 < largeur; increment3++) {
            if (increment3 == x && increment2 == y) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("|");
        printf("\n");
    }
    for (increment = 1; increment <= largeur; increment++) {
        printf("-");
    }
}
void main(){
    displaygrid();
    while (1) {
        VAL = _getch();
        if (VAL == 77) {
            system("cls");
            x++;
            displaygrid();
        }
        if (VAL == 75) {
            system("cls");
            x--;
            displaygrid();
        }
        if (VAL == 72) {
            system("cls");
            y--;
            displaygrid();
        }
        if (VAL == 80) {
            system("cls");
            y++;
            displaygrid();
        }
        if (x > largeur) {
            x = 2;
        }
        else if (x < 1) {
            x = largeur;
        }
        if (y > hauteur) {
            y = 2;
        }
        else if (y < 1) {
            y = hauteur;
        }
    }

}

