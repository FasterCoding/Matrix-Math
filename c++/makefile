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
	@mkdir -p $(BINDIR)
	@echo "Linking..."
	@$(CC) -o $(BINDIR)/$@ $^ $(LDFLAGS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp 
	@mkdir -p $(dir $@)
	@echo "Compiling $<"
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean
clean:
	@rm -rf bin build