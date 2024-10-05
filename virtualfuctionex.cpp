#include <iostream>
using namespace std;

class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    void display()
    {
    }
};

class cwhvideo : public cwh
{
public:
    float videolen;
    cwhvideo(string s, float r, float vl) : cwh(s, r)
    {
        videolen = vl;
    }
    void display()
    {
        cout << "the video title is" << title << endl;
        cout << "the video rating is " << rating << endl;
        cout << "the video length is" << videolen << endl;
    }
};
class cwhtext : public cwh
{
public:
    int word;
    cwhtext(string s, float r, int wc) : cwh(s, r)
    {
        word = wc;
    }
    void display()
    {
        cout << "the video title is" << title << endl;
        cout << "the video rating is " << rating << endl;
        cout << "the video length is" << word << endl;
    }
};
int main()
{

    string title;
    float rating, videolen;
    int word;
    title = "c video";

    videolen = 4, 4;

    rating = 4.89;

    cwhvideo objvid(title, rating, videolen);
    objvid.display();
    
    title = "c++ video";


    rating = 5.89;
    word=234234;


    cwhtext objtext(title, word, videolen);
    objtext.display();

    cwh* tuts[2];
    tuts[0]=&objtext;
    tuts[1]=&objvid;
    tuts[0]->display();
    

    
    return 0;

}