cc := gcc
headers : = -I./headers
cflages := -Wall -Wextra
bin := ./CwebLink.exe



all : $(bin)


$(bin) : ./objs/createHtmFile.o ./objs/printC.o ./objs/myStrLib.o ./objs/inputStr.o ./objs/endA.o

./objs/createHtmFile.o : ./src/createHtmFile.c
	$(cc) $(cflages) $(headers) -c $< -o $@
./objs/printC.o : ./src/printC.c
	$(cc) $(cflages) $(headers) -c $< -o $@
./objs/myStrLib.o : ./src/myStrLib.c
	$(cc) $(cflages) $(headers) -c $< -o $@

./objs/inputStr.o : ./src/inputStr.c
	$(cc) $(cflages) $(headers) -c $< -o $@

./objs/endA.o : ./src/endA.c
	$(cc) $(cflages) $(headers) -c $< -o $@



play :
	$(bin)
folders :
	mkdir ./objs

clean :
	rm ./objs/* $(bin)
