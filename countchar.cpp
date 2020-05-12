#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100];
    int i=0,totchar=0;

    cin.getline(str,sizeof(str));
    while (str[i] != '\0')
    { if (str[i] != '\0')
        {
          totchar++;
        }    
        i++;
    }
    cout << "Total char are : " << totchar;
}