#include <iostream>

using namespace std;
//prototype
void display(int *start, int *end);

int main() {

    //Define array
    int array[] = {3, 43, 41, 36, 76, 99, 18, 45};
    display(array, array+4);
    return 0;
}


//function
//passing pointer as parameters
void display(int *start, int *end){
  int * ptr;
    for(ptr = start; ptr != end; ptr++){

       cout << *ptr << endl;
    }

}