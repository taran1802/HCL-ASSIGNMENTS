#!/bin/bash


if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <directory>"
    exit 1
fi


if [ ! -d "$1" ]; then
    echo "Error: $1 is not a valid directory."
    exit 1
fi


max_length=0


find_max_length() {
    for file in "$1"/*; do
        if [ -f "$file" ]; then
            file_length=$(wc -c < "$file")
            if [ "$file_length" -gt "$max_length" ]; then
                max_length=$file_length
            fi
        elif [ -d "$file" ]; then
            find_max_length "$file"
        fi
    done
}


find_max_length "$1"


echo "Maximum file length: $max_length bytes"

