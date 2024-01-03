#include "hopital.h"
#include <iostream>
#include <string>
#include <time.h>

/*----------------------date-------------------- */
//afficher la date format jj/mm/aaaa

void date :: affichdate(){
    cout<<j<<"/"<<m<<"/"<<a<<endl;
}


medecin::medecin() {//constructeur par default
    
}

medecin::medecin(int id,string nom,string prenom,string spec,string adres,double salaire,date daff) {//constructeur initialisation
	this->id=id;
	this->nom=nom;
	this->prenom=prenom;
	this->spec=spec;
	this->adres=adres;
	this->salaire=salaire;
	this->daff=daff;
}

void medecin::saisir()
{
    cout<<"saisir medecin: \n";
    cout<<"id:";
    cin>>id;
    cout<<"nom:";
    cin>>nom;
    cout<<"prenom:";
    cin>>prenom;
    cout<<"adresse:";
    cin>>adres;
    cout<<"specialite:";
    cin>>spec;
    cout<<"salaire:";
    cin>>salaire;
    cout<<"date d'affectation:\n";
    cout<<"jour:";
    cin>>daff.j;
    cout<<"mois:";
    cin>>daff.m;
    cout<<"annee:";
	cin>>daff.a;
	}
    
void medecin :: afficher(){
    cout<<"id:"<<id<<endl;
    cout<<"nom:"<<nom<<endl;
    cout<<"prenom:"<<prenom<<endl;
    cout<<"adresse:"<<adres<<endl;
    cout<<"specialite:"<<spec<<endl;
    cout<<"salaire:";
    cout<<salaire<<endl;
    cout<<"date affectation:"<<endl;
    daff.affichdate();//deja un e methode existe dans la classe date
}

int medecin::getid(){
	return id;
}
string medecin::getnom(){
	return nom;
}
string medecin::getprenom(){
	return prenom;
}
string medecin::getadres(){
	return adres;
}
string medecin::getspec(){
	return spec;
}
double medecin::getsalaire(){
	return salaire;
}
date medecin::getdate(){
	return daff;
}

void medecin::setid(int id){
		this->id=id;
}
void medecin::setnom(string nom){
		this->nom=nom;
}
    
void medecin::setprenom(string prenom){
		this->prenom=prenom;
}
void medecin::setadres(string adres){
	  	this->adres=adres;
}
void medecin::setspec(string spec){
		this->spec=spec;
}
void medecin::setsalaire(double salaire){
		this->salaire=salaire;
}
void medecin::setdate(date dt){
		this->daff=dt;
	
}


infirmier::infirmier() {
    
}

infirmier::infirmier(int id,string nom,string prenom,string tpct,string adres,double salaire,date daff) {
	this->id=id;
	this->nom=nom;
	this->prenom=prenom;
	this->tpct=tpct;
	this->adres=adres;
	this->salaire=salaire;
	this->tpdaff=tpdaff;
}
void infirmier::saisiri(){//pour avoir juste id
    cout<<"id infermiere:";
    cin>>id;
}

void infirmier::saisir()
{
    cout<<"saisir imfermier: \n";
    cout<<"id:";
    cin>>id;
    cout<<"nom:";
    cin>>nom;
    cout<<"prenom:";
    cin>>prenom;
    cout<<"adresse:";
    cin>>adres;
    cout<<"type de contrat:";
    cin>>tpct;
    cout<<"salaire:";
    cin>>salaire;
    cout<<"date d'affectation:\n";
    cout<<"jour:";
    cin>>tpdaff.j;
    cout<<"mois:";
    cin>>tpdaff.m;
    cout<<"annee:";
	cin>>tpdaff.a;
	}
    
void infirmier :: afficher(){
    cout<<"id:"<<id<<endl;
    cout<<"nom:"<<nom<<endl;
    cout<<"prenom:"<<prenom<<endl;
    cout<<"adresse:"<<adres<<endl;
    cout<<"type de contrat:"<<tpct<<endl;
    cout<<"salaire:"<<endl;
    cout<<salaire<<endl;
    cout<<"date affectation:"<<endl;
    tpdaff.affichdate();
}

