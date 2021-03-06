Translate
#!/bin/bash
echo -e "\033[32;1m"NORM"\033[m"
read $a
norminette -R CheckForbiddenSourceHeader ./*.c ./*.h ./*/*.c ./*/*.h

#echo -e "\n\033\033[32;1m"Hyxogen-test"\033[m"
#read $a
#make bonus
#git clone git@github.com:Hyxogen/printfTester.git Hyxogen
#cd Hyxogen/
#git submodule init
#git submodule update
#bash runTests.sh
#cd ..

echo -e "\n\033\033[32;1m"paulo-test"\033[m"
read $a
make bonus
git clone https://github.com/paulo-santana/ft_printf_tester.git
cd ft_printf_tester/
#make
sh test m
sh test b1
sh test b2
cd ..

echo -e "\n\033\033[32;1m"Tripouille-test"\033[m"
read $a
rm -rf ft_printf_tester/
make bonus
git clone https://github.com/Tripouille/printfTester.git
cd printfTester/
#make m
make b
cd ..

echo -e "\n\033\033[32;1m"joppiesaus-test"\033[m"
read $a
rm -rf printfTester/
make bonus
git clone https://github.com/joppiesaus/ft_printf-tester.git testest
cd testest/
#make
#./test
 ./test b
cd ..

echo -e "\n"
echo -e "\n\033\033[32;1m"make fclean"\033[m"
rm -rf testest/
read $a
make fclean
ls
echo -e "\n"
echo -e "\n\033\033[32;1m"make clean"\033[m"
read $a
make
make clean
ls
echo -e "\n"
echo -e "\n\033\033[32;1m"make all"\033[m"
read $a
make all
ls
echo -e "\n"
echo -e "\n\033\033[32;1m"make bonus"\033[m"
read $a
make bonus
ls
echo -e "\n"
echo -e "\n\033\033[32;1m"relink"\033[m"
read $a
make
echo -e "\n"
echo -e "\n\033\033[32;1m"DONE"\033[m"

make fclean

