#
# Makefile for Chapter 01
#
# Type  make    to compile all the programs
# in the chapter 
#
all: a.out

clean:
	rm -f a.out


a.out: sscanf.c 
	cc -o a.out sscanf.c 



