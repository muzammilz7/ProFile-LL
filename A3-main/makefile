proFile: recruitEmployee.o printAll.o printOne.o lookOnId.o lookOnFullName.o countEmployees.o sortEmployeesId.o fireOne.o fireAll.o mainA3.o helperA3.o
	gcc -std=c99 -Wall recruitEmployee.o printAll.o printOne.o lookOnId.o lookOnFullName.o countEmployees.o sortEmployeesId.o fireOne.o fireAll.o mainA3.o helperA3.o -o bin/proFile
recruitEmployee.o: src/recruitEmployee.c include/headerA3.h
	gcc -std=c99 -Wall -c src/recruitEmployee.c
printAll.o: src/printAll.c include/headerA3.h
	gcc -std=c99 -Wall -c src/printAll.c
printOne.o: src/printOne.c include/headerA3.h
	gcc -std=c99 -Wall -c src/printOne.c
lookOnId.o: src/lookOnId.c include/headerA3.h
	gcc -std=c99 -Wall -c src/lookOnId.c
lookOnFullName.o: src/lookOnFullName.c include/headerA3.h
	gcc -std=c99 -Wall -c src/lookOnFullName.c
countEmployees.o: src/countEmployees.c include/headerA3.h
	gcc -std=c99 -Wall -c src/countEmployees.c
sortEmployeesId.o: src/sortEmployeesId.c include/headerA3.h
	gcc -std=c99 -Wall -c src/sortEmployeesId.c
fireOne.o: src/fireOne.c include/headerA3.h
	gcc -std=c99 -Wall -c src/fireOne.c
fireAll.o: src/fireAll.c include/headerA3.h
	gcc -std=c99 -Wall -c src/fireAll.c
mainA3.o: src/mainA3.c include/headerA3.h
	gcc -std=c99 -Wall -c src/mainA3.c
helperA3.o: src/helperA3.c include/headerA3.h
	gcc -std=c99 -Wall -c src/helperA3.c
clean:
	rm *.o bin/proFile
