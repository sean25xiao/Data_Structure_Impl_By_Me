all: test-linked_lists test-binary_tree

.PHONY: test-stack
test-stack:
	mkdir -p ./obj
	g++ -Werror -std=c++17 -c ./ds_src/stack.cpp -o ./obj/stack.o
	g++ -Werror -std=c++17 -c ./tests/stack_test.cpp -o ./obj/stack_test.o
	g++ -Werror -std=c++17 ./obj/stack_test.o ./obj/stack.o -o ./obj/stack
	./obj/stack

.PHONY: test-linked_lists
test-linked_lists:
	mkdir -p ./obj
	g++ -Werror -std=c++17 -c ./ds_src/linked_lists.cpp -o ./obj/linked_lists.o
	g++ -Werror -std=c++17 -c ./tests/linked_lists_test.cpp -o ./obj/linked_lists_test.o
	g++ -Werror -std=c++17 ./obj/linked_lists_test.o ./obj/linked_lists.o -o ./obj/linked_lists
	./obj/linked_lists

.PHONY: test-binary_tree
test-binary_tree:
	mkdir -p ./obj
	g++ -Werror -std=c++17 -c ./ds_src/binary_tree.cpp -o ./obj/binary_tree.o
	g++ -Werror -std=c++17 -c ./tests/binary_tree_test.cpp -o ./obj/binary_tree_test.o
	g++ -Werror -std=c++17 ./obj/binary_tree_test.o ./obj/binary_tree.o -o ./obj/binary_tree
	./obj/binary_tree

.PHONY: clean
clean:
	rm -rf ./obj *.log *.o *.out