/* Iss Program ma humko first line 2 digits lena ha 1 digit ka matlab hoga no. of rows,
Second digit ka matlab hoga no. of queries matlab ki kitni bar result ka output chaia */

/* Aur second line ke first digit ka matlab hoga ki aapko kitne number lena ha second line ma
And so on for number of rows for this procedure */

/* And then next line ke first digit ka matlab hoga ki kaun si row leni ha
and second digit ka matlab hoga which number choose karna ha*/

/*
    2 2
    3 1 5 4
    5 1 2 8 9 3
    0 1
    1 3
    isma first line ke first digit ka matlab ha ki 2 rows and second digit ka matlab ha ki 2 quarries jase ki 0 1 and 1 3 ha isma
    second line ke first digit ka matlab ha ki 3 digits le sakta ha ye
    third line ke first digit ka matlab ha ki 5 digits le sakta ha ye
    and then
    0 1 ka matlab ha ki 0th row ka 1 number - isma oth row ha 3 1 5 4 aur 1 number ha 5 kyuki counting first digit shor ke karne ha
    kyuki first digit line ko no. of digit lena k lia ha
*/

#include <iostream>
#include<vector>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int rows, quaries, colSize, colValue, whichRow, whichCol;

    cin>>rows>>quaries;
    vector<vector<int>> nvec;
    for(int i=0; i<rows; ++i)
    {
        cin>>colSize;
        vector<int> ivec;
        for(int j = 0; j<colSize; ++j)
        {
            cin>>colValue;
            ivec.push_back(colValue);
        }
        nvec.push_back(ivec);
    }
    for(int k=0; k<quaries; ++k)
    {
        cin>>whichRow>>whichCol;
        cout<<nvec[whichRow][whichCol]<<endl;
    }

    return 0;
}