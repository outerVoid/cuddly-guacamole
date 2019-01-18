#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;
class troad
{
public:
float Length;
int Width;
troad();
troad(float Length0,int Width0);
void fileinput();
};

troad::troad()
{
Length=0.0;
Width=0;
}

troad::troad(float Length0,int Width0)
{
if(Length0>0)Length=Length0;else Length=1;
if(Width0>0)Width=Width0;else Width=1;
}

void troad::fileinput()
{
char buff[50];
char buff1[50];
ifstream fin("file.txt");
fin>>buff;Length=atof(buff);
fin>>buff1;Width=atoi(buff1); 
}

int main()
{
troad road;
std::cout<<"road.Length = "<<road.Length<<"\nroad.Width = "<<road.Width<<std::endl;
road.fileinput();
std::cout<<"file.Length = "<<road.Length<<"\nfile.Width = "<<road.Width<<std::endl;
return 0;
}
