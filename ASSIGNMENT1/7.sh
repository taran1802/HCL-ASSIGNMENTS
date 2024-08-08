#!/bin/bash


if [ "$#" -eq 0 ]; then
    echo "Usage: $0 <filename1> <filename2> ..."
    exit 1
fi


for filename in "$@"
do
    
    if [ -e "$filename" ]; then
       
        tr '[:lower:]' '[:upper:]' < "$filename" > temp_file && mv temp_file "$filename"
        echo "Converted $filename to uppercase."
    else
        
        echo "Error: File '$filename' does not exist in the current directory."
    fi
done
