#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'strcmp' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int strcmp(string s1, string s2) {
    int n= min(s1.length(), s2.length());
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            return s1[i]-s2[i];
        }
    }
      if(s1.length()==s2.length()){
        return 0;
    } else if(s1.length()>s2.length()){
        return s1.length()-s2.length();
    } else{
        return -(s2.length()-s1.length());
    }

  return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = strcmp(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
