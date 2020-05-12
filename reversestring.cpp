#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
/*     char str[100];
    int i,len,temp;
    cout << " Enter a string : \n";
    cin >> str;
    len = strlen(str);
    for (i=0;i<len/2;i++)
    {
        temp = str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    cout << "reversed : " << str << "\n"; */


    char str[100];
    int i=0,len,temp;
    cout << " Enter a string : \n";
    cin >> str;
    len = strlen(str);
    while (i<len/2)
    {
        temp = str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
        i++;
    }
    cout << "reversed : " << str << "\n";


}
