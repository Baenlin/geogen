all:
	mkdir bin -pm 0777
	g++ ./src/*.cpp "./external/EasyBMP/EasyBMP.cpp" ./external/squirrel/*.cpp -fno-rtti -fpermissive -Wall -I "./external/squirrel" -I "./external" -o "./bin/geogen.exe"