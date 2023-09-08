#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <list>
#include <map>
using namespace std;




int main(){
	
	vector<int>player1;
	vector<int>player2;
	vector<int>player3;
	vector<int>::iterator it;
	int n1, n2, n3;
	int qtde1, qtde2, qtde3;
	qtde1=0;
	qtde2=0;
	qtde3=0;
	
	n1=0;
	n2=0;
	n3=0;
	
	char cpo;
	bool victory=false;
	int escolha1, escolha2, escolha3;
    bool vitoria1, vitoria2, vitoria3;
    int pontos1, pontos2, pontos3;
    pontos1=0;
    pontos2=0;
    pontos3=0;
    
	vitoria1=false;
	vitoria2=false;
	vitoria3=false;
	char opc='s';
	
	
	deque<int>cartas;
    int fase=0;

	while((opc=='s') or (opc=='S')){
		
		
	srand(time(NULL));
	cartas.clear();
	player1.clear();
	player2.clear();
	player3.clear();
	n1=0;
	n2=0;
	n3=0;
	qtde1=0;
	qtde2=0;
	qtde3=0;
	vitoria1=false;
	vitoria2=false;
	vitoria3=false;
	fase++;
	
		
		
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
    cartas.push_back(1+rand()%10);
    cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	list<int>monte;
	int compra;
	
	
	
		
	cout << "O blackJack vai iniciar, vamos distribuir as cartas dos jogadores... Jogador 1, se apresente e receba suas cartas: " << endl << endl;
	system("pause");
	system("cls");
	
	cout << "Jogador 1" << endl << endl;
	
	
	player1.push_back(cartas.back());
	cartas.pop_back();
	player1.push_back(cartas.back());
	cartas.pop_back();
	player1.push_back(cartas.back());
	cartas.pop_back();
	
	cout << "Cartas atuais do Jogador 1: " << endl;
	
	for(auto i:player1){
		
		cout << i << endl;
		
		
		
		
		
		
		
	}
	
	
	
	cout << endl << endl;
	
	
	cout << "Jogador 1, agora eh a vez do jogador 2 ter suas cartas distribuidas, Jogador 2, se apresente e receba suas cartas: " << endl << endl;
	
	system("pause");
	system("cls");
	
	cout << "Jogador 2" << endl << endl;
	
	
	player2.push_back(cartas.back());
	cartas.pop_back();
	player2.push_back(cartas.back());
	cartas.pop_back();
	player2.push_back(cartas.back());
	cartas.pop_back();
	
	cout << "Cartas atuais do Jogador 2: " << endl;
	
	for(auto i:player2){
		
		cout << i << endl;
		
		
		
		
		
		
		
	}
	
	cout << endl << endl;
	
	
	cout << "Jogador 2, agora eh a vez do jogador 3 ter suas cartas distribuidas, Jogador 3, se apresente e receba suas cartas: " << endl << endl;
	system("pause");
	system("cls");
	
	
	cout << "Jogador 3" << endl << endl;
	
	
	player3.push_back(cartas.back());
	cartas.pop_back();
	player3.push_back(cartas.back());
	cartas.pop_back();
	player3.push_back(cartas.back());
	cartas.pop_back();
	
	cout << "Cartas atuais do Jogador 3: " << endl;
	
	for(auto i:player3){
		
		cout << i << endl;
		
		
		
		
		
		
		
	}
	
	cout << endl << endl;
	
	system("pause");
	system("cls");
	
	cout << "Agora que todos coletaream suas cartas iniciais, vamos jogar ate o primeiro jogador tiver 21 pontos" << endl;
	system("pause");
	system("cls");
	
	while(victory!='p'){
		
		system("pause");
		cout << "Cartas atuais do Jogador 1: " << endl << endl;
		for(auto i:player1){
			
			
			cout << i << endl;
			
			
			
			
		}
		
		if(!monte.empty()){
			
		
			cout << endl << "Carta atual do monte: " << monte.back() << endl;
			
			
			
			
		}else{
			
			
			cout << endl << "Nao ha cartas no monte" << endl;
			
			
			
			
		}
		
		cout << endl << endl;
		system("pause");
		system("cls");
		
		
		
		cout << "Jogador 1, deseja comprar uma carta?[s/n]";
		cin >> cpo;
		
	
	
	
	
	    
	    
	    if((cpo=='s') or (cpo=='S')){
	    	
	
	    	cout << endl << endl << "Digite 1 para comprar do monte e 2 para comprar da ultima carta descartada";
	    	cin >> compra;
	    	
	    	switch(compra){
	    		
	    		case 1:
	    	player1.push_back(cartas.back());
	    	cout << "voce comprou a carta " << cartas.back() << endl;
	    	system("pause");
	    	system("cls");
	    	cartas.pop_back();
	    	break;
	    	
	    	case 2:
	    	
	    	if(!monte.empty()){
	    		player1.push_back(monte.back());
	    		cout << "voce comprou a carta " << monte.back() << endl;
	    		system("pause");
	    		system("cls");
	    		monte.pop_back();
	    		
	    	}else{
	    		
	    		
	    		cout << "NAO ha nenhuma carta decartavel para comprar, continue o jogo" << endl;
	    		system("pause");
	    		system("cls");
	    		
	    		
	    		
	    		
			}
	    		
	    		
	    		
	    		break;
	    		
	    		default:
	    		cout << "Opcao nao encontrada, continue o jogo" << endl;
	    		system("pause");
	    		system("cls");
	    		break;
	    		
	    		
	    		
	    		
			
	    	
	    	
	    		
	    		
	    		
	    		
	    		
	    		
			}
	    	
	    	
	    	
	    	
	    	
	    
	    	
	    	
	    	
	    	
	    	
	    	
	    	
	    	
	    	
		}else{
			
			cout << "Ok, continue o jogo" << endl;
			system("pause");
	    	system("cls");
			
			
			
			
			
		}
	
		
		cout << "Cartas atuais do Jogador 1: " <<  endl << endl;
		
		for(auto i:player1){
			
			
			cout << i << endl;
			
			
			
			
		}
		
			if(!monte.empty()){
			
		
			cout << endl << "Carta atual do monte: " << monte.back() << endl;
			
			
			
			
		}else{
			
			
			cout << endl << "Nao ha cartas no monte" << endl;
			
			
			
			
		}
		
		
		
		
		
		cout << "Jogador 1, Qual carta voce deseja descartar?" << setw(50) << " digite 5 caso voce tenha 21 ou acha que tem o numero mais perto de 21" << endl << endl;
		cin >> escolha1;
		
        	if(escolha1==1){
		
	      	cout << "Voce descartou a carta " << player1.at(0) << endl;
			monte.push_back(player1.at(0));
			system("pause");
			system("cls");
			it=player1.begin();
			player1.erase(it);
		
		
		
		
		
	}else if(escolha1==2){
		
	    	cout << "Voce descartou a carta " << player1.at(1) << endl;
			monte.push_back(player1.at(1));
			system("cls");
			it=player1.begin()+1;
			player1.erase(it);
		
		
		
		
	}else if(escolha1==3){
		
			cout << "Voce descartou a carta " << player1.at(2) << endl;
			monte.push_back(player1.at(2));
			system("pause");
			system("cls");
			it=player1.begin()+2;
			player1.erase(it);
		
		
		
		
		
	}else if(escolha1==4){
		
			cout << "Voce descartou a carta " << player1.at(3) << endl;
			monte.push_back(player1.at(3));
			system("pause");
			system("cls");
			it=player1.begin()+3;
			player1.erase(it);
		
		
		
		
	}else if(escolha1==5){
		
		victory='p';
		break;
		
		
		
		
		
	}else{
		
		cout << "Opcao nao encontrada, continue o jogo" << endl;
		system("pause");
     	system("cls");
		
		
		
		
		
		
	}
	
	
	
		
		    
			system("pause");
		cout << "Cartas atuais do Jogador 2: " << endl << endl;
		for(auto i:player2){
			
			
			cout << i << endl;
			
			
			
			
		}
		
		if(!monte.empty()){
			
		
			cout << endl << "Carta atual do monte: " << monte.back() << endl;
			
			
			
			
		}else{
			
			
			cout << endl << "Nao ha Cartas no monte" << endl;
			
			
			
			
		}
		
		cout << endl << endl;
		system("pause");
		system("cls");
		
		
		
		cout << "Jogador 2, deseja comprar uma carta?[s/n]";
		cin >> cpo;
		
	
	
	
	
	    
	    
	    if((cpo=='s') or (cpo=='S')){
	    	
	
	    	cout << endl << endl << "Digite 1 para comprar do monte e 2 para comprar da ultima carta descartada";
	    	cin >> compra;
	    	
	    	switch(compra){
	    		
	    		case 1:
	    	player2.push_back(cartas.back());
	    	cout << "voce comprou a carta " << cartas.back() << endl;
	    	system("pause");
	    	system("cls");
	    	cartas.pop_back();
	    	break;
	    	
	    	case 2:
	    	
	    	if(!monte.empty()){
	    		player2.push_back(monte.back());
	    		cout << "voce comprou a carta " << monte.back() << endl;
	    		system("pause");
	    		system("cls");
	    		monte.pop_back();
	    		
	    	}else{
	    		
	    		
	    		cout << "NAO ha nenhuma carta decartavel para comprar, continue o jogo" << endl;
	    		system("pause");
	    		system("cls");
	    		
	    		
	    		
	    		
			}
	    		
	    		
	    		
	    		break;
	    		
	    		default:
	    		cout << "Opcao nao encontrada, continue o jogo" << endl;
	    		system("pause");
	    		system("cls");
	    		break;
	    		
	    		
	    		
	    		
			
	    	
	    	
	    		
	    		
	    		
	    		
	    		
	    		
			}
	    	
	    	
	    	
	    	
	    	
	    
	    	
	    	
	    	
	    	
	    	
	    	
	    	
	    	
	    	
		}else{
			
			cout << "Ok, continue o jogo" << endl;
			system("pause");
	    	system("cls");
			
			
			
			
			
		}
	
		
		cout << "Cartas atuais do Jogador 2: " <<  endl << endl;
		
		for(auto i:player2){
			
			
			cout << i << endl;
			
			
			
			
		}
		
			if(!monte.empty()){
			
		
			cout << endl << "Carta atual do monte: " << monte.back() << endl;
			
			
			
			
		}else{
			
			
			cout << endl << "Nao ha cartas no monte" << endl;
			
			
			
			
		}
		
		
		
		cout << "Jogador 2, Qual carta voce deseja descartar?" << setw(50) << " digite 5 caso voce tenha 21 ou acha que tem o numero mais perto de 21" << endl << endl;
		cin >> escolha2;
		
			if(escolha2==1){
				
			cout << "Voce descartou a carta " << player2.at(0) << endl;
			monte.push_back(player2.at(0));
			system("pause");
			system("cls");
			it=player2.begin();
			player2.erase(it);
				
				
				
				
			}else if(escolha2==2){
				
			cout << "Voce descartou a carta " << player2.at(1) << endl;
			monte.push_back(player2.at(1));
			system("cls");
			it=player2.begin()+1;
			player2.erase(it);
				
				
				
				
				
			}else if(escolha2==3){
				
			cout << "Voce descartou a carta " << player2.at(2) << endl;
			monte.push_back(player2.at(2));
			system("pause");
			system("cls");
			it=player2.begin()+2;
			player2.erase(it);
				
				
				
				
			}else if(escolha2==4){
				
			cout << "Voce descartou a carta " << player2.at(3) << endl;
			monte.push_back(player2.at(3));
			system("pause");
			system("cls");
			it=player2.begin()+3;
			player2.erase(it);
				
				
				
				
				
			}else if(escolha2==5){
				
				victory='p';
		    	break;
				
				
				
			}else{
				
		cout << "Opcao nao encontrada, continue o jogo" << endl;
		system("pause");
     	system("cls");
		
				
				
				
				
			}
	
	      
	       
	
	
		
		
		
			system("pause");
		cout << "Cartas atuais do Jogador 3: " << endl << endl;
		for(auto i:player3){
			
			
			cout << i << endl;
			
			
			
			
		}
		
		if(!monte.empty()){
			
		
			cout << endl << "Carta atual do monte: " << monte.back() << endl;
			
			
			
			
		}else{
			
			
			cout << endl << "Nao ha Cartas no monte" << endl;
			
			
			
			
		}
		
		cout << endl << endl;
		system("pause");
		system("cls");
		
		
		
		cout << "Jogador 3, deseja comprar uma carta?[s/n]";
		cin >> cpo;
		
	
	
	
	
	    
	    
	    if((cpo=='s') or (cpo=='S')){
	    	
	
	    	cout << endl << endl << "Digite 1 para comprar do monte e 2 para comprar da ultima carta descartada";
	    	cin >> compra;
	    	
	    	switch(compra){
	    		
	    		case 1:
	    	player3.push_back(cartas.back());
	    	cout << "voce comprou a carta " << cartas.back() << endl;
	    	system("pause");
	    	system("cls");
	    	cartas.pop_back();
	    	break;
	    	
	    	case 2:
	    	
	    	if(!monte.empty()){
	    		player3.push_back(monte.back());
	    		cout << "voce comprou a carta " << monte.back() << endl;
	    		system("pause");
	    		system("cls");
	    		monte.pop_back();
	    		
	    	}else{
	    		
	    		
	    		cout << "NAO ha nenhuma carta decartavel para comprar, continue o jogo" << endl;
	    		system("pause");
	    		system("cls");
	    		
	    		
	    		
	    		
			}
	    		
	    		
	    		
	    		break;
	    		
	    		default:
	    		cout << "Opcao nao encontrada, continue o jogo" << endl;
	    		system("pause");
	    		system("cls");
	    		break;
	    		
	    		
	    		
	    		
			
	    	
	    	
	    		
	    		
	    		
	    		
	    		
	    		
			}
	    	
	    	
	    	
	    	
	    	
	    
	    	
	    	
	    	
	    	
	    	
	    	
	    	
	    	
	    	
		}else{
			
			cout << "Ok, continue o jogo" << endl;
			system("pause");
	    	system("cls");
			
			
			
			
			
		}
	
		
		cout << "Cartas atuais do Jogador 3: " <<  endl << endl;
		
		for(auto i:player3){
			
			
			cout << i << endl;
			
			
			
			
		}
		
			if(!monte.empty()){
			
		
			cout << endl << "Carta atual do monte: " << monte.back() << endl;
			
			
			
			
		}else{
			
			
			cout << endl << "Nao ha cartas no monte" << endl;
			
			
			
			
		}
		
		
		
		cout << "Jogador 3, Qual carta voce deseja descartar?" << setw(50) << " digite 5 caso voce tenha 21 ou acha que tem o numero mais perto de 21" << endl << endl;
		cin >> escolha3;
		
		if(escolha3==1){
			
			cout << "Voce descartou a carta " << player3.at(0) << endl;
			monte.push_back(player3.at(0));
			system("pause");
			system("cls");
			it=player3.begin();
			player3.erase(it);
			
			
			
			
		}else if(escolha3==2){
			
			cout << "Voce descartou a carta " << player3.at(1) << endl;
			monte.push_back(player3.at(1));
			system("cls");
			it=player3.begin()+1;
			player3.erase(it);
			
			
			
			
			
			
		}else if(escolha3==3){
			
			
			cout << "Voce descartou a carta " << player3.at(2) << endl;
			monte.push_back(player3.at(2));
			system("pause");
			system("cls");
			it=player3.begin()+2;
			player3.erase(it);
			
			
			
			
			
		}else if(escolha3==4){
			
			cout << "Voce descartou a carta " << player3.at(3) << endl;
			monte.push_back(player3.at(3));
			system("pause");
			system("cls");
			it=player3.begin()+3;
			player3.erase(it);
			
			
			
			
			
			
		}else if(escolha3==5){
			
			victory='p';
			break;
			
			
			
			
		}else{
			
			
		cout << "Opcao nao encontrada, continue o jogo" << endl;
		system("pause");
     	system("cls");
		
			
			
			
			
		}


	if(cartas.empty()){
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
    cartas.push_back(1+rand()%10);
    cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
	cartas.push_back(1+rand()%10);
		
		
		
		
		
	}
	
	
		
		
		
		
		
	}
	system("cls");
	system("pause");
	
	cout << endl << endl;
		
		for(auto x:player1){
			
			
			n1+=x;
			qtde1++;
			
			
			
			
			
		}
		
		
		
				for(auto b:player2){
			
			
			n2+=b;
			qtde2++;
			
			
			
			
			
		}
		
		
		
		
		for(auto k:player3){
			
			
		n3+=k;
		qtde3++;
			
			
			
			
			
		}
		
			if(n1==21){
			
			cout << "Jogador 1 venceu por atingir exatos 21 pontos" << endl;
			vitoria1=true;
			
			
			
			
			
		}else if((n1<n2) or (n1<n3)){
			
			cout << "Jogador 1 Perdeu pois seus pontos sao menores que outros jogadores, fazendo assim  " << n1 << " pontos" << endl;
			
			
			
			
			
			
		}
		
		 if(n2==21){
			
			cout << "Jogador 2 venceu por atingir exatos 21 pontos" << endl;
			vitoria2=true;
			
			
			
			
		}else if((n2<n1) or (n2<n3)){
			
		cout << "Jogador 2 Perdeu pois seus pontos sao menores que outros jogadores, fazendo assim  " << n2 << " pontos" << endl;
			
			
			
			
			
			
		}
	      
		   if(n3==21){
			
			cout << "Jogador 3 venceu por atingir exatos 21 pontos" << endl;
			vitoria3=true;
			
			
			
			
		}else if((n3<n1) or (n3<n2)){
			
			
			cout << "Jogador 3 Perdeu pois seus pontos sao menores que outros jogadores, fazendo assim  " << n3 << " pontos" << endl;
			
			
			
			
		}
		
		
		
	
		
		    if((n1>=22) and (n2>=22) and (n3>=22)){
			system("cls");
		   
			cout << "Todos perderam por terem estourado o valor maximo de pontos" << endl;
		    cout << "Jogador 1 estourou a banca com " << n1 << " pontos" << endl;
		    cout << "Jogador 2 estourou a banca com " << n2 << " pontos" << endl;
			cout << "Jogador 3 estourou a banca com " << n3 << " pontos" << endl;
			
			
			
			
			
		}else if(n1>=22){
		system("cls");

			
			cout << "Jogador 1 perdeu porque estorou o valor maximo por fazer " << n1 << " pontos" << endl;
			
			
			if((n2==21) and (n3==21)){
			cout << "Jogador 2 venceu por atingir exatos 21 pontos" << endl;
			cout << "Jogador 3 venceu por atingir exatos 21 pontos" << endl;
			vitoria2=true;
			vitoria3=true;
				
				
				
				
				
				
				
			}
			
			if((n2==21) and (n3<21)){
			cout << "Jogador 2 venceu por atingir exatos 21 pontos" << endl;
			vitoria2=true;
			cout << "Jogador 3 Perdeu pois seus pontos sao menores que outros jogadores, fazendo assim  " << n3 << " pontos" << endl;
				
				
				
				
				
				
				
			}else if((n3==21) and (n2<21)){
			 cout << "Jogador 3 venceu por atingir exatos 21 pontos" << endl;
			vitoria3=true;
			cout << "Jogador 2 Perdeu pois seus pontos sao menores que outros jogadores, fazendo assim  " << n2 << " pontos" << endl;
				
				
				
				
				
				
			}
			
			
		
		   	if((n2>=22)){
				
			cout << "Jogador 2 perdeu porque estorou o valor maximo por fazer " << n2 << " pontos" << endl;
			cout << "Por eliminacao, jogador 3 venceu fazendo " << n3 << " pontos" << endl;
			vitoria3=true;
				
				
				
			}else if(n3>=22){
				
			cout << "Jogador 3 perdeu porque estorou o valor maximo por fazer " << n3 << " pontos" << endl;
			cout << "Por eliminacao, jogador 2 venceu fazendo " << n2 << " pontos" << endl;
			vitoria2=true;
				
				
				
				
				
			}
			
			
			
			if((n2<21) and (n3<21)){
		
			if(n2==max(n2,n3)){
			
			cout << "Ninguem atingiu 21 pontos, o Vencedor por chegar mais proximo de 21 es jogador 2 com " << n2 << " pontos" << endl;
			vitoria2=true;
			
			
			
			
			
			
		}else{
			
			cout << "Jogador 2 Perdeu devido a nao ser o mais proximo de 21 pontos. jogador possue  " << n2 << " pontos" << endl;
		
			
			
		}
		
		
			if(n3==max(n2,n3)){
			
			cout << "Ninguem atingiu 21 pontos, o Vencedor por chegar mais proximo de 21 es jogador 3 com " << n3 << " pontos" << endl;
			vitoria3=true;
			
			
			
			
			
			
		}else{
			
			cout << "Jogador 3 Perdeu devido a nao ser o mais proximo de 21 pontos. jogador possue  " << n3 << " pontos" << endl;
		
			
			
		}
		
		
		
		
		
		
	}
			
			
			
			
		}else if(n2>=22){
		system("cls");
	
		
			cout << "Jogador 2 perdeu porque estorou o valor maximo por fazer " << n2 << " pontos" << endl;
			
			
			
				
			if((n1==21) and (n3==21)){
			cout << "Jogador 1 venceu por atingir exatos 21 pontos" << endl;
			cout << "Jogador 3 venceu por atingir exatos 21 pontos" << endl;
			vitoria1=true;
			vitoria3=true;
				
				
				
				
				
				
				
			}
			
				if((n1==21) and (n3<21)){
			cout << "Jogador 1 venceu por atingir exatos 21 pontos" << endl;
			vitoria1=true;
			cout << "Jogador 3 Perdeu pois seus pontos sao menores que outros jogadores, fazendo assim  " << n3 << " pontos" << endl;
				
				
				
				
				
				
				
			}else if((n3==21) and (n1<21)){
			 cout << "Jogador 3 venceu por atingir exatos 21 pontos" << endl;
			vitoria3=true;
			cout << "Jogador 1 Perdeu pois seus pontos sao menores que outros jogadores, fazendo assim  " << n1 << " pontos" << endl;
				
				
				
				
				
				
			}
			
			
			
			
			
			
			
				if((n1>=22)){
				
			cout << "Jogador 1 perdeu porque estorou o valor maximo por fazer " << n1 << " pontos" << endl;
			cout << "Por eliminacao, jogador 3 venceu fazendo " << n3 << " pontos" << endl;
			vitoria3=true;
				
				
				
			}else if(n3>=22){
				
			cout << "Jogador 3 perdeu porque estorou o valor maximo por fazer " << n3 << " pontos" << endl;
			cout << "Por eliminacao, jogador 1 venceu fazendo " << n1 << " pontos" << endl;
			vitoria1=true;
				
				
				
				
				
			}
			
		if((n1<21) and (n3<21)){
					
		
		if(n1==max(n1,n3)){
			
			cout << "Ninguem atingiu 21 pontos, o Vencedor por chegar mais proximo de 21 es jogador 1 com " << n1 << " pontos" << endl;
			vitoria1=true;
			
			
			
			
			
			
		}else{
			
			cout << "Jogador 1 Perdeu devido a nao ser o mais proximo de 21 pontos. jogador possue  " << n1 << " pontos" << endl;
		
			
			
		}
		
		
		
	
		
		
			if(n3==max(n1,n3)){
			
			cout << "Ninguem atingiu 21 pontos, o Vencedor por chegar mais proximo de 21 es jogador 3 com " << n3 << " pontos" << endl;
			vitoria3=true;
			
			
			
			
			
			
		}else{
		
			cout << "Jogador 3 Perdeu devido a nao ser o mais proximo de 21 pontos. jogador possue  " << n3 << " pontos" << endl;
		
			
			
		}
		
		
		
		
		
		
	}
			
			
				
			
		}else if(n3>=22){
			system("cls");
		
			cout << "Jogador 3 perdeu porque estorou o valor maximo por fazer " << n3 << " pontos" << endl;
			
				
			if((n2==21) and (n1==21)){
			cout << "Jogador 1 venceu por atingir exatos 21 pontos" << endl;
			cout << "Jogador 2 venceu por atingir exatos 21 pontos" << endl;
			vitoria1=true;
			vitoria2=true;
				
				
				
				
				
				
				
			}
			
			
				if((n2==21) and (n1<21)){
			cout << "Jogador 2 venceu por atingir exatos 21 pontos" << endl;
			vitoria2=true;
			cout << "Jogador 1 Perdeu pois seus pontos sao menores que outros jogadores, fazendo assim  " << n1 << " pontos" << endl;
				
				
				
				
				
				
				
			}else if((n1==21) and (n2<21)){
			 cout << "Jogador 1 venceu por atingir exatos 21 pontos" << endl;
			vitoria1=true;
			cout << "Jogador 2 Perdeu pois seus pontos sao menores que outros jogadores, fazendo assim  " << n2 << " pontos" << endl;
				
				
				
				
				
				
			}
			
			if((n1>=22)){
				
			cout << "Jogador 1 perdeu porque estorou o valor maximo por fazer " << n1 << " pontos" << endl;
		    cout << "Por eliminacao, jogador 2 venceu fazendo " << n2 << " pontos" << endl;
			vitoria2=true;
				
				
				
			}else if(n2>=22){
				
			cout << "Jogador 2 perdeu porque estorou o valor maximo por fazer " << n2 << " pontos" << endl;
			cout << "Por eliminacao, jogador 1 venceu fazendo " << n1 << " pontos" << endl;
			vitoria1=true;
				
				
				
				
				
			}
			
			
    	if((n1<21) and (n2<21)){
					
	
		
		if(n1==max(n1,n2)){
			
			cout << "Ninguem atingiu 21 pontos, o Vencedor por chegar mais proximo de 21 es jogador 1 com " << n1 << " pontos" << endl;
			vitoria1=true;
			
			
			
			
			
			
		}else{
			
			cout << "Jogador 1 Perdeu devido a nao ser o mais proximo de 21 pontos. jogador possue  " << n1 << " pontos" << endl;
		
			
			
		}
		
		
		
	
		
		
			if(n2==max(n1,n2)){
			
			cout << "Ninguem atingiu 21 pontos, o Vencedor por chegar mais proximo de 21 es jogador 2 com " << n2 << " pontos" << endl;
			vitoria2=true;
			
			
			
			
			
			
		}else{
		
			cout << "Jogador 2 Perdeu devido a nao ser o mais proximo de 21 pontos. jogador possue  " << n2 << " pontos" << endl;
		
			
			
		}
		
		
		
		
		
		
	}
			
			
				
			
		}
		
		
		if((n1<21) and (n2<21) and (n3<21)){
		system("cls");
		auto analyse=minmax({n1,n2,n3});
		if(n1==analyse.second){
		 cout << "Nenhum jogador atingiu 21 pontos" << endl;
		 cout << "O vencedor por chegar mais proximo foi jogador 1 com " <<  n1  << " pontos"<< endl;
	   	cout << "Jogador 2 Perdeu devido a nao ser o mais proximo de 21 pontos. jogador possue  " << n2 << " pontos" << endl;
		cout << "Jogador 3 Perdeu devido a nao ser o mais proximo de 21 pontos. jogador possue  " << n3 << " pontos" << endl;
		vitoria1=true;
			
			
			
			
			
			
			
		}else if(n2==analyse.second){
		cout << "Nenhum jogador atingiu 21 pontos" << endl;
		 cout << "O vencedor por chegar mais proximo foi jogador 2 com " <<  n2  << " pontos"<< endl;
	   	cout << "Jogador 1 Perdeu devido a nao ser o mais proximo de 21 pontos. jogador possue  " << n1 << " pontos" << endl;
		cout << "Jogador 3 Perdeu devido a nao ser o mais proximo de 21 pontos. jogador possue  " << n3 << " pontos" << endl;
		vitoria2=true;
			
			
			
			
			
			
			
			
			
		}else if(n3==analyse.second){
		cout << "Nenhum jogador atingiu 21 pontos" << endl;
		 cout << "O vencedor por chegar mais proximo foi jogador 3 com " <<  n3  << " pontos" << endl;
	   	cout << "Jogador 1 Perdeu devido a nao ser o mais proximo de 21 pontos. jogador possue  " << n1 << " pontos" << endl;
		cout << "Jogador 2 Perdeu devido a nao ser o mais proximo de 21 pontos. jogador possue  " << n2 << " pontos" << endl;
		vitoria3=true;
			
			
			
			
			
			
			
		}
		
		
			
			
			
			
			
			
			
			
			
			
			
		}
		
		

	
	
	
		
		system("pause");
		system("cls");
		
	
			


if((vitoria1) and (vitoria2) and (vitoria3)){
	
	pontos1+=2;
	pontos2+=2;
	pontos3+=2;
	cout << "Jogador 1, 2 e 3 ganharam 2 pontos cada" << endl;
	system("pause");
	system("cls");
	
	
	
	
	
}else if((vitoria1) and (vitoria2)){
	
	pontos1+=2;
	pontos2+=2;
	cout << "Jogador 1 e 2 ganharam 2 pontos cada" << endl;
	system("pause");
	system("cls");
	
	
	
	
	
}else if((vitoria1) and (vitoria3)){
	
	pontos1+=2;
	pontos3+=2;
	cout << "Jogador 1 e 3 ganharam 2 pontos cada" << endl;
	system("pause");
	system("cls");
	
	
	
	
	
}else if((vitoria2) and (vitoria3)){
	
	pontos2+=2;
	pontos3+=2;
	cout << "Jogador 2 e 3 ganharam 2 pontos cada" << endl;
	system("pause");
	system("cls");
	
	
	
	
	
}

if(vitoria1){
	
	if(qtde1==3){
		
		pontos1+=4;
		
		cout << "Jogador 1 ganhou 4 pontos" << endl;
		system("pause");
		system("cls;");
		
		
		
	}else if(qtde1==4){
		
		pontos1+=3;
		
		cout << "Jogador 1 ganhou 3 pontos" << endl;
		system("pause");
		system("cls;");
		
	}
	
}

 if(vitoria2){
	
	if(qtde2==3){
		
		pontos2+=4;
		cout << "Jogador 2 ganhou 4 pontos" << endl;
		system("pause");
		system("cls;");
		
		
	}
	
     if(qtde2==4){
		pontos2+=3;
		cout << "Jogador 2 ganhou 3 pontos" << endl;
		system("pause");
		system("cls;");
		
		
		
		
		
	}
	
}


if(vitoria3){
	
	if(qtde3==3){
		
		pontos3+=4;
		cout << "Jogador 3 Ganhou 4 pontos" << endl;
		system("pause");
		system("cls");
		
	}else if(qtde3==4){
		
		pontos3+=3;
	    cout << "Jogador 3 Ganhou 3 pontos" << endl;
		system("pause");
		system("cls");
		
		
		
	}
	
}
	


	            


     cout << endl << endl << "fase " << fase << endl;
	cout << "Pontuacao atual geral de cada jogador" << endl;
	cout << "Jogador 1: " << pontos1 << endl;
	cout << "Jogador 2: " << pontos2 << endl;
	cout << "Jogador 3: " << pontos3 << endl << endl;
	

	
	cout << "Deseja continuar Jogando?[s/n]";
	cin >> opc;
    system("cls");
    
}

if((opc!='s') or (opc!='S')){
	
	cout << "O jogo acabou devido a vontade dos jogadores, vamos ao resultado final..." << endl;
	system("pause");
	system("cls");
	
	
	
	
	
	
	
	
}



auto final=minmax({pontos1,pontos2,pontos3});

if(final.second==0){
	
	cout << "Ninguem venceu, todos empataram com o total de 0 pontos" << endl;
	
	
	
	
}else if(pontos1==final.second){
	
	
	if((pontos1==pontos2) and (pontos1==pontos3)){
	cout << "Ninguem venceu, todos empataram com o total de " << pontos1 << " pontos" << endl;
		
		
		
		
		
	}else if(pontos1==pontos2){
		
		
		cout << "Jogador 1 e 2 venceram por terem a maior quantidade de pontos durantes todas as rodadas, possuindo no final " << pontos1 << " pontos" << endl;
		cout << "Jogador 3 perdeu possuindo no final " << pontos3 << " pontos" << endl;
		
		
		
	}else if(pontos1==pontos3){
		
		cout << "Jogador 1 e 3 venceram por terem a maior quantidade de pontos durantes todas as rodadas, possuindo no final " << pontos1 << " pontos" << endl;
		cout << "Jogador 2 perdeu possuindo no final " << pontos2 << " pontos" << endl;
		
		
		
		
		
	}else{
		
	cout << "Jogador 1 venceu por ter a maior quantidade de pontos durante todas as rodadas, possuindo no final  " << pontos1 << " pontos" << endl;
	cout << "Jogador 2 perdeu possuindo no final " << pontos2 << " pontos" << endl;
	cout << "Jogador 3 perdeu possuindo no final " << pontos3 << " pontos" << endl;
		
		
	}
	
	
	

	

	
	
	
	
	
	
	
	
	
	
}else if(pontos2==final.second){
	
	
	if((pontos2==pontos1) and (pontos2==pontos3)){
	cout << "Ninguem venceu, todos empataram com o total de " << pontos2 << " pontos" << endl;
		
		
		
		
		
		
	}else if(pontos2==pontos3){
		
		
		cout << "Jogador 2 e 3 venceram por terem a maior quantidade de pontos durantes todas as rodadas, possuindo no final " << pontos2 << " pontos" << endl;
		cout << "Jogador 1 perdeu possuindo no final " << pontos1 << " pontos" << endl;
		
		
		
	}else{
		
	cout << "Jogador 2 venceu por ter a maior quantidade de pontos durante todas as rodadas, possuindo no final  " << pontos2 << " pontos" << endl;
	cout << "Jogador 1 perdeu possuindo no final " << pontos1 << " pontos" << endl;
	cout << "Jogador 3 perdeu possuindo no final " << pontos3 << " pontos" << endl;
		
		
	}
	
	

	
	

	
	
	
	
	
}else if(pontos3==final.second){
	
	if((pontos3==pontos1) and (pontos3==pontos2)){
    cout << "Ninguem venceu, todos empataram com o total de " << pontos3 << " pontos" << endl;
		
		
		
		
		
		
		
		
		
		
	}else if(pontos3==pontos2){
		
		
		cout << "Jogador 3 e 2 venceram por terem a maior quantidade de pontos durantes todas as rodadas, possuindo no final " << pontos3 << endl;
		cout << "Jogador 1 perdeu possuindo no final " << pontos1 << " pontos" << endl;
		
		
		
	}else{
		
	cout << "Jogador 3 venceu por ter a maior quantidade de pontos durante todas as rodadas, possuindo no final  " << pontos3 << " pontos" << endl;
	cout << "Jogador 2 perdeu possuindo no final " << pontos2 << " pontos" << endl;
	cout << "Jogador 1 perdeu possuindo no final " << pontos1 << " pontos" << endl;

		
		
	}
	
	
	

	
	
	
	
	
	
}
	
	
	

	return 0;
}



