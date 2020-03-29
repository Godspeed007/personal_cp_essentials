/*method=function
  attribute=variable
  NOTE-- 1)WHEN individual objects are created they inherit all variables and function from the class.
  2)we focus on DRY in OOPS.
  3)procedural prog is about writing procedures or functions that performs operations on data.
  4)oops is about creating objects that contains both data and functions
  5)A class is user defined data type used to create objects.
  */
#include<bits/stdc++.h>
using namespace std;
class boy{                             //creating class
    public:                                 //access specifier public means things inside class can be accesed from outside the class.
    int age;                   //attribute1
    string name;                  // '' 2
    string address;                //' ' 3
    void remedy();             //declaring function or method in outside the class manner
 
};
void boy::remedy()                 //defining function or method here9outside the class)Syntax--name of class::name of function{things inside the function;}
{
    cout<<"shut up";
}
int main()
{
    boy skul;                       //creating object named skul
    skul.age=12;skul.name="odoi";skul.address="london";       //accessing attributes by objects from class
    cout<<skul.age<<" "<<skul.name<<" "<<skul.address<<" \n";
    skul.remedy();                   //method or function call
    return 0;
}
