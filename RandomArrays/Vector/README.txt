/******************************************************************************
Generating a random array       Bubble Sort
13/10/26                        23/10/26
*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#define DIM 10
using namespace std;

int main() {
    int V[DIM];
    srand(time(NULL));
    
    FILE* fp = fopen("sequenzarandom.txt", "w");

    if(fp==NULL){
        return 0;
    }

    for (int i = 0; i < DIM; i++) {
        V[i] = rand() % 10; 
    }
    
    cout<<"VETTORE:\n";
    fprintf(fp, "VETTORE:\n");
    for (int i = 0; i < DIM; i++) {
        printf ("[%d] ", V[i]);
        fprintf (fp, "[%d] ", V[i]);
    }
    
    int p = DIM;
    int j = 1;
    int k;
    do {
        k = 0;
        for (int i = 0; i < (DIM - j); i++) {
            if (V[i] > V[i + 1]) {
                int temp = V[i];
                V[i] = V[i + 1];
                V[i + 1] = temp;
                p = i;
                k = 1;
            }
        }
        j = DIM - p;
        
    } while (k==1 && j > 1);
    
    cout<<"\nVETTORE ORDINATO:\n";
    for (int i = 0; i < DIM; i++) {
        printf ("[%d] ", V[i]);
    }

    fclose(fp);
    cout << endl;

    return 0;
}
