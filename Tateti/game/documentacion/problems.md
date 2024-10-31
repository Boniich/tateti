### Problems

## Game Problems




## C++ problems

### Iostream wrong input data

if in a std::cin you enter a wrong data type it will come in a infinite bucle

--- How to fix it?

First of all,std::cin doest thow a exception by default so we cannot use try cath
the solucion is check if the operator take the correct data type.

## Run-Time Check Failure #2 - Stack around the variable 'seleccion' was corrupted

I had this problem when i tried to enter data into a char array, 
this happend because i werent let space in the array for the last character '\0'
