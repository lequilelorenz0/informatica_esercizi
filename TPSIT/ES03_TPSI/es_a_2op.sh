#!/bin/bash

# if per controllare che ci siano 3 argomenti
if [ $# -ne 3 ]; then
  echo "Uso: $0 <operazione> <n1> <n2>"
  exit 1
fi

# Prendo i parametri dall'echo precedente
operazione=$1
n1=$2
n2=$3

# Controllo che n1 e m2 siano numeri validi da inserire
if ! [[ "$num1" =~ ^-?[0-9]+$ ]] || ! [[ "$num2" =~ ^-?[0-9]+$ ]]; then
  echo "Errore: I parametri devono essere numeri interi."
  exit 2
fi

# operazione scelta dall'utente 
if [ "$operazione" = "add" ]; then
  echo "Risultato: $((n1 + n2))"
elif [ "$operazione" = "sub" ]; then
  echo "Risultato: $((n1 - n2))"
elif [ "$operazione" = "mul" ]; then
  echo "Risultato: $((n1 * n2))"
elif [ "$operazione" = "div" ]; then
  if [ "$n2" -eq 0 ]; then
    echo "Errore: divisione per zero!"
    exit 3
  fi
  echo "totale: $((n1 / n2))"
else
  echo "Errore!!: operazione impossibile (usa add, sub, mul, div)"
  exit 4
fi