#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

int rps(int a,int b)
{
    /*
     rock = 0
     paper = 1
     scissors = 2
     */
    if(a==b)
        return 0;
    if((a==1 && b==0) || (a==2 && b==1) || (a==0 && b==2))
        return 1; //user wins
    else
        return 2; //computer wins
}

int main()
{
    int len;
    int user;
    int draw = 0;
    int player = 0;
    int computer = 0;
    string rk = "Rock";
    string pr = "Paper";
    string sc = "Scissors";
    
    string us;
    string co;
    
    cout << "Best out of?" << endl;
    cin >> len;
    if(len < 3)
        len = 3;
    if(len % 2 == 0)
        len = len+1;
    cout << "Best out of: "<< len << endl;
    int len2 = len;
    int comp;
    srand (time(NULL));
    
    
    for(int i = 0; i < len; i++)
    {
        comp  = rand() % 3;
        
        cout << "Rock(0), Paper(1) or Scissors(2)?"<< endl;
        cin >>user;
        while(user < 0 || user > 2)
        {
            cout << "Choose 0, 1 or 2" << endl;
            cin >> user;
        }
        if(comp == 0)
        {
            co = rk;
        }
        if(comp == 1)
        {
            co = pr;
        }
        if(comp == 2)
        {
            co = sc;
        }
        if(user == 0)
        {
            us = rk;
        }
        if(user == 1)
        {
            us = pr;
        }
        if(user == 2)
        {
            us = sc;
        }
        
        cout << "Player: " << us << endl << "Computer: " << co << endl;
        
        if(rps(user,comp) == 0)
        {
            cout << "Draw!" << endl;
            len++;
            draw++;
        }
        if(rps(user,comp) == 1)
        {
            cout << "Player wins round!" << endl;
            player++;
        }
        if(rps(user,comp) == 2)
        {
            cout << "Computer wins round!" << endl;
            computer++;
        }
        cout << " " << endl << "Score: " << endl << "Player: " << player << endl << "Computer: " << computer << endl << " " << endl;
        if(computer == len2/2 +1)
        {
            cout << "-----------------------------------------------Computer wins!-----------------------------------------------" << endl;
            cout << " " << endl << "End score: " << endl << "Player: " << player << endl << "Computer: " << computer << endl << " " << endl;
            cout << "-------------------------------------------Better luck next time!-------------------------------------------";
            return 0;
        }
        if(player == len2/2 +1)
        {
            cout << "-----------------------------------------------Player wins!-----------------------------------------------" << endl;
            cout << " " << endl << "End score: ";
        }
    }
    return 0;
}
