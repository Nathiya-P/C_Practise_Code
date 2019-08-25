              ##################################################
              #  __________________________________________    #
              # /\                                         \   #
              # \_| Make file for mywifi program           |   #
              #   |                                        |   #
              #   |   _____________________________________|_  #
              #    \_/_______________________________________/ #
              ##################################################


../bin/mywifi: ../obj/mywifi_main.o ../obj/mywifi_functions.o
	gcc -o mywifi -g ../obj/mywifi_main.o ../obj/mywifi_functions.o
	mv mywifi ../bin/

../obj/mywifi_main.o: ../src/mywifi_main.c ../include/mywifi_header.h
	gcc -c -g -Wall ../src/mywifi_main.c -I../include/
	mv mywifi_main.o ../obj/

../obj/mywifi_functions.o: ../src/mywifi_functions.c ../include/mywifi_header.h
	gcc -c -g -Wall ../src/mywifi_functions.c -I../include/
	mv mywifi_functions.o ../obj/

clean:
	rm ../bin/mywifi
	rm ../obj/*.o


