#!/bin/bash


trap '' 2 20


echo -n "Enter password: "
stty -echo
read password1
echo


echo -n "Confirm password: "
read password2
echo
stty echo


if [ "$password1" != "$password2" ]; then
    echo "Passwords do not match. Exiting..."
    exit 1
fi

echo "Terminal locked. Enter the password to unlock."


while true; do
    stty -echo
    echo -n "Enter password to unlock: "
    read attempt
    echo
    stty echo

    if [ "$attempt" == "$password1" ]; then
        echo "Terminal unlocked."
        break
    else
        echo "Incorrect password. Try again."
    fi
done


stty echo
trap 2 20

