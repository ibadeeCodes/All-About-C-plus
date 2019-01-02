#include<iostream>
using namespace std;
main()
{
	int bags;
	float tcost,pbags,cost_of_lbox,lbox,mbox,sbox;
	float cost_of_mbox,cost_of_sbox;
	//
	cout<<"----WELCOME TO MYJAVA COFFEE OUTLET----\n\n";
	cout<<"-Coffee is selled in 2-lb bags\n";
    cout<<"Price of each 2-lb bag is  $5.50/=\n";
    cout<<"The bags are further packed in boxes:\n";
    cout<<"1)Large Box.\nCapacity=20 bags\nCost=$1.80/=\n\n";
    cout<<"2)Medium Box.\nCapacity=10 bags\nCost=$1.00/=\n\n";
    cout<<"3)Small Box.\nCapacity=5 bags\nCost=$0.60/=\n\n";
    //
    cout<<"Enter how many bags you want to order:";
    cin>>bags;
    pbags=bags*5.50;
    cout<<"The cost of order is:"<<pbags<<endl;
    //
    lbox=bags/20;
    bags=bags%20;
    mbox=bags/10;
    bags=bags%10;
    sbox=bags/5;
    bags=bags%5;
    //
    cout<<"Boxes used are:\n";
    cost_of_lbox=lbox*1.80;
    cost_of_mbox=mbox*1.00;
    cost_of_sbox=sbox*0.60;
    //
    cout<<lbox<<"Large"<<"-"<<cost_of_lbox<<endl;
    cout<<mbox<<"Medium"<<"-"<<cost_of_mbox<<endl;
    cout<<sbox<<"Small"<<"-"<<cost_of_sbox<<endl;
    //   
    tcost=pbags+cost_of_lbox+cost_of_mbox+cost_of_sbox;
    cout<<"Your total cost is="<<tcost;
    //
}
