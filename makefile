exe:	main.o integer.o linkedlist.o object.o tdalist.o dllnode.o fsarraylist.o vsarraylist.o dlcursorlist.o 
	g++ main.o integer.o linkedlist.o object.o tdalist.o dllnode.o fsarraylist.o vsarraylist.o dlcursorlist.o -o exe

main.o:	main.cpp tdalist.h linkedlist.h integer.h vsarraylist.h fsarraylist.h dlcursorlist.h
	g++ -c main.cpp

integer.o:	integer.cpp integer.h object.h
	g++ -c integer.cpp

dllnode.o:	dllnode.cpp dllnode.h
	g++ -c dllnode.cpp

tdalist.o:	tdalist.h tdalist.cpp object.h
	g++ -c tdalist.cpp

linkedlist.o:	linkedlist.cpp linkedlist.h tdalist.h object.h
	g++ -c linkedlist.cpp

dlcursorlist.o:	dlcursorlist.cpp dlcursorlist.h tdalist.h object.h
	g++ -c dlcursorlist.cpp

object.o:	object.h object.cpp
	g++ -c object.cpp

vsarraylist.o:	vsarraylist.cpp vsarraylist.h object.h tdalist.h
	g++ -c vsarraylist.cpp

fsarraylist.o:	fsarraylist.cpp fsarraylist.h object.h tdalist.h
	g++ -c fsarraylist.cpp

clean:
	rm *.o exe
