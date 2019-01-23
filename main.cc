#include <iostream>
#include <string>

#include "hash.hh"
#include "concurrent.hh"

using std::cout;
using std::endl;

int main(int argc, char **argv){

    int index;
    hash hashObject;

    hashObject.AddItem("Curt", "water"); 
    hashObject.AddItem("Joe", "beer");
    hashObject.AddItem("Moe", "beer");
    hashObject.AddItem("Sue", "coffee"); 
    hashObject.AddItem("Jerry", "milk");
    hashObject.AddItem("Tom", "water");
    hashObject.AddItem("Leslie", "tea"); 
    hashObject.AddItem("Ron", "scotch");
    hashObject.AddItem("Anne", "wine");
    hashObject.PrintHashTable();

    concurrent();

    return 0;
}