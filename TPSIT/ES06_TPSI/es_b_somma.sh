/** ****************************************************************************************
* \mainpage "operazioni matematiche in bash"
* @brief Scrivere uno script  che esegua la somma di tutti gli argomenti passati allo script.
* 
* @author Lorenzo Lequile
* @version 1.0 5/03/25 versione iniziale
* @version 2.0 10/03/25 versione finale
*/
#!/bin/bash

# Inizializzazione somma
somma=0


# faccio un Ciclo while per scorrere tutti gli argomenti passati allo script
i=1
while [ $i -le $# ]; do
  # Aggiungi l'argomento seguente alla somma
  somma=$((somma + ${!i}))
  # aumenta  l'indice
  i=$((i + 1))
done

# Stampa il totale della somma
echo "La somma di tutti gli argomenti :$somma"