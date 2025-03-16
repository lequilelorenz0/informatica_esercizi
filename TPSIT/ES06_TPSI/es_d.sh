#!/bin/bash

# Verifica che sia stato passato un argomento
if [ "$1" = "" ]; then
    echo "Uso: $0 <numero argomento passato>"
    exit 1
fi

numero_righe=$1

# Stampa del triangolo 
i=$numero_righe
while [ $i -gt 0 ]; do
    j=$i
    while [ $j -gt 0 ]; do
        echo -n "*"
        j=$((j - 1))
    done
    echo
    i=$((i - 1))
done


