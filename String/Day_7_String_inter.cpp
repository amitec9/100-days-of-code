#include <iostream>
using namespace std;
 

bool isInterleaving(string X, string Y, string S)
{
    
    if (!X.length() && !Y.length() && !S.length()) {
        return true;
    }
 
 
    if (!S.length()) {
        return false;
    }
 
 
    if (X.length() && S[0] == X[0]) {
        return isInterleaving(X.substr(1), Y, S.substr(1));
    }

    if (Y.length() && S[0] == Y[0]) {
        return isInterleaving(X, Y.substr(1), S.substr(1));
    }
 
    return false;
}
 
int main()
{
    string X = "ABC";
    string Y = "DEF";
    string S = "ADEBCF";
 
    if (isInterleaving(X, Y, S)) {
        cout << "Given string is an interleaving of X and Y";
    }
    else {
        cout << "Given string is not an interleaving of X and Y";
    }
 
    return 0;
}


