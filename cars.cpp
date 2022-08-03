#include <iostream>

using namespace std;

int main()
{
  /*struct{
  //declration of members:
  int mynum;
  string mystring;
  }myStructure;
  //assigning the values:
  myStructure.mynum=1;
  myStructure.mystring="Sharpsbrain" ;

//printing the values of the structure:
cout<<myStructure.mynum<<"\n";
cout<<myStructure.mystring<<"\n";*/
struct{
//declaration of members:
string brand;
string model;
int    year;}myCar1,myCar2;
//Assign to car1:
myCar1.brand="BMW";
myCar1.model="X5";
myCar1.year=1999;
//assign to car2:
myCar2.brand="TOYOTTA";
myCar2.model="CHR";
myCar2.year=2016;
//printing the struct for both cars:

cout<<myCar1.brand<<endl;
cout<<myCar1.model<<endl;
cout<<myCar1.year<<endl;
cout<<myCar2.brand<<endl;
cout<<myCar2.model<<endl;
cout<<myCar2.year<<endl;

return 0;
}
//-----------------------Sharpsbrain-------------------//
