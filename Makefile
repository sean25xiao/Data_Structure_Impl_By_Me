CXX=g++
CXXFLAGS=-Werror -std=c++17
CXXPREP=-c

# current project directory
TOP ?= ./

# ./obj
OBJDIR = $(TOP)obj
# ./ds_src
DS_SRC_DIR=$(TOP)ds_src
# ./tests
DS_TST_DIR=$(TOP)tests

CLEAN_DIRS+=$(OBJDIR)
CLEAN_FILES+=*.o
CLEAN_FILES+=*.log

#INCLUDES+=-Ids_src

DS_NAME+=binary_tree
# binary_tree_test
DS_TEST_NAME+=$(addsuffix _test, $(DS_NAME))

# binary_tree.cpp
DS_SRC_NAME=$(addsuffix .cpp, $(DS_NAME))
# binary_tree.o
DS_OBJ_NAME=$(addsuffix .o, $(DS_NAME))

# binary_tree_test.cpp
DS_TEST_SRC_NAME=$(addsuffix .cpp, $(DS_TEST_NAME))
# binary_tree_test.o
DS_TEST_OBJ_NAME=$(addsuffix .o, $(DS_TEST_NAME))


all: build_obj $(OBJDIR)/$(DS_NAME)

$(OBJDIR)/$(DS_NAME): $(OBJDIR)/$(DS_OBJ_NAME) $(OBJDIR)/$(DS_TEST_OBJ_NAME)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJDIR)/$(DS_TEST_OBJ_NAME): $(DS_TST_DIR)/$(DS_TEST_SRC_NAME)
	$(CXX) $(CXXPREP) $(CXXFLAGS) $^ -o $@

$(OBJDIR)/$(DS_OBJ_NAME): $(DS_SRC_DIR)/$(DS_SRC_NAME)
	$(CXX) $(CXXPREP) $(CXXFLAGS) $^ -o $@

.PHONY: build_obj
build_obj:
	@mkdir -p obj/

.PHONY: clean
clean:
	rm -rf $(CLEAN_DIRS) $(CLEAN_FILES)