int infirmier::getid(){
	return id;
}
string infirmier::getnom(){
	return nom;
}
string infirmier::getprenom(){
	return prenom;
}
string infirmier::getadres(){
	return adres;
}
string infirmier::getstpct(){
	return tpct;
}
double infirmier::getsalaire(){
	return salaire;
}
date infirmier::getdate(){
	return tpdaff;
}

void  infirmier::setid(int id){
	this->id=id;
}
void  infirmier::setnom(string nom){
		this->nom=nom;
}
    
void  infirmier::setprenom(string prenom){
		this->prenom=prenom;
}
void  infirmier::setadres(string adres){
	  	this->adres=adres;
}
void  infirmier::settpct(string tpct){
		this->tpct=tpct;
}
void  infirmier::setsalaire(double salaire){
		this->salaire=salaire;
}
void  infirmier::setdate(date pdt){
		this->tpdaff=pdt;
	
}



service::service() {
    nbinf=0;
}

service::service(int code,string nom,medecin mdcf,string secretaire,date lancdaff) {
	this->code=code;
	this->nom=nom;
	this->mdcf=mdcf;
	this->secretaire=secretaire;
	this->lancdaff=lancdaff;
	nbinf=0;
}
void service::saisiri(){//pour cree un objet avec just un id
    cout<<"code service:";
    cin>>code;
}
void service::saisir()
{
    cout<<"saisir service: \n";
    cout<<"code:";
    cin>>code;
    cout<<"nom:";
    cin>>nom;
    cout<<"mdcf:";
    mdcf.saisir();
    cout<<"secretaire:";
    cin>>secretaire;
    
    cout<<"entrer le nombre dinfirmier:";
    cin>>nbinf;
    
    for(int i=0 ;i<nbinf;i++ ){
    	cout<<"infermier :"<<i+1;
    	tabinf[i].saisir();
	}
    
    cout<<"date de lancement de srvice:\n";
    cout<<"jour:";
    cin>>lancdaff.j;
    cout<<"mois:";
    cin>>lancdaff.m;
    cout<<"annee:";
	cin>>lancdaff.a;
	}
    
void service :: afficher(){
    cout<<"service"<<endl<<"code:"<<code<<endl;
    cout<<"nom:"<<nom<<endl;
    mdcf.afficher();
    cout<<"secretaire:"<<secretaire<<endl;
    cout<<"tableau des infermiers:";
    
        for(int i=0 ;i<nbinf;i++ ){
    	tabinf[i].afficher();
	}
	
    cout<<"date de lancement:"<<endl;
    lancdaff.affichdate();
}

int service::getcode(){
	return code;
}
string service::getnom(){
	return nom;
}
medecin service::getmdcf(){
	return mdcf;
}
string service::getsecretaire(){
	return secretaire;
}

date service::getdate(){
	return lancdaff;
}

int service:: getnbinf(){
	return nbinf;
}

void service:: setcode(int code){
	this->code=code;
}
void service:: setnom(string nom){
		this->nom=nom;
}
    
void service:: setmdcf(medecin mdcf){
		this->mdcf=mdcf;
}
void service:: setsecretaire(string secretaire){
	  	this->secretaire=secretaire;
}

infirmier* service:: getinfirmier(){
	return tabinf;
}

void service:: setdate(date pdt){
	lancdaff=pdt;
	
}

bool service:: testinf(infirmier inf){ //parcourir le tableux des infermier et si on trouve l?iinfermier passe en parametre
// return true snn return false
	
        for(int i=0 ;i<nbinf;i++ ){
    	if(tabinf[i].getid()==inf.getid()){
    		return true;
		}
		
	}
	
	return false;
}

	
bool service:: ajoutinf(infirmier inf){
	//parcourir le tableux des infermier et si on trouve l?iinfermier passe en parametre
// on ne laisse pas le user de enter linfermier snn il entre linfermier

if(testinf(inf)==true){
return false;
}
 tabinf[nbinf]=inf;
 nbinf++;
 return true;
}


bool service:: modf(infirmier inf){	//parcourir le tableux des infermier et si on trouve l?infermier passe en parametre
// on  laisse le user le modifier snn on ne le laisse pas
int i;
if(testinf(inf)==true){
        for(i=0 ;i<nbinf;i++ ){
    	if(tabinf[i].getid()==inf.getid()){
    		break;
		}
}	tabinf[i].saisir();
		return true;	
}
else
 return false;

}


