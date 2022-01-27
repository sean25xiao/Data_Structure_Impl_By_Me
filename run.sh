g++ -Werror -std=c++17 -c ./ds_src/linked_lists.cpp -o ./obj/linked_lists.o
g++ -Werror -std=c++17 -c ./tests/linked_lists_test.cpp -o ./obj/linked_lists_test.o
g++ -Werror -std=c++17 ./obj/linked_lists_test.o ./obj/linked_lists.o -o ./obj/linked_lists
./obj/linked_lists