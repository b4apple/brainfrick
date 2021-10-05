INCLUDE_DIR=include
SOURCE_DIR=src
EXEC=bin/bfcc

# debug build
debug:
	g++.exe -o $(EXEC)-debug.exe -g -I $(INCLUDE_DIR) $(SOURCE_DIR)

# release build
release:
	g++.exe -o $(EXEC)-release.exe -O3 -s -I $(INCLUDE_DIR) $(SOURCE_DIR)

clean:
	cd bin && rm -rf -r * *.*