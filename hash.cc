#include "hash.hh"

hash::hash(){
    for(int i=0; i < tableSize; ++i){
        HashTable[i] = new item;
        HashTable[i]->name = "";
        HashTable[i]->drink = "";
        HashTable[i]->next = NULL;
    }
}

int hash::Hash(string key){

    int hash = 0;
    int index = 0;

    for(int i=0; i < key.length(); ++i){
        hash = hash + key[i];

    }

    index = hash % tableSize;

    return index;

} 

void hash::AddItem(string name, string drink){
    int index = Hash(name);

    if(HashTable[index]->name == ""){
        HashTable[index]->name = name;
        HashTable[index]->drink = drink;
    }
    else {
        item* ptr = HashTable[index];
        item* n = new item;
        n->name = name;
        n->drink = drink;
        n->next = NULL;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = n;

    }
}

int hash::BucketSize(int index){
    int count = 0;

    if(HashTable[index]->name == ""){
        return count;
    }
    else {
        count ++;

        item* ptr = HashTable[index];
        while(ptr->next != NULL){
            count++;
            ptr = ptr->next;
        }
        return count;
    }
}

void hash::PrintHashTable(){

    for(int i=0; i < tableSize; ++i){
        PrintBucket(HashTable[i], i);
    }
    return;
}

void hash::PrintBucket(item* bucket, int index) {

        cout << "*** HashTable[" << index << "] *****************" << endl;
        cout << "* Name:" << bucket->name << endl;
        cout << "* Drink:" << bucket->drink << endl;
        cout << "* Next:" << bucket->next << endl;
        cout << "* Bucket Size:" << BucketSize(index) << endl;
        cout << "**********************************" << endl;

        if (bucket->next != NULL){
            hash::PrintBucket(bucket->next, index);
        }

    return;
}