#include <iostream>

using namespace std;
bool r_hand();
bool l_hand();
bool head();
int main()
{bool(*wsk[20])();
    int response;
 int position=0;

    cout << "Wybierz funkcje robota dwadziescia razy.\n 1. R. ramie\n 2. L.ramie\n 3. Glowa " <<endl;
   {int i;
   for(i=1; i<=20; i++)
       {cin>>response;
   switch (response)
   {
   case 1:
       wsk[i]=&r_hand;
       position++;
       break;
   case 2:
        wsk[i]=&l_hand;
        position++;
        break;
   case 3:
        wsk[i]=&head;
        position++;
        break;
   default:
    cout<<"Jestes glupi\n";
        position++;
        break;
      }
    }
    while (position!=20);
    for (int i=1; i<=20; i++)
       wsk[i]();
    return 0;
}}
bool r_hand()
{
    cout<<"Prawa reka podniesiona.\n";
    return 0;
}
bool l_hand()
{
    cout<<"Lewa reka podniesiona.\n";
    return 0;
}
bool head()
{
    cout<<"Glowa podniesiona.\n";
    return 0;
}
