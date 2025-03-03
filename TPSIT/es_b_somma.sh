#!/bin/bash

# Inizializza la variabiile
i=1
somma=0

# Ciclo while per scorrere argomenti
while [ $i -le $# ]; do
    # Aggiungi l'argomento corrente alla somma
    somma=$((somma + ${!i}))
    i=$((i + 1))
done

# Stampa il risultato della somma
echo "La somma degli argomenti è: $somma"
