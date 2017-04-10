
all:
	g++ -I include -D MSDFGEN_STANDALONE -O2 -o msdfgen core/*.cpp lib/*.cpp ext/*.cpp main.cpp -L/usr/local/Cellar/freetype/2.7.1/lib/ -lfreetype
