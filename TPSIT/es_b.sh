#!/bin/bash

echo "--- MENU ---"
echo "1) Mostra l'ambiente corrente"
echo "2) Mostra l'elenco dei file nella directory corrente"
echo "3) Esci"
echo "Scegli un'opzione: "
read scelta


if test "$scelta" = "1"; then
    echo "L'ambiente corrente è:"
    env
elif test "$scelta" = "2"; then
    echo "Elenco dei file nella directory corrente:"
    ls
elif test "$scelta" = "3"; then
    echo "Uscita..."
else
    echo "Scelta non valida. Riprova."
fi
exit 1
