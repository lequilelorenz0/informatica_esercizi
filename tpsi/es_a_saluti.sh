#!/bin/bash

clear

# Chiede il nome all'utente
echo -n "Inserisci il tuo nome: "
read nome
echo "ciao $nome"

# Chiede l'orario all'utente
echo "inserisci l'orario:"
echo -n "Inserisci l'orario attuale (0-23): "
read orario

# Controlla se l'orario è un numero valido
if  [ $orario -lt 12 ]; then
    echo "buongiorno $nome"
elif [ $orario -gt 19 ]; then
    echo "buonanotte $nome"
else
    echo "buon pomeriggio $nome"
fi

exit 0