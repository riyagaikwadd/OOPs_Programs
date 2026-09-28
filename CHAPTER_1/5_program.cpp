#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int array[n]={1,2,3,4,55};
    int largest=array[0];
    for(int i=0;i<n;i++)
    {
        if(array[i]>largest)
        {
            largest=array[i];
        }
    }
    cout<< "Largest element : "<<largest;
    return 0;
}
