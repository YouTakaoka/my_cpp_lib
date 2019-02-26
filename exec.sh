#!/bin/bash

PROGRAM1="$1"

text=""
while read i; do
    if [ "$i" = "" ]; then
        echo -e "$text"
        out1=$(echo -e "$text" | $PROGRAM1)
        echo "out: $out1"
        text=""
    fi
    text="${text}${i}\n"
done

echo -e "$text"
out1=$(echo -e "$text" | $PROGRAM1)
echo "out: $out1"

echo "finish."
