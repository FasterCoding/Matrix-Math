CC=javac

SRCDIR=src
BUILDDIR=build
BINDIR=bin

BIN=MatrixMath
SRC=$(shell find . -name '*.java')
TMP=$(subst $(SRCDIR),$(BUILDDIR), $(SRC))

all: $(BIN)
	@cd bin && \
	java com.fastercoding.Main 

MatrixMath: $(SRC)
	@mkdir -p $(BINDIR)
	@echo "Compiling..."
	@$(CC) -d $(BINDIR) $^

.PHONY: clean
clean:
	@rm -rf bin build