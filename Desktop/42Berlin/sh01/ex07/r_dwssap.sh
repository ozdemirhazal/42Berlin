#!/bin/bash

FT_LINE1=$1
FT_LINE2=$2

cat /etc/passwd | grep -v '^#' | awk -F':' '{print $1}' | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr '\n' ',' | sed 's/,$/\./' | sed 's/,/, /g'
echo ''
