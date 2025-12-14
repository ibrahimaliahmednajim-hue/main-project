#include <iostream>
using namespace std;
void check_letter(string text){
	if(text[0]>='A'&&text[0]<='Z' )
	cout<<text<<"  : starts with uppercase letter.";
	else
	cout<<text<<"  : doesn't begin with uppercase letter.";
}
string convert_letter(string text)
{
	string converted;
	for(int i=0;i<text.length();i++)
	converted+=(char)toupper(text[i]);
	return converted;
}


int main(){
string text="hello";	
int num;
cout<<"choose the number of the function you want to use(1 or 2): "<<endl;
cout<<"1- Check the first letter."<<endl;
cout<<"2- covert the string to uppercasse letter."<<endl;
cin>>num;
switch (num)
{
	case 1: check_letter(text);
			break;
	case 2: cout<<"Befor: "<<text<<endl<<"After: "<<convert_letter(text);
			break;
	default :cout<<"try again";
			break;
}
	return 0;
}
