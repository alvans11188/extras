#include <iostream>
#include <string.h>
#define MAX 10
using namespace std;
struct paciente
{
		char hc[15],nomb[20];
		float peso,talla,imc;
			
};
void inserta_d(paciente *,int &);
void elimina_d(paciente *, int &);
void modifica_d(paciente *, int &);
void mostrar(paciente *, int );

int main(){
	paciente x[MAX];
	int op,opc,n=-1,i;
	do{
		system("cls");
		cout<<"\nMENU"<<endl;
		cout<<"\n1-ARRAY DESORDENADO";
		cout<<"\n2-ARRAY ORDENADO";
		cin>>(op);
		switch(op){
			case 1:
				do
				{
					system("cls")	;
					cout<<"\nARREGLOS DESORDENADOS";
					cout<<"\n1-INASERTAR";
					cout<<"\n2-ELIMINAR";
					cout<<"\n3-MODIFICAR";
					cout<<"\n4-MOSTRAR";
					cout<<"\n5-SALIR";
					cout<<"\n\n6-OPCION";
					cin>>opc;
					system("cls");
					switch(opc){
						case 1:
							inserta_d(x,n);
							mostrar(x,n);
							break;
						case 2:
							//elimina_d(x,n);
							mostrar(x,n);
							break;
						case 3:
							//modifica_d(x,n);
							mostrar(x,n);
							break;
						case 4:
							mostrar(x,n);
							break;
						case 5:
							break;
					}
				} 
				while(opc>0&&opc<5);
				break;
		}
	}
	return 0;
}
/*
void inserta_d(paciente *x, int &n)
{
	int i,j,cen;
	char hclinica[10];
	if(n<MAX-1){
		cen=0;
		i=0;
		cout<<"\n\n\nDATOS DEL REGISTRO A INSTAR"; cou << "\n\n\t\tHISTORIA CLINICA   :";
		cin>>hclinica;
		if(n>-1)
		{
			while((i<=n)&&(cen==0))
			{
				if(strcmp(x[i].hc,hclinica)==0)
				cen=1
			} 
			else
			{
				i++;
			}
		}
		if(cen==0)
		{
			n=n+1;
			strcpy(x[i].hc,hclinica);
			cout << "\n\n\t\tNOMBRE :"; cin>>x[i].nomb;
			cout << "\n\n\t\tPESO :"; cin>>x[i].peso;
			cout << "\n\n\t\tTALLA :"; cin>>x[i].talla;
			x[i].imc=(x[i].peso/(x[i].talla*x[i].talla));
			cout << "\n\n\t\tEL INDICE DE MASA CORPORAL ES: "; cin>>x[i].imc;
		}
		else
		{
			cout << "\n\n\t\tEL DATO YA ESTA REGISTRADO ";
		}
	}
	else
	{
		cout << "\n\n\t\tEL ARREGLO YA ESTA LLENO";
	}
}

void mostrar(paciente *x,int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		cout <<"\nX["<<i+1<<"] : \n\n";
		cout << "\n\n\t\tHISTORIA CLINICA "<<x[i].hc;
		cout << "\n\n\t\tNOMBRE 					:"<<x[i].nomb;
		cout << "\n\n\t\tPESO						:"<<x[i].peso;
		cout << "\n\n\t\tTALLA						:"<<x[i].talla;
		cout << "\n\n\t\tINDICE DE MASA CORPORAL	: "<<x[i].imc;
	}
	cout <<"\n\n";
	system("pausa");
	
}
*/