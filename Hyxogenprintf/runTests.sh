#!/bin/bash
clear

#Colors
BLACK="\033[0;30m"
RED="\033[0;31m"
GREEN="\033[0;32m"
ORANGE="\033[0;33m"
BLUE="\033[0;34m"
PURPLE="\033[0;35m"
CYAN="\033[0;36m"
LIGHT_GRAY="\033[0;37m"

DARK_GRAY="\033[1;30m"
LIGHT_RED="\033[1;31m"
LIGHT_GREEN="\033[1;32m"
YELLOW="\033[1;33m"
LIGHT_BLUE="\033[1;34m"
LIGHT_PURPLE="\033[1;35m"
LIGHT_CYAN="\033[1;36m"
WHITE="\033[1;37m"

RESET="\033[0m"

FT_PRINTF_DIR="../"
FT_PRINTF_INCLUDE_DIR="${FT_PRINTF_DIR}/include"

WAIT="0"

SetColor() {
	printf "$1"
}

SetColor "$LIGHT_BLUE"
printf "\n/---------------------------------------------\\"
SetColor "$LIGHT_GREEN"
printf "\n|         A ft_printf tester by dmeijer       |"
printf "\n|    version: 2.0       license: apache 2.0   |"
SetColor "$LIGHT_BLUE"
printf "\n\\---------------------------------------------/"
sleep "$WAIT"

printf "\n"

SetColor "$YELLOW"
printf "Building your ft_printf...\n"
SetColor "$BLUE"
make -C "$FT_PRINTF_DIR" fclean
make -C "$FT_PRINTF_DIR"
SetColor "$YELLOW"
printf "Done!\n"
printf "Building tester...\n"
SetColor "$BLUE"
make distribution
SetColor "$YELLOW"
printf "Done!\n"
SetColor "$RESET"
./printfTester 2>deepthought