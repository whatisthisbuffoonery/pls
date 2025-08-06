#!/bin/bash
cat /etc/passwd | grep -v "^#" | awk -F: '{print $1}' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | xargs | sed 's/ /, /g' | awk '{printf "%s.", $0}'
