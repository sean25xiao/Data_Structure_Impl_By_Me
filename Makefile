CXX=g++
CXXFLAGS=-Werror -std=c++17
CXXPREP=-c

TOP ?= ./       # current project directory

OBJDIR = obj

CLEAN_DIRS+=$(OBJDIR)
CLEAN_FILES+=*.o
CLEAN_FILES+=*.log

INCLUDES+=-Ids_src

# include $(TOP)/Makefile.defs

all:

obj/stack_test: obj/stack.o obj/stack_test.o
	$(CXX) $(CXXFLAGS) $^ -o $@

obj/stack_test.o: tests/stack_test.cpp
	$(CXX) $(CXXPREP) $(CXXFLAGS) $(INCLUDES) $^ -o $@

obj/stack.o: ds_src/stack.cpp
	$(CXX) $(CXXPREP) $(CXXFLAGS) $(INCLUDES) $^ -o $@