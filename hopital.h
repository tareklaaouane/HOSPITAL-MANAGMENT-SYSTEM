#include <iostream>
#include <string>
using namespace std;



class date{
public:
    int j,m,a; //jour/mois/annee
    
    date(){} //constructeur par defaut
    
    //methodes
    void affichdate();
    


};

class medecin{
private:
		
	int id;
	string nom,prenom,spec,adres;
	double salaire;
	date daff;
public:

    medecin();

    medecin(int,string,string,string,string,double,date);
    void saisir();
    void afficher();
    //getters
int getid();
string getnom();
string getprenom();
string getadres();
string getspec();
double getsalaire();
date getdate();
	//setters
void setid(int id);
void setnom(string nom);
void setprenom(string prenom);
void setadres(string adres);
void setspec(string spec);
void setsalaire(double salaire);
void setdate(date dt);

};

class infirmier{
private:		
	int id;
	string nom,prenom,adres,tpct;
	double salaire;
	date  tpdaff;
public:

    infirmier();
    infirmier(int,string,string,string,string,double,date);
    void saisir();
    void saisiri();
    void afficher();
    //getters
int getid();
string getnom();
string getprenom();
string getadres();
string gettpct();
double getsalaire();
date getdate();
string getstpct();
	//setters
void setid(int id);
void setnom(string nom);
void setprenom(string prenom);
void setadres(string adres);
void settpct(string tpct);
void setsalaire(double salaire);
void setdate(date dtp);

};

//service
class service{
private:
		
	int code,nbinf;
	string nom,secretaire;
	medecin mdcf;
	infirmier tabinf[50];
	date lancdaff;
public:

    service();
    
    service(int code,string nom,medecin mdcf,string secretaire,date lancdaff);
    void saisiri();
    void saisir();
    void afficher();
    
    //getters
int getcode();
string getnom();
medecin getmdcf();
int getnbinf();
string getsecretaire();
date getdate(); 
infirmier* getinfirmier();
	//setters
void setcode(int code);
void setnom(string nom);
void setmdcf(medecin mdcf);
void setsecretaire(string secretaire);
void setdate(date lancdt);
//methodes

bool testinf(infirmier);
bool ajoutinf(infirmier);
bool modf(infirmier);
bool modfchef(string med);	
	
	
};

//fonction 
bool testserv(service s);
bool testinf(infirmier s);
bool ajoutserv(service s);
bool ajouterinf(infirmier inf , service s);
bool suppser(service s);
void affservdix();
void affinfer();
void affserv();
bool modnomserv(service s , string nom);
int menu();
