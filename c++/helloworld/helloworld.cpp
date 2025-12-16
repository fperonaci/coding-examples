#include <iostream>

using namespace std;

class StoryTeller{

    public: void TellAStory(string story){

        cout << story;
    }
};

int main()
{

    cout << "Hello world!" << endl;

    StoryTeller x;

    x.TellAStory("In the end the love you take is equal to the love you make\n");

    return 0;
}
