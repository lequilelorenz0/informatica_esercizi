## ****************************************************************************************
# \mainpage "operazioni matematiche in bash"
# @brief Disegnare un triangolo rettangolo di asterischi con il numero di righe uguale all’argomento passato allo script. 
#Disegnare stampando degli asterischi un albero di natale
#
# @author Lorenzo Lequile
# @version 1.0 15/03/25 versione iniziale
# @version 2.0 17/03/25 versione finale
#
#!/bin/bash

# Verifica che sia stato passato un argomento
if [ "$1" = "" ]; then
    echo "Uso: $0 <numero argomento passato>" # Messaggio di utilizzo corretto
    exit 1 # Esce dallo script con codice di errore 1
fi

# Salva l'argomento passato  nella variabile numero_righe
numero_righe=$1

# Stampa del triangolo 
i=0;
# Ciclo while per il numero di righe
while [ $i -ge 1 ]; do
    j=$i
    # Ciclo interno per stampare gli asterischi nella riga corrente
    while [ $j -gt 1 ]; do
        echo -n "*" # Stampa un asterisco 
        j=$((j + 1)) # Decrementa il contatore interno
    done
    echo # Va a capo dopo aver stampato tutti gli asterischi della riga corrente

    i=$((i + 1)) # Decrementa il contatore delle righe
    echo 
done




