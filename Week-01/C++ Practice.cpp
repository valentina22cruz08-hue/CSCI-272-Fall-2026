#include <iostream>
using namespace std;

int main ()
{
int numbers[] = {10, 20, 30, 40, 50};

cout << numbers[1] << endl;
cout << *(numbers+2) << endl;

for (int i = 0; i < 5; i++) {
cout << "numbers[" << i << "] ="
<< numbers [i] << ", address ='
<< &numbers[i] << endl;
}
}

Output:
20
30
numbers [O] =10, address = 0x7ffe3d7929a0
numbers [1] =20, addrese = = 0x7ffe3d7929a4
numbers [2] =30, address = 0x7ffe3d7929a8
numbers [3] =40, address = 0x7ffe3d7929ac
numbers [4] =50, address = 0x7ffe3d7929b0


