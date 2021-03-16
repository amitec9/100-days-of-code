#include<iostream>

using namespace std;

bool checkRotation(string s1, string s2) {
        /* Comparing and checking string lengths */
        if (s1.length() != s2.length())
                return false; //returning false if strings are unequal

        string temp = s1 + s1; //storing concatenated string 

        int n = temp.length();
        int m = s2.length();
        
        // checking if s2 is present in temp
        for(int i = 0; i<n-m; i++)
        {
            int flag = 1, j;
            for(j = 0; j < m-1; j++)
            {
                if(s2[j] != temp[i+j])
                {
                    flag = 0;
                    break;
                }
            }
            
            if(flag == 1){
                return true;// return true if s2 is present in temp
            }
        }
        
        return false;
}

/* Driver code */
int main() {
        string a = "HELLO", b = "amitHEL";
        if (checkRotation(a, b))
                cout<<"Given Strings are rotations of each other.";
        else
                cout<<"Given Strings are not rotations of each other.";
        return 0;
}