BIN      = run
COMPILER = g++
CPPFLAGS = 
TARGETS  = main.o hash.o
SOURCES = main.cc hash.cc

$(BIN) : $(TARGETS)
	$(COMPILER) $(CPPFLAGS) -o $(BIN) $(TARGETS)

%.o: %.cpp
	$(COMPILER) $(CPPFLAGS) -c $<
	
clean :
	rm -f $(TARGETS) $(BIN) core *.bck
