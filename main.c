#include <stdio.h>

int main(void) {
    float voto;
    int somma = 0;
    int conteggio = 0;
    printf("inserisci un voto (inserisci 0 per terminare): ");
    scanf("%f",&voto);
    if (voto==0) {
        break;
    }
    somma+=voto;
    conteggio++;
    if(conteggio>0) {
        float media = (float)somma / conteggio;
        printf("la media dei voti e': %.2f\n");
    }else {
        printf("nessun voto inserito.\n");
    }
    return 0;
}
