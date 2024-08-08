#!/bin/bash


echo -n "Enter the file name: "
read file_name


if [ ! -e "$file_name" ]; then
    echo "Error: File '$file_name' does not exist."
    exit 1
fi


echo "File properties for '$file_name':"
stat "$file_name"
