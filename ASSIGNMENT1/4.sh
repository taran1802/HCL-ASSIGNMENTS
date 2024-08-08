#!/bin/bash


if [ "$#" -eq 0 ]; then
    echo "Error: No login names provided."
    echo "Usage: $0 <login_name1> <login_name2> ..."
    exit 1
fi


for username in "$@"
do
   
    if id "$username" &>/dev/null; then
        
        home_directory=$(getent passwd "$username" | cut -d: -f6)
        echo "Home directory of $username: $home_directory"
    else
      
        echo "Error: User $username does not exist."
    fi
done
