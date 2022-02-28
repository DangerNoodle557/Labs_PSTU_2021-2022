#include <iostream>
using namespace std;
 
int brd[8][8];
 
void resett(int i, int j)
    {
    for(int x=0; x<8; ++x)
        {
        --brd [x][j];
        --brd [i][x];
        int k;
        k = j-i+x;
        if (k >= 0 && k<8)
            --brd[x][k];
        k = j+i-x;
        if (k >= 0 && k<8)
            --brd[x][k];
        }
    brd[i][j] = 0;
    }
 
void sett(int i, int j)
    {
    for(int x=0; x<8; ++x)
        {
        ++brd [x][j];
        ++brd [i][x];
        int k;
        k = j-i+x;
        if (k >= 0 && k<8)
            ++brd[x][k];
        k = j+i-x;
        if (k >= 0 && k<8)
            ++brd[x][k];
        }
    brd[i][j] = -1;
    }
 
bool tryt(int i)
    {
    bool result = false;
    for (int j = 0; j<8; ++j)
    {
        if (brd[i][j] == 0)
        {
            sett(i,j);
            if(i==7)
                result = true;
            else
            {
                if(!(result = tryt(i+1)))
                    resett(i,j);
            }
        }
    if(result)
        break;
    }
    return result;
    }
int main()
    {
    for(int i=0; i<8; ++i)
    for(int j=0; j<8; ++j)
        brd[i][j] = 0;
        tryt(0);
    for(int i=0; i<8; ++i)
        {
        for(int j=0; j<8; ++j)
            {
            if (brd[i][j] == -1)
                cout <<"8 ";
            else 
                cout <<". ";
            }
        cout << endl;
        }
    }
