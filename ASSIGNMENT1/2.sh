#!/bin/bash


if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <path>"
    exit 1
fi


mkdir -p "$1"


if [ $? -eq 0 ]; then
    echo "Directories created successfully: $1"
else
    echo "Failed to create directories: $1"
    exit 1
fi
