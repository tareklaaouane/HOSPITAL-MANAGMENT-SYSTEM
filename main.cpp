#include "hopital.h"
#include <iostream>
#include <string>
#include <time.h>



main(){
	int m;

infirmier inf;
service s;
bool x;
do{

	do{
	m=menu();
	}	while(m>9 || m<0);
	
	switch(m){
		case 1:{system("cls");
	cout<<"\t \t ----------------------------------------------------"<<endl;
	cout<<"\t \t | GESTION HOPITAL   :    test d'un infermier            |"<<endl;
	cout<<"\t \t ----------------------------------------------------"<<endl;
	inf.saisiri();
			x=testinf(inf);
			if(x)
			cout<<"l infermier existe dans un service"<<endl;
			else
			cout<<"l infermier  n existe pas dans un service"<<endl;
			system("pause");
			break;
		}
		case 2:{system("cls");
	cout<<"\t \t ----------------------------------------------------"<<endl;
	cout<<"\t \t | GESTION HOPITAL   :    test d'un service      |"<<endl;
	cout<<"\t \t ----------------------------------------------------"<<endl;
	s.saisiri();
			x=testserv(s);
			if(x)
			cout<<"le service existe deja "<<endl;
			else
			cout<<"le service n existe pas "<<endl;
			system("pause");
			break;
		}
		case 3:{system("cls");

	cout<<"\t \t ----------------------------------------------------"<<endl;
	cout<<"\t \t | GESTION HOPITAL  :        ajout d'un service	    |"<<endl;
	cout<<"\t \t ----------------------------------------------------"<<endl;	
		 	s.saisir();
			x=ajoutserv(s);
			if(x)
			cout<<"le service ajoute avec succes "<<endl;
			else
			cout<<"le service nest pas ajoute "<<endl;
			system("pause");
			break;
		}
		
		case 4:{system("cls");
	cout<<"\t \t ----------------------------------------------------"<<endl;
	cout<<"\t \t | GESTION HOPITAL  : ajout infermier dans un service|"<<endl;
	cout<<"\t \t ----------------------------------------------------"<<endl;
    s.saisiri();
    inf.saisir();
			x=ajouterinf(inf,s);
			if(x)
			cout<<"le infermier ajoute avec succes "<<endl;
			else
			cout<<"le infermier n est pas ajoute "<<endl;
			system("pause");
			break;
		}		
		case 5:{system("cls");
	cout<<"\t \t ----------------------------------------------------"<<endl;
	cout<<"\t \t | GESTION HOPITAL   : suppression d'un service |"<<endl;
	cout<<"\t \t ----------------------------------------------------"<<endl;
  s.saisiri();
  			x=suppser(s);
			if(x)
			cout<<"le service suprime avec succes "<<endl;
			else
			cout<<"le service nest pas supprime "<<endl;
			system("pause");
			break;
		}
		case 6:{system("cls");
	cout<<"\t \t ----------------------------------------------------"<<endl;
	cout<<"\t \t |  GESTION HOPITAL  :  affichage touts les services |"<<endl;
	cout<<"\t \t ----------------------------------------------------"<<endl;
		affserv( );
		system("pause");
			break;
		}
		case 7:{system("cls");
	cout<<"\t \t -----------------------------------------------------------------"<<endl;
	cout<<"\t \t|GESTION HOPITAL  : les infermiers ont moin de 10 ans experience |"<<endl;
	cout<<"\t \t -----------------------------------------------------------------"<<endl;
	 affinfer( );
	system("pause");
			break;
		}
		case 8:{system("cls");
	cout<<"\t \t -------------------------------------------------------------------"<<endl;
	cout<<"\t \t | GESTION HOPITAL  :  les services ont plus de 10 ans experience  |"<<endl;
	cout<<"\t \t -------------------------------------------------------------------"<<endl;
	affservdix();
	system("pause");
			break;
		}	
		case 9:{system("cls");
	cout<<"\t \t -----------------------------------------------"<<endl;
	cout<<"\t \t |GESTION HOPITAL:modifier le nom d un service |"<<endl;
	cout<<"\t \t -----------------------------------------------"<<endl;
	s.saisiri();
	string nom;
cout<<"saisir le nouveau nom";
cin>>nom;
	 			x= modnomserv(s,nom);
			if(x)
			cout<<"le service modifie avec succes "<<endl;
			else
			cout<<"le service n est pas modifie "<<endl;
			system("pause");
			break;
	system("pause");
			break;
		}
		case 0:{system("cls");
	cout<<"\t \t ----------------------------------------------------"<<endl;
	cout<<"\t \t |    GESTION HOPITAL  :  AU REVOIR ;)               |"<<endl;
	cout<<"\t \t ----------------------------------------------------"<<endl;
	
	system("pause");
			break;
		}					
	}
	
	
	}while (m!=0);

}

