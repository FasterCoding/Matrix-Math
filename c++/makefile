CC=g++
CFLAGS=
LDFLAGS=

SRCDIR=src
BUILDDIR=build
BINDIR=bin

BIN=MatrixMath
SRC=$(shell find . -name '*.cpp')
TMP=$(subst $(SRCDIR),$(BUILDDIR), $(SRC))
OBJ=$(patsubst %.cpp,%.o,$(TMP))

all: $(BIN)
	@cd bin && \
	./$(BIN)

MatrixMath: $(OBJ)
	@[ ! -d $(BINDIR) ] && mkdir -p $(BINDIR)
	@$(CC) -o $(BINDIR)/$@ $^ $(LDFLAGS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp  
	@[ ! -d $(dir $@) ] && mkdir -p $(dir $@)
	@$(CC) -o $@ -c $< $(CFLAGS)
	@echo "Compiling $<"

.PHONY: clean
clean:
	@rm -rf bin build