/* Gabriel Nowak, 17.01.2018
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include<iostream>
using namespace std;

int sumOfMultiples(int x, int maximum) //finding sum of multiples of number given by parameter x below maximum
{
    int sum=0;
    for(int i=x;i<maximum;i+=x) sum+=i;
    return sum;
}
int sumOfBoth(int x, int y, int maximum) // finding sum of multiples which are at the same time multiples of x and y below maximum
{
    int sum=0;
    if(y<x) swap(x,y);
    for(int i=x;i<maximum;i+=x)
    {
        if(i%y==0)sum+=i;
    }
    return sum;
}

int main()
{
    int sum;
    sum=sumOfMultiples(3,1000)+sumOfMultiples(5,1000)-sumOfBoth(3,5,1000);// A+B-(A and B) because (A and B) is counted twice
    cout<<sum;
    return 0;
}
