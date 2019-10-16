#ifndef STORY_H
#define STORY_H
using namespace std;
class Story{

public:
Story();
void getIntro(int terrain);
void getOutro(int terrain);
int getScore();
static int currentScore;
int score;
int terr;
};

#endif //STORY_H


