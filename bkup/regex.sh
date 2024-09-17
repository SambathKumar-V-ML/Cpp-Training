#!/bin/bash

read -p "Enter a Date: " date
echo "You entered: $date"

pattern="^((0[1-9]|[12][0-9]|3[01]|[0-9])[-/](0[1-9]|1[0-2]|[0-9])[-/]([0-9]{4}))$"

if [[ $date =~ $pattern ]]; then
    echo "$date is in a valid format."
else
    echo "$date is not in a valid format."
fi

