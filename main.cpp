#include <iostream>
#include <windows.h>

using namespace std;
/**I DON'T KNOW WHY BUT IF I TRY TO MAKE A GRAPH OF MORE THAN 10 UNITS, IT BECOMES INACCURATE.
* ITS SO ANNOYING AS EVEN IF YOU REPLACE THE SIX PLACES WITH 15 INSTEAD OF 10, AND a<16 AT LINE 23, IT WILL SHOW THE GRAPH BUT WITH INCORRECT RESULTS.
* THIS ARE THE SIX PLACES: LINE-12(2),18,19,33(2). AND a<(NO. OF UNITS+1) AT LINE-24. You can just use replace feature...
*/

int check(int x)
{
    if(x>10 || x<=0){cout<<"You have entered invalid value: "<<x<<endl<<"Please enter a number between 1 to 10..."<<endl;
    system("pause");system("EXIT");} ///It is impossible to plot the * if it has 0 as its Y-coordinate, as the number line intersects it.

}
int draw(int i,int j)
{
    int m=10;
    for(int y=10-j;y>0;y--){cout<<m<<endl;m--;}
    cout<<m;m--;
    for(int x=i-1;x>=0;x--){cout<<"  ";}
    cout<<"*";
    for(int d=j-1;d>=0;d--){cout<<endl<<m;m--;}
    for(int a=0;a<11;a++){cout<<a<<" ";}
    cout<<endl;

}

int main()
{
    int i,j;
    cout<<"Welcome to Plotter!"<<endl<<endl;
    cout<<"You are given a 10*10 field. Please enter X-coordinate and Y-coordinate."<<endl;
    cout<<"Please enter the X-coordinate: ";
    cin>>i;
    cout<<"Please enter the Y-coordinate: ";
    cin>>j;cout<<endl;
    check(i);check(j);
    draw(i,j);
    system("pause");

    return 0;
}
/**Bugs:
* 1) Even if X or Y coordinates are bigger than 10, it gives error but does not exit/shutdown the .exe file.
*    It tries to show the graph even though I have system("exit") at line-13. Why it doesn't simply exit?
*/
