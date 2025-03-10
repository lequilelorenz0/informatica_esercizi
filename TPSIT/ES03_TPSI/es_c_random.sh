/** ****************************************************************************************
* \mainpage "operazioni matematiche in bash"
* @brief indovina il numero segreto digitando un numero da 1 a 100.
* 
* @author Lorenzo Lequile
* @version 1.0 8/03/25 versione iniziale
* @version 2.0 10/03/25 versione finale
*/

#!/bin/bash

# Genera un numero casuale tra 1 e 100
numero_segreto=$((RANDOM % 100 + 1))
tentativi=0  # tentativi massimi che utente può per indovinare il numero
tentativi_max=10

echo "Benvenuto al gioco bash:Indovina il Numero randomico"
echo "fai una scelta tra 1 e 100!"

# Ciclo while per attivare il gioco 
while [ $tentativi -lt $tentativi_max ]; do
  echo -n "digita il  numero a tua scelta: "
  read num_scelto

  # Controlla se il numero inserito sia intero
  if ! [[ "$num_scelto" =~ ^[0-9]+$ ]]; then
    echo "Inserisci un numero valido"
    continue
  fi

  tentativi=$((tentativi + 1))  # incremento di 1 i tentativi

  # Controllo se il numero inserito è uguale al numero segreto
  if [ "$num_scelto" -eq "$num_segreto" ]; then
    echo "Complimenti! Hai indovinato il numero in $tentativi tentativi."
    exit 0
  elif [ "$num_scelto" -lt "$num_segreto" ]; then
    echo "riprova,troppo basso!"
  else
    echo "riprova,troppo alto!"
  fi
done

# Se si superano i tentativi massimi dall'utente
echo "Hai superato il numero massimo di tentativi!Se vuoi riprovare!  Il numero segreto era $num_segreto!."
exit 1