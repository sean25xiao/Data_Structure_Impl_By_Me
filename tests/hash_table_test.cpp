#include <iostream>
#include <vector>
#include <assert.h>
#include <gtest/gtest.h>
#include "../ds_src/hash_table.h"

// Insert one pair and search that pair
TEST(HashTableTest, AdHoc)
{
	c_hash_table<int> hashTable(10);
	hashTable.insert("Burger", 15);

	bool is_success = false;
	int result = hashTable.search("Burger", is_success);

    EXPECT_EQ(true, is_success);
    EXPECT_EQ(15  , result);
}

// Test Drive
int main (int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  //testing::GTEST_FLAG(filter) = "HashTableTest*";
  return RUN_ALL_TESTS();
}
