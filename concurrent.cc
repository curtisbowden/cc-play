#include "concurrent.hh"

void foo(int x){
    cout << "thread foo():" << x << endl;
}

void bar(){
    cout << "thread bar():" << endl;
}

void concurrent(){
    thread first (&foo,100);
    thread second (&bar);

    first.join();
    second.join();

    cout << "main thread concurrent():" << endl;

}