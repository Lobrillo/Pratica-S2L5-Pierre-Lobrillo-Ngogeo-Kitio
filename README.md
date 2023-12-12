# Pratica-S2L5-Pierre-Lobrillo-Ngogeo-Kitio
una revisione del codice con le relative spiegazioni

Capire cosa fa il programma senza eseguirlo:
Il programma sembra essere un assistente digitale che presenta un menu all'utente con tre opzioni: moltiplicare due numeri (opzione 'A'), dividere due numeri (opzione 'B'), e inserire una stringa (opzione 'C'). L'utente può scegliere un'opzione inserendo la lettera corrispondente. Tuttavia, ci sono errori che nel codice che possono causare problemi nell'esecuzione corretta delle funzioni.

Casistiche non standard non gestite:

Nel caso della moltiplicazione ('A'), il programma utilizza la variabile a come tipo short int ma tenta di leggerla con %f nella scanf, che è destinato a float. Inoltre, la variabile b viene inizializzata a 0, il che potrebbe portare a risultati imprevisti se non viene modificata prima di essere utilizzata.
Nel caso della divisione ('B'), il programma utilizza l'operatore % che calcola il resto della divisione anziché l'operatore / per ottenere il risultato della divisione.
Nel caso dell'inserimento di una stringa ('C'), la scanf può portare a un overflow del buffer se l'utente inserisce una stringa più lunga di 9 caratteri.
Errori di sintassi / logici:

La dichiarazione di char scelta = {'\0'}; dovrebbe essere char scelta = '\0';. La graffa non è necessaria.
Nelle funzioni moltiplica e dividi, il tipo di dato per a e b dovrebbe essere coerente con la scanf. Attualmente, a viene letto come float e b come int, causando un comportamento imprevedibile.
Proposte di soluzione:

Correggere la dichiarazione di char scelta = '\0';.
Modificare short int a, b = 0; in int a, b = 0; in entrambe le funzioni moltiplica e dividi.
Cambiare %f a %d nella scanf di moltiplica.
Cambiare % a / nella formula di dividi.
Utilizzare %9s anziché %s nella scanf di ins_string per evitare buffer overflow.
