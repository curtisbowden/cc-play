#ifndef HASH_HH
#define HASH_HH

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class hash {
    private:
        static const int tableSize = 10;

        struct item {
            string name;
            string drink;
            item* next;
        };

        item* HashTable[tableSize];

    public:
        hash();
        int Hash(string key);
        void AddItem(string name, string drink);
        int BucketSize(int index);
        void PrintHashTable();
        void PrintBucket(item* bucket, int index);


};

#endif
