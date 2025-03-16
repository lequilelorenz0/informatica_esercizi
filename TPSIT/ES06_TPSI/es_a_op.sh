/** ****************************************************************************************
* \mainpage "operazioni matematiche in bash"
* @brief crivere uno script esegua delle operazione matematiche con tutti i tre argomenti passati allo script.
  Il primo argomento è l’operazione da eseguire, il secondo e il terzo sono gli operandi
* 
* @author Lorenzo Lequile
* @version 1.0 8/03/25 versione iniziale
* @version 2.0 10/03/25 versione finale
*/

#!/bin/bash

# Controllo  3 argomenti
if [ $# -ne 3 ]; then
    echo "Uso: $0 <operazione> <n1> <n2>"
    exit 1
fi
operz=$1
N1=$2
N2=$3

# Eseguiamo l'operazione digitata
if [ "$operazione" = "add" ]; then
    echo "Risultato: $((N1 + N2))"
elif [ "$operazione" = "sub" ]; then
    echo "Risultato: $((N1 - N2))"
elif [ "$operazione" = "mul" ]; then
    echo "Risultato: $((N1 * N2))"
elif [ "$operazione" = "div" ]; then
    if [ "$ N2" -eq 0 ]; then
        echo "Errore: divisione per zero!"
        exit 2
    fi
    echo "Risultato: $((N1 / N2))"
else
    echo "Errore: operazione non supportata (usa add, sub, mul, div)"
    exit 3
fi
