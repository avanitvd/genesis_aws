#include<iostream>
using namespace std;

class CustomArray
{
    int niceArray[3];
    char charArray[4];
    public:
        CustomArray()
        {
            niceArray[0] = 100;
            niceArray[1] = 200;
            niceArray[2] = 300;
            charArray[0] = 'a';
            charArray[1] = 'b';
            charArray[2] = 'c';
            charArray[3] = 'd';
            cout << " def constructor ban gaya" << endl;
        }
        CustomArray(int a, int b, int c, char d, char e, char f, char g)
        {
            niceArray[0] = a;
            niceArray[1] = b;
            niceArray[2] = c;
            charArray[0] = d;
            charArray[1] = e;
            charArray[2] = f;
            charArray[3] = g;
            cout << "param constructor ban gaya" << endl;
        }

        void display()
        {
            for(int i=0; i<3; i++)
            {
                cout << "\n int array value at index:" << i << "=" << niceArray[i];
            }
            for(int i=0; i<4; i++)
            {
                cout << "\n char array value at index:" << i << "=" << charArray[i];
            }
        }

        // int operator[](int index)
        // {
        //     return niceArray[index];
        // }

        char operator[](int idx)
        {
            return charArray[idx];
        }
    
};

int main()
{
    CustomArray cuArray;
    // cuArray.display();
    cout <<  endl<<cuArray[2];
}