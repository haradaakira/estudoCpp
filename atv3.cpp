#include<iostream>
using namespace std;

int main(){
	char mesa[3][3];
	int x, y, a, b, loop;
	char c;
	
	//INSTRUCAO PARA USUARIO.
	cout<<"Jogo da velha: insira de 0 a 2 para linha e depois para coluna, X ou O para marcacao: "<<endl;
	cout<<endl;
	cout<<"Exemplo:"<<endl;
	cout<<endl;
	cout<<"	  0 1 2"<<endl;
	cout<<"	0| | | |"<<endl;
	cout<<"	--------"<<endl;
	cout<<"	1| | | | "<<endl;
	cout<<"	--------"<<endl;
	cout<<"	2| | | | "<<endl;
	cout<<endl;
	system("pause"); //TECLE ALGO PARA CONTINUAR.
	system("cls"); //LIMPA A TELA.
	
	for(x=0; x<=2; x++) //POSICIONAR "?" PARA NAO APRESENTAR SUJEIRAS DA MEMORIA NA TABELA/MESA.
		for(y=0; y<=2; y++)
			mesa[y][x]='?';
//---------------------------------------------------------------------------------------------------------------------------------------		
		loop = 0;
		while ((loop == 0) || (loop <= 8)){
			cout<<"Jogo da velha: insira de 0 a 2 para linha e depois para coluna, X ou O para marcacao: "<<endl;
			cout<<endl;
			cout<<"O jogo comecou."<<endl;
			cout<<endl;
			cout<<"	  0 1 2"<<endl;
			cout<<"	0|"<<mesa[0][0]<<"|"<<mesa[0][1]<<"|"<<mesa[0][2]<<"|"<<endl;
			cout<<"	--------"<<endl;
			cout<<"	1|"<<mesa[1][0]<<"|"<<mesa[1][1]<<"|"<<mesa[1][2]<<"|"<<endl;
			cout<<"	--------"<<endl;
			cout<<"	2|"<<mesa[2][0]<<"|"<<mesa[2][1]<<"|"<<mesa[2][2]<<"|"<<endl;
			cout<<endl;
			
			cout<<"Digite a linha: ";
			cin>>a;
			cout<<"Digite a coluna: ";
			cin>>b;
			cout<<"Digite a letra X ou O: ";
			cin>>c;
//---------------------------------------------------------------------------------------------------------------------------------------			
			if (a<0||a>2||b<0||b>2){
				cout<<endl;
				cout<<"O valor digitado esta fora do range!!!"<<endl;
				cout<<endl;
				system("pause");}
			else
				if (mesa[a][b]=='X'||mesa[a][b]=='O'){
					cout<<endl;
					cout<<"Marque outra posicao!!!"<<endl;
					cout<<endl;
					system("pause");}
				else
					mesa[a][b]=c;
					++loop;
			
			if (mesa[0][0]=='X'&&mesa[1][1]=='X'&&mesa[2][2]=='X' || mesa[0][2]=='X'&&mesa[1][1]=='X'&&mesa[2][0]=='X')
			loop=11;
			else if (mesa[0][2]=='O'&&mesa[1][1]=='O'&&mesa[2][0]=='O' || mesa[0][0]=='O'&&mesa[1][1]=='O'&&mesa[2][2]=='O')
			loop=12;
			
			if (mesa[0][0]=='X'&&mesa[0][1]=='X'&&mesa[0][2]=='X' || mesa[1][0]=='X'&&mesa[1][1]=='X'&&mesa[1][2]=='X' || mesa[2][0]=='X'&&mesa[2][1]=='X'&&mesa[2][2]=='X')
			loop=11;
			else if (mesa[0][0]=='X'&&mesa[1][0]=='X'&&mesa[2][0]=='X' || mesa[0][1]=='X'&&mesa[1][1]=='X'&&mesa[2][1]=='X' || mesa[0][2]=='X'&&mesa[1][2]=='X'&&mesa[2][2]=='X')
			loop=11;
			
			if (mesa[0][0]=='O'&&mesa[0][1]=='O'&&mesa[0][2]=='O' || mesa[1][0]=='O'&&mesa[1][1]=='O'&&mesa[1][2]=='O' || mesa[2][0]=='O'&&mesa[2][1]=='O'&&mesa[2][2]=='O')
			loop=12;
			else if (mesa[0][0]=='O'&&mesa[1][0]=='O'&&mesa[2][0]=='O' || mesa[0][1]=='O'&&mesa[1][1]=='O'&&mesa[2][1]=='O' || mesa[0][2]=='O'&&mesa[1][2]=='O'&&mesa[2][2]=='O')
			loop=12;
			
			system("cls");
//---------------------------------------------------------------------------------------------------------------------------------------
	}
	if (loop==11){
		cout<<"O X ganhou!!"<<endl;
		system("pause");
		cout<<"Fim do jogo.";}
	
	else if (loop==12){
		cout<<"O O ganhou!!"<<endl;
		system("pause");	
	cout<<"Fim do jogo.";}
	
	else if (loop==9){
		cout<<"Empate!!"<<endl;
		system("pause");	
	cout<<"Fim do jogo.";}
	
return 0;
}
