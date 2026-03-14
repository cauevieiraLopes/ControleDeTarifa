#include <iostream>

using namespace std;
int main()
{
	float taxa, saldo, giro, confirmar;
	taxa = 5.60;
	
	cout<<"=====Catraca de ônibus=====\n";
	cout<<"Tarifa: R$5.60\n";
	cout<<"Qual o seu saldo? R$";
	
	cin>>saldo;
	
	giro = giro + 1;
	
	system("cls");
	
	if(saldo < taxa)
	{
		cout<<"Saldo insuficiênte!\n";
		cout<<"Seu saldo atual é de: R$"<<saldo<<"\n";
		cout<<"Faltam: R$"<<taxa - saldo<<" para realizar o pagamento!";
		
		return 0;
	}
	
	do{
	
		cout<<"=====Catraca de ônibus=====\n";
		cout<<"Passagem autorizada\n";
		cout<<"Saldo restante: R$"<<saldo - taxa<<"\n";
		cout<<"N° de giros: "<<giro<<"\n";
		cout<<"Deseja continuar?\n";
		cout<<"[1]Sim\n[0]Não\n";
		
		cin>>confirmar;
		
		system("cls");
		
		if(confirmar > 1 || confirmar < 0)
		{
			do{
				cout<<"Selecione uma das alternativas corretamente:\n";
				cout<<"Deseja continuar?\n";
				cout<<"[1]Sim\n[0]Não\n";
				cin>>confirmar;
				system("cls");
			}while(confirmar > 1 || confirmar < 0);
		}
		
		saldo = saldo - taxa;
		
		++giro;
	
		if(saldo < taxa)
		{
			cout<<"=====Catraca de ônibus=====\n";
			cout<<"Seu saldo chegou no limite, recarregue!";
			
			return 0;
		}
		
	}while(confirmar != 0);
	
	cout<<"=====Catraca de ônibus=====\n";
	cout<<"Muito onbrigado, volte sempre!";
	
	return 0;
}
