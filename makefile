
BIN      = run
COMPILER = g++
CPPFLAGS = -std=c++11
TARGETS  = main.o hash.o concurrent.o
SOURCES = main.cc hash.cc concurrent.cc

$(BIN) : $(TARGETS)
	$(COMPILER) $(CPPFLAGS) -o $(BIN) $(TARGETS)

%.o: %.cpp
	$(COMPILER) $(CPPFLAGS) -c $<
	
clean :
	rm -f $(TARGETS) $(BIN) core *.bck
