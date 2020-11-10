// Reverse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int swap(int* a, int* b);

int main()
{
    int  A[10] = {1,2,2,3,4,5,6,6,4,7};
    int  B[10] = {1,2,2,7,6,5,4,5,4,3 };
    bool equal = true;
    int  index = 10;
    int  c = 1;

    for (int i = 0; i < index;)
    {
        if (A[i] == B[i])
        {
            i++;  //Everything Ok
            c = 1;
            equal = true;
        }
        else
        {
            equal = false;
            swap(&B[i], &B[index - c]);
            
            if ((index - c) >= i) c++;
            else
                break;  //Will not match
        }

    }

    std::string output = "Match: ";
    output = output.append((equal == false) ? "false" : "true");
    std::cout << output << std::endl;
}

int swap(int* a, int* b)
{
    int swap_int = 0;
    
    swap_int = *a;
    *a = *b;
    *b = swap_int;

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
