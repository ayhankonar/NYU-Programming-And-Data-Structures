#include <iostream>
#include "mergesort.h"
using namespace std;

int main() {
    int lst[] = {19, 2, 20, 1, 0, 18};
    merge_sort(lst,0,5);
    for (int x: lst)
        cout << x << " ";
    cout << endl;
    
}
