// This program plays you in a game of Rock/Paper/Scissors
#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>
#include <vector>

using namespace std;



int main()
{
    
    // TODO
    // HANDLE EVEN INPUT
    int N;
    cout << "Give me the # of N options: ";
    cin >> N;
    
    vector< vector<int> > RPS(N);
    for (int iusr = 0; iusr < N ; iusr++)
    {
        for (int ielem = iusr; ielem < ((N-1)/2+iusr); ielem++)
        {
            RPS[iusr].push_back((ielem+1)%N);
            cout << (ielem+1)%N << endl;
        }
    }
   
    
    
    return 0;
}
