#!/bin/bash

FT_NBR1=$1
FT_NBR2=$2

FT_NBR1_DEC=$(echo "$FT_NBR1" | tr "'"?!" "0123" | bc)

FT_NBR2_DEC=$(echo "$FT_NBR2" | tr "mrdoc" "01234" | bc)

SUM=$(($FT_NBR1_DEC + $FT_NBR2_DEC))

to_gtaio_luSnemf() {
    local num=$1
    local base="gtaio luSnemf"
    local result=""

    while [ $num -gt 0 ]; do
        result="${base:num % ${#base}:1}$result"
        num=$(($num / ${#base}))
    done

    echo "$result"
}

RESULT=$(to_gtaio_luSnemf $SUM)
echo $RESULT
