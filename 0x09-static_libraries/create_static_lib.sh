#!/bin/bash
if gcc -Wall -Werror -Wextra -pedantic -c *.c; then
  ar -rc liball.a *.o
  ranlib liball.a
fi
