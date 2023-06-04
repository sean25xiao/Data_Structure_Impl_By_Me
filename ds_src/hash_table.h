#ifndef _MY_HASH_TABLE_  // Header Guard
#define _MY_HASH_TABLE_  // Header Guard

#include <iostream>
#include <string>
#include <vector>

template<typename T>
class c_node
{
private:
	std::string key;
	T           value;
	c_node*     next;

public:
	c_node()
		: key("Empty")
		, value(0)
		, next(NULL)
	{ }

	c_node(std::string _key, T _value)
		: key(_key)
		, value(_value)
		, next(NULL)
	{ }

	// Getter for node
	std::string get_key()   const { return key;   }
	T           get_value() const { return value; }
	c_node*     get_next()  const { return next;  }
};

#define DEFAULT_HASH_TABLE_SIZE 10

template<typename T>
class c_hash_table
{
private:
	std::vector< c_node<T>* > table;
	unsigned int item_size;  // How many items (or pairs) currently in this hash table
    unsigned int table_size; // How many entries in this hash table

	unsigned int hash_function(std::string _key)
	{
		unsigned int idx = 0;
		unsigned int power = 1;

		for (auto ch : _key) {
			idx = (idx + ch * power) % table_size;  // Avoid overflow
			power = (power * 25) % table_size;      // Avoid overflow
		}

		return idx;
	}

public:
	// Constructor
	c_hash_table()
		: table(std::vector< c_node<T>* >(DEFAULT_HASH_TABLE_SIZE, NULL))
		, item_size(0)
		, table_size(DEFAULT_HASH_TABLE_SIZE)
	{ }

	// Overloaded Constructor
	c_hash_table(unsigned int _table_size)
		: table(std::vector< c_node<T>* >(_table_size, NULL))
		, item_size(0)
		, table_size(_table_size)
	{ }

	// Destructor
	~c_hash_table()
	{
	}

	// Operations on Hash Table
	void insert(std::string _key, T _value)
	{
		unsigned int idx = hash_function(_key);
		table.at(idx) = new c_node(_key, _value);
		item_size++;
		std::cout << __FUNCTION__ << ": pairs inserted with Key=" << _key << ", idx=" << idx << ", and Value=" << _value << std::endl;
	}

	T search(std::string _key, bool &success)
	{
		unsigned int idx = hash_function(_key);
		c_node<T>* node = table.at(idx);
		if (node->get_key() == _key) {
			success = true;
			return node->get_value();
		}

		success = false;
		return 0;
	}

};

#endif
