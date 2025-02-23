#!/bin/bash
BLU='\033[34m'
RED='\033[31m'
CYAN='\033[36m'
GREEN='\033[32m'
echo "${BLU}--- MENU ---${RESET}" 
echo "1)${RED} Mostra l'ambiente corrente ${RESET}"
echo "2)${CYAN} Mostra l'elenco dei file nella directory corrente${RESET}"
echo "3)${GREEN} Esci${RESET}"
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