#include<iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>


using namespace std;

	
	
	int temp_u()
{




	int len;
ifstream file;
file.open("in.css");
ofstream fileout("out.css");
if(!file.is_open())
	{
	cout<<"\n error while opening data file";
	}
	else
		{
			string line;
			string strtemp;
			while(file.good())
			{
				strtemp="";
			
				int count=0;
				getline(file,line);
				len=line.length();
				for(int i=0;i<len;i++)
					{
					if(line.at(i)=='}'||line.at(i)=='{'||line.at(i)==';')
					{
					
					if(line.at(i)=='}')
					{
					strtemp+="\n";
					strtemp+=line.at(i);
					strtemp+="\n\n\n";
					}
					else
					{
						strtemp+=line.at(i);
						strtemp+="\n";
					
					}
					

					}
					else
					
					{
					
						strtemp+=line.at(i);
					}
					
					}
					cout<<strtemp<<endl;
		fileout << strtemp<<endl;
		//cout<<line.at(i);
					
			}
			
		}

}

int main(){

fstream file;
    file.open("out.css",std::ios::out);
    file << fflush;
    file.close();

temp_u();

cout<<" \n";
cout<<"\n        ******";
cout<<"\n         ***************";
cout<<"\n      ****************";
cout<<"\n      ***    ******";
cout<<"\n         ***";
cout<<"\n       **";
cout<<"\n     ***                             ******** *********       ****        ********   *******";
cout<<"\n    *******                 *       *******************      ******      *********** *******";
cout<<"\n    * *******               *****      ****     *****       ********        *********  ***";
cout<<"\n     *  *******         **********     **************       **  *****       ** *******  **";
cout<<"\n          **  ***    ***     *****     **************      ***********      **  **********";
cout<<"\n            *      ******     * **     ****     *****     ***    *****      **   *********";
cout<<"\n                 *****        * **  ******************* *************************  *******";
cout<<"\n               ******         * *                                                        *";
cout<<"\n              *****    **      *";
cout<<"\n  **         *****  *** *";
cout<<"\n  **        ****     ****";
cout<<"\n   **             ******";
cout<<"\n    *******************";
cout<<"\n      ***************        ********   ********    **  **************   ***    ****  ***";
cout<<"\n         ********             ***  ***  ***   **   **** ** *** ** ***  ***  ***  ***** *";
cout<<"\n     ****  ****  ***          *** ***    ***      ** ***   ***    ***  ***  ***  * *****";
cout<<"\n           ****              ***** ********************** *****  *****  ******  *** ****";
cout<<"\n";
cout<<"\n        ******";
cout<<"\n         ****         **";
cout<<"\n         *************";
cout<<"\n           *********";


cout<<"\n\n\ndeveloper: shan pathiraja\n HNDIT A'PURA \n TP:0716017460/0778113997\n\n\n";

system("pause");



}

