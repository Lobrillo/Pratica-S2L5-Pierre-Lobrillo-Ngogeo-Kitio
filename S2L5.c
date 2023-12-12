#include <stdio.h>

void menu();
void moltiplica();
void dividi();
void ins_string();

int main() 
{
    char scelta = '\0';  // Modificato da {'\0'} a '\0'
    menu();
    scanf("%c", &scelta);  // Corretto %d a %c

    switch (scelta)
    {
        case 'A':
            moltiplica();
            break;
        case 'B':
            dividi();
            break;
        case 'C':
            ins_string();
            break;
        default:
            printf("Scelta non valida.\n");  // Aggiunto un caso predefinito
    }

    return 0;
}

void menu()
{
    printf("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
    printf("Come posso aiutarti?\n");
    printf("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");
}

void moltiplica()
{
    int a, b = 0;  // Modificato da short int a int
    printf("Inserisci i due numeri da moltiplicare:");
    scanf("%d%d", &a, &b);  // Modificato %f a %d, corretto l'ordine di acquisizione

    int prodotto = a * b;

    printf("Il prodotto tra %d e %d e': %d\n", a, b, prodotto);  // Aggiunto il carattere di nuova riga
}

void dividi()
{
    int a, b = 0;
    printf("Inserisci il numeratore:");
    scanf("%d", &a);
    printf("Inserisci il denominatore:");  // Corretto il typo "denumeratore" a "denominatore"
    scanf("%d", &b);

    if (b != 0)  // Aggiunto controllo per evitare la divisione per zero
    {
        int divisione = a / b;  // Modificato % a / per eseguire una vera divisione

        printf("La divisione tra %d e %d e': %d\n", a, b, divisione);
    }
    else
    {
        printf("Impossibile dividere per zero.\n");
    }
}

void ins_string() 
{
    char stringa[10];
    printf("Inserisci la stringa:");
    scanf("%9s", stringa);  // Limitato la dimensione della stringa per evitare buffer overflow
}
