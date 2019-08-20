##################################################	
#  __________________________________________    #	
# /\                                         \   #	
# \_| Make file for special_number program        |   #	
#   |                                        |   #	
#   |   _____________________________________|_  #	
#    \_/_______________________________________/ #	
##################################################



../bin/special_number: ../obj/special_number_main.o ../obj/special_number_functions.o
	gcc -o special_number -g ../obj/special_number_main.o ../obj/special_number_functions.o -lm
	mv special_number ../bin/

../obj/special_number_main.o: ../src/special_number_main.c ../include/special_number_header.h
	gcc -c -g -Wall ../src/special_number_main.c -I../include/
	mv special_number_main.o ../obj/

../obj/special_number_functions.o: ../src/special_number_functions.c ../include/special_number_header.h
	gcc -c -g -Wall ../src/special_number_functions.c -I../include/
	mv special_number_functions.o ../obj/

clean:
	rm ../bin/special_number
	rm ../obj/*.o	
