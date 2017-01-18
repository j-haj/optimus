
# Compiler
CC := g++

# Options

CFLAGS := -Wall
LIBS := -lglog
BIN := optimus

# Get source and header files

PWD := $(shell pwd)
INC_DIR := $(PWD)/include
GTEST_DIR := $(PWD)/src/googletest
BUILD_DIR := $(PWD)/build
SRC_DIR := $(PWD)/src/optimus

CPP_FILES := $(wildcard $(SRC_DIR)/*.cc)
OBJ_FILES := $(addprefix build/,$(notdir $(CPP_FILES:.cc=.o)))

all: $(OBJ_FILES)
	$(CC) $(LIBS) -o $@ $^

build/%.o: $(SRC_DIR)/%.cc build
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o $@ $<

build:
	mkdir $@

.Phony: clean
clean:
	rm -rf $(PWD)/build/
	rm -rf $(PWD)/bin/
