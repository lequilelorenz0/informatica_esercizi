#!/bin/bash

# Credenziali predefinite
USERNAME_CORRETTO="$nome"
PASSWORD_CORRETTA="password123"

# Richiesta credenziali
echo -n "Inserisci il nome utente: "
read $nome

echo -n "Inserisci la password: "
read -s password

echo ""

# Verifica credenziali
if [ "$nome" = "$USERNAME_CORRETTO" ] && [ "$password" = "$PASSWORD_CORRETTA" ]; then
    echo "Accesso consentito. Buona giornata, $nome!"
else
    echo "Accesso negato. Credenziali errate."
fi
