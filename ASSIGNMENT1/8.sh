#!/bin/bash


if [ -z "$1" ]; then
    echo "Usage: $0 <filename> [start_directory]"
    exit 1
fi

file_to_search=$1


start_directory=${2:-$(pwd)}


echo "Searching for links to '$file_to_search' starting in directory '$start_directory'"


find "$start_directory" -samefile "$file_to_search" -print