bool service:: modfchef(string med){//modifie le nom medcin chef
	mdcf.setnom(med);
	return true;
};
	
service t[100];
int nbs=0;


bool testserv(service s){	//parcourir le tableux des service et si on trouve l?service passe en parametre
// return true snn return false
	for(int i=0;i<nbs;i++){
		if(s.getcode()==t[i].getcode())
		return true;
	}
	return false;
}


bool testinf(infirmier s){//parcourir le tableux des service e chaque service on cherche linfermier passe en parametre 
// si on trouve return true snn return false
	for(int i=0;i<nbs;i++){
for(int j=0;j<t[i].getnbinf();j++){
	if(t[i].getinfirmier()->getid()==s.getid()){
		return true;
	}
}
	}
	return false;
}

bool ajoutserv(service s){
if(testserv(s))
return false;
else{
	t[nbs]=s;
	nbs++;
	return true;
}
}

bool ajouterinf(infirmier inf , service s){
int i;
//pour reserver la position de service
if(!testserv(s))
return false;
else{
if(testinf(inf))
return false;

else{
		for(i=0;i<nbs;i++){
for(int j=0;j<t[i].getnbinf();j++){

		if(t[i].getinfirmier()->getid()==inf.getid()){
		break;break;
	}
}
t[i].ajoutinf(inf);//ajouter infermier au seis du service
return true;
	}	
}
}
}

bool modnomserv(service s , string nom){//
	if(!testserv(s))
return false;
else{int i;

	for(i=0;i<nbs;i++){
		if(s.getcode()==t[i].getcode())
		break;
	}
	t[i].setnom(nom);
	return true;
}
}


void affserv(){
	for(int i=0 ;i< nbs;i++){
		t[i].afficher();
		
	}
}

void affinfer(){
	
	for(int i=0;i<nbs;i++){
for(int j=0;j<t[i].getnbinf();j++){
	if(2024 - t[i].getinfirmier()[j].getdate().a < 10){
	t[i].getinfirmier()[j].afficher();
	}
	}
	}
	}
	




void affservdix(){
	for(int i=0 ;i< nbs;i++){
		if(2024 - t[i].getdate().a>10 )
		t[i].afficher();
		
	}
}

bool suppser(service s){
int i,x=0;

	for(i=0;i<nbs;i++){
	if(t[i].getcode()==s.getcode())
	x=1;break;
	}
	if(x==1){
		for(int j=i;j<nbs;j++){
			t[j]=t[j+1];
		}
		nbs--;
		return true;
	}
	else return false;	
}


int menu(){
	int m;
	system("cls");
	system("color 50");
	cout<<"\t \t ----------------------------------------------------"<<endl;
	cout<<"\t \t |    			tarik laaouane       		        |"<<endl;
	cout<<"\t \t ----------------------------------------------------"<<endl;
	cout<<"\t \t ----------------------------------------------------"<<endl;
	cout<<"\t \t |                   GESTION HOPITAL                |"<<endl;
	cout<<"\t \t ----------------------------------------------------"<<endl;
	cout<<"\t \t |1-tester si un infermier existe dans un service   |"<<endl;
	cout<<"\t \t |2-tester si une service existe				    |"<<endl;
	cout<<"\t \t |3-ajouter un service	                            |"<<endl;
	cout<<"\t \t |4-ajouter un infermier dans un service            |"<<endl;
	cout<<"\t \t |5-suprimmer un service                            |"<<endl;
	cout<<"\t \t |6-afficher toutes les services                    |"<<endl;
	cout<<"\t \t |7-les infermiers ont moin de 10 ans experience    |"<<endl;
	cout<<"\t \t |8-les services ont plus de 10 ans experience 		|"<<endl;
	cout<<"\t \t |9-modifier le nom d un service		    	    |"<<endl;
	cout<<"\t \t |0-quitter                                         |"<<endl;
	cout<<"\t \t ----------------------------------------------------"<<endl;
	cout<<"\t \t |       taper le numero qui vous convient :        |"<<endl;
	cout<<"\t \t ----------------------------------------------------"<<endl;
	cin >>m;
	return m;
}








