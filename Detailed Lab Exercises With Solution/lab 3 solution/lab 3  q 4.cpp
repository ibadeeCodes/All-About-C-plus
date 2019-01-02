#include<iostream>
using namespace std;
main()
{
	int number1,number2,player,mteam=0,eteam=0;
	cout<<"total number of players:";
	cin>>player;
	while(player!=0)
	{
		cout<<"number1:";
		cin>>number1;
		cout<<"number 2:";
		cin>>number2;
		if(number1==number2)
		{
			cout<<"enemy got hit by your team!"<<endl;
			mteam++;
		}
		else
		{
			cout<<"you got hit by the enemy team!"<<endl;
            eteam++;	
		}
	player--;	
	}
	if(mteam>eteam)
	{
		cout<<"Game Over You Won!!";
	}
	else if(mteam<eteam)
	{
		cout<<"Game Over Enemy Won!!";
	}
	else
	{
		cout<<"Game Draw!!";
	}
}
