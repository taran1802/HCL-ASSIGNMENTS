#!/bin/bash


if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <file1> <file2>"
    exit 1
fi


if [ ! -e "$1" ]; then
    echo "Error: $1 does not exist."
    exit 1
fi

if [ ! -e "$2" ]; then
    echo "Error: $2 does not exist."
    exit 1
fi


perm1=$(stat -c %A "$1")
perm2=$(stat -c %A "$2")


if [ "$perm1" == "$perm2" ]; then
    echo "Common permissions: $perm1"
else
    echo "$1: $perm1"
    echo "$2: $perm2"
fi
