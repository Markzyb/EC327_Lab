# include <iostream>

using namespace std;
int main(void){

int Start = 0;
int Stop = 0;
int Step = 0;
cout << "Start = ";
cin >> Start;
cout << "Stop = ";
cin >> Stop;
cout << "Step = ";
cin >> Step;

if(Start < Stop)
{
    for (int i = 0; i <= Stop; i++)
    {

            Start = Start+Step;
            cout << Start << ",";

        }

}
else if (Start > Stop)
    {
       for (int i = 0; i <= Stop; i++)
            Stop = Stop - Step;
            cout << Stop << ",";

    }
else
    cout << "Bye,bye!";
    return 0;
}

