##################################################	
#  __________________________________________    #	
# /\                                         \   #	
# \_| Make file for recursion program        |   #	
#   |                                        |   #	
#   |   _____________________________________|_  #	
#    \_/_______________________________________/ #	
##################################################



../bin/recursion: ../obj/recursion_main.o ../obj/recursion_functions.o
	gcc -o recursion -g ../obj/recursion_main.o ../obj/recursion_functions.o -lm
	mv recursion ../bin/

../obj/recursion_main.o: ../src/recursion_main.c ../include/recursion_header.h
	gcc -c -g -Wall ../src/recursion_main.c -I../include/
	mv recursion_main.o ../obj/

../obj/recursion_functions.o: ../src/recursion_functions.c ../include/recursion_header.h
	gcc -c -g -Wall ../src/recursion_functions.c -I../include/
	mv recursion_functions.o ../obj/

clean:
	rm ../bin/recursion
	rm ../obj/*.o	
