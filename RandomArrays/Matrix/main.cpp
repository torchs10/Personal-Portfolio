/******************************************************************************
Generating a random Matrix      Bubble Sorting for lines
27/10/26                        27/10/26
*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

#define RIGHE 3
#define COLONNE 3

using namespace std;

int main() {
    int M[RIGHE][COLONNE];
    srand(time(NULL));
    
    FILE* fp = fopen("sequenzarandom.txt", "w");

    if(fp == NULL){
        return 0;
    }

    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            M[i][j] = rand() % 10; 
        }
    }
    
    cout << "MATRICE:\n";
    fprintf(fp, "MATRICE:\n");
    
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            printf("[%d] ", M[i][j]);
            fprintf(fp, "[%d] ", M[i][j]);
        }
        cout << endl;
        fprintf(fp, "\n");
    }
    
    for (int i = 0; i < RIGHE; i++) {
        for (int k = 0; k < COLONNE - 1; k++) {
            for (int j = 0; j < COLONNE - 1 - k; j++) {
                if (M[i][j] > M[i][j + 1]) {
                    int temp = M[i][j];
                    M[i][j] = M[i][j + 1];
                    M[i][j + 1] = temp;
                }
            }
        }
    }
    
    cout << "\nMATRICE ORDINATA:\n";
    fprintf(fp, "\nMATRICE ORDINATA:\n");
    
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            printf("[%d] ", M[i][j]);
            fprintf(fp, "[%d] ", M[i][j]);
        }
        cout << endl;
        fprintf(fp, "\n");
    }

    fclose(fp);

    return 0;
}