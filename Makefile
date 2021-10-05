INCLUDE_DIR=include
SOURCE_DIR=src

debug:
	g++.exe -o bfcc.exe -g -I include src/*.c

release:
	g++.exe -o bfcc.exe -O3 -s -I include src/*.c