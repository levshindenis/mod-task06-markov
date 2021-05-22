#include <string>
#include <deque>
#include <vector>
#include <map>
#include <iostream>
#include <fstream>
#include"textgen.h"

using namespace std;
int main()
{
    string line;
    string text = "";
    ifstream in("text.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            text = text + line + " ";
        }
    }
    in.close();
    Text gn = Text(text, 2, 1000);
    string answer = gn.getText();

}
