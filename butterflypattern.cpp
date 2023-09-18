/*BUTTERFLY PATTERN
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *
*/
#include <iostream>
using namespace std;
void butterflyPattern(int n)
{
    for(int i = 0 ; i < 2*n ; i++)
    {
         for(int j = 0 ; j <= 2*(n-1) ; j++)
            {
                if(i<n)
                {
                    if(j<=i || j>=2*(n-1)-i)
                        cout << "* ";
                    else
                        cout << "  ";
                }
                else
                {
                    if(j<=2*(n-1)-i+1 || j>=2*(n-1)-((2*n-i)-1))
                        cout << "* ";
                    else 
                        cout << "  ";
                }
            }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter number of half rows : ";
    cin >> n;
    butterflyPattern(n);
}