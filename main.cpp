#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <cstring>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
ifstream f("/Users/george/CLionProjects/untitled6/input.in");
ofstream g("/Users/george/CLionProjects/untitled6/output.out");
struct query{
    int id;
    int after;
};
int main() {
    int n,m;
    f>>n>>m;
    int a[n][m];
    int x,y;
    int s1;
    string s2;
    f>>x>>y;
    int o = 0;
    g<<x<<" "<< y<<endl;

    while(f>>s2>>s1)
    {

        if(s2 == "T")
        {
            o = (o + s1)%4;
        }
        else if(s2 == "F")
        {
            if(o == 0)
            {
                for(int i=0;i<s1;i++)
                {
                    x+= 1;
                    g<<x<<" "<<y<<endl;
                }

            }
            if(o == 1)
            {
                for(int i=0;i<s1;i++)
                {
                    y+= 1;
                    g<<x<<" "<<y<<endl;
                }
            }
            if(o == 2)
            {
                for(int i=0;i<s1;i++)
                {
                    x-= 1;
                    g<<x<<" "<<y<<endl;
                }

            }
            if(o == 3)
            {
                for(int i=0;i<s1;i++)
                {
                    y-= 1;
                    g<<x<<" "<<y<<endl;
                }
            }
        }
        else
        {
            break;
        }

    }
    float speed =  stof(s2);
    vector < int > tick;
    int aliens;
    aliens = s1;
    int contor = 0;
    int t;
    while(contor!=aliens)
    {
        int smth;
        f>>smth;
        tick.push_back(smth);
        contor++;
    }
    query ac;
    vector<query> queries;
    {
        f>>ac.after;
        f>>ac.id;
        queries.push_back(ac);
    }

}
