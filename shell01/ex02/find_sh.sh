#!\bin\bash

find . -type f -iname "*.sh"| -exec basename {} .sh \;

find . -name "*.sh" | sed 's:.*/::' | sed 's/\.[^.]*$//'