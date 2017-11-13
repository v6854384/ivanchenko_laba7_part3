#include<iostream>
#include<string>
using namespace std;
int main (int argc, char* argv[])
{
   string text = argv [1];
   char symbol = argv [2][0];
   char symbol2 = argv [3][0];
   for (int i=0; i<text.length(); i++)
      {
         if(text[i]==symbol)
           (text[i]=symbol2);
      }
   cout << text << endl;
}
