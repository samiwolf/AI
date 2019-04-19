#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int i = 6; i<1000; i+=20)

    {
        string command = "./Kruskal ";
        string app = to_string(i);
        command.append(app);
        string tofile = " >> results.txt";
        command.append(tofile);
        system(command.c_str());
    }
}
