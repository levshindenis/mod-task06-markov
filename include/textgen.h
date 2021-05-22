#include <string>
#include <deque>
#include <vector>
#include <map>


using namespace std;
class Text
{
public:
    string data;
    string getText();

    vector<string> words;
    typedef deque<string> prefix;
    map<prefix, vector<string> > statetab;
    int NPREF;
    int MAXGEN;
    Text(string arr, int val1, int val2);
    Text(map<prefix, vector<string> > val, vector<string> words, int val1, int val2);

};
