#include<iostream>
using namespace std;
class box  //biggest thing
{
	public:  //could be accessed even out of this class.
		int length; //attribute
		int width; //attribute
		int height; //attribute
};
int main() //further in main
{
	box box1; //object box1 of class box.
 	box box2; //object box2 of class box.
 	float volume=0.0;
	float volume_box1;
	float volume_box2;
	// particular attributes of the object: box1 of class: box1.
	
	box1.length=4;
	box1.width=5;
	box1.height=2;
	
	//particular attributes of the object: box2 of class: box2.
	
	box2.length=8;
	box2.width=3;
	box2.height=9;
	
	//calculating volume of box1:
	volume_box1=box1.length*box1.width*box1.height;
	
	//calculating volume of box2:
	volume_box2=box2.length*box2.width*box2.height;
	
	//now displaying volume on console output:
	cout<<"the volume of box1 is "<<volume_box1<<endl;
	cout<<"the volume of box2 is "<<volume_box2<<endl;
	
}
