
TOP ?= ./  # current project directory

# include $(TOP)/Makefile.defs

all: build_msg
  @echo "start compile"

.PHONY: build_msg
build_msg:
  @echo "======== test ========"

.PHONY: clean
clean:
  @rm -rf CLEAN_DIRS CLEAN_FILES