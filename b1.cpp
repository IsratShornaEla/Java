#include<iostream>
using namespace std;
string makeRectanglePath(int x1pos, int y1pos, int x2pos, int y2pos){
    string path;
    path = "M";
    path += (to_string(x1pos)+" ");
    path += (to_string(y1pos)+" ");
    path += "V";
    path += (to_string(y2pos)+" ");
    path += "H";
    path += (to_string(x2pos)+" ");
    path += "V";
    path += (to_string(y1pos)+" ");
    path += "H";
    path += (to_string(x1pos)+" ");
    path += "Z";
    if(x1pos<0 || x1pos>300 || x2pos<0 || x2pos>300 || y1pos<0 || y1pos>300 || y2pos<0 || y2pos>300)
    {
        return "Outside Box";
    }
    else{
        return path;
    }
}
int main()
{
    cout<<makeRectanglePath(10,10,200,200);
}
