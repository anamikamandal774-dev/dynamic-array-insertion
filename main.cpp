#include <iostream>

using namespace std;

int main()
{
   int n = 6;
   int *achal = new int[n] {12, 20, 30 ,40,60, 50};
   cout<<"Array before insertion:"<<endl;

   for(int i=0; i<n; i++)
   {
       cout<<achal[i]<<" ";
   }

   int pos = 2;
   int value = 25;
   int*ptr = new int [n+1];

   for(int i = 0 ; i< pos ; i++)
   {
       ptr[i] = achal[i];
   }

   ptr[pos]= value;

   for(int i= pos; i<n; i++)
   {
       ptr[i+1]= achal[i];
   }
   cout<<"\nArray after Insertion:"<<endl;
   for(int i=0; i<n ; i++)
   {
       cout<<ptr[i]<<" ";
   }

   delete[] achal;
   delete[] ptr;
   cout<<"\n press enter to exit...";
   cin.get();
    return 0;
}
