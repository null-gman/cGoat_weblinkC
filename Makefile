cc := gcc
headers := -I./headers
cflages := -Wall -Wextra
bin := ./CwebLink.exe



all : $(bin)


$(bin) : ./objs/handleHtmlFile.o ./objs/writeFile.o ./objs/printC.o ./objs/myStrLib.o ./objs/inputStr.o ./objs/endProgram.o ./objs/main.o
	$(cc) $^ -o $@

./objs/main.o : ./src/main.c
	$(cc) $(cflages) $(headers) -c $< -o $@
./objs/writeFile.o : ./src/writeFile.c
	$(cc) $(cflages) $(headers) -c $< -o $@
./objs/printC.o : ./src/printC.c
	$(cc) $(cflages) $(headers) -c $< -o $@
./objs/myStrLib.o : ./src/myStrLib.c
	$(cc) $(cflages) $(headers) -c $< -o $@
./objs/inputStr.o : ./src/inputStr.c
	$(cc) $(cflages) $(headers) -c $< -o $@
./objs/endProgram.o : ./src/endProgram.c
	$(cc) $(cflages) $(headers) -c $< -o $@
./objs/handleHtmlFile.o : ./src/handleHtmlFile.c
	$(cc) $(cflages) $(headers) -c $< -o $@



# c_p :
# 	make && make play
play :
	$(bin)
folders :
	mkdir ./objs
clean :
	rm ./objs/* $(bin)
