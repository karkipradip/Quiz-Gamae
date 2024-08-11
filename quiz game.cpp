#include <iostream>
using namespace std;
long p;
int main ()
{
	int alegere = 0;
	cout << "				***MARELE CUNOSCATOR***"<<endl<<endl<<endl;
	cout << "Alege ce vrei sa faci:" << endl << endl;
	cout << "1.Incepe jocul." << endl ;
	cout << "2.Alege un domeniu separat de joc." << endl;
	cout << "3.Informatii. " << endl << endl;
	cout << "Alegerea ta este : ";cin >> alegere;
	cout << string(50,'\n');
	char right [] = "Raspunsul este corect.";
	char wrong [] = "Raspunsul este gresit.Raspunsul corect este ";
	char pass [] = "Raspunsul corect este ";
	switch (alegere)
	{case 1:cout<<"Intrebarea 1:"<<endl;
	cin.get ();
	string answer1;
	char question1[] = "Care este capitala Germaniei?";
	cout<<question1<<endl;
	cout<< endl <<"A.Bruxelles."<< endl <<"B.München."<< endl<<"C.Liverpool."<<endl<<"D.Berlin."<<endl<<endl<<"X.Pas."<<endl<<endl;
	char choiceA [] =  "Alegerea ta este : ";
	cout << choiceA;
	getline(cin,answer1);
	if (answer1=="D")
		{p++;
		 cout<< right <<endl<<endl;
		}
	else if (answer1=="X") cout << pass << "Berlin." << endl << endl;
	else {p--;
		  cout << wrong << "Berlin." << endl << endl;
	     }
	cout << "Intrebarea 2:" << endl << endl;
	string answer2;
	char question2[] = " Care din urmatorii lideri a fost conducatorul Imperiului Persan ? ";
	cout << question2 << endl;
	cout << endl << "A.Mehmed II" << endl << "B.Tokugawa" << endl << "C.Darius I"<< endl << "D.Mansa Musa" << endl << endl << "X.Pas" <<endl <<endl;
	cout << choiceA;
	getline (cin,answer2);
	if (answer2=="C")
		{p++;
		 cout<< right <<endl<<endl;
		}
	else if (answer1=="X") cout << pass << "Darius I." << endl << endl;
	else {p--;
		  cout << wrong << "Darius I." << endl << endl;
	     }  
	if (p>=10)cout<<"Felicitari ! Ai obtinut "<<p<<" din 20 de puncte."<<endl<<"Esti bine pregatit";
	if (p<0)p=0;
	if (p<10 && p>=0)cout<<"Ai obtinut "<<p<<" din 20 de puncte."<<endl<<"Incearca sa iti aprofundezi informatiile.Nu esti foarte bine pregatit.";
	}
	return 0;
}
