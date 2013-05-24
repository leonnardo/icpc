#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,str1,str2;
    vector <string> names;
    string aux, res, s1, s2;
    while (scanf("%d",&n) == 1 && n) {
        str1 = n/2 - 1;
        str2 = n/2;
        names.clear();
        while (n--) {
            cin >> aux;
            names.push_back(aux);
        }
        sort(names.begin(),names.end());
        s1 = names[str1];
        s2 = names[str2];
        int i = 0;
        aux.clear();
        while (i < s1.length()) {
            if (s1[i] == s2[i]) 
                aux.push_back(s1[i++]);
            else {
                aux.push_back(s1[i]+1);
                break;
            }
        }
        cout << aux << endl;
    }
    return 0;
}
