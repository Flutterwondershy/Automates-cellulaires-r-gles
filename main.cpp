#include <iostream>
#include "automate.h"

using namespace std;

int main(int argc, char* argv[])
{
    automate1 a(150, 248);
    for(int i = 0; i < 80; i++)
    {
	a.affichage();
	a.iterer();
    }
    a.affichage();
    
    return 0;
}
