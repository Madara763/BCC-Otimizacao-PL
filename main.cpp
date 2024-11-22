#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, m;
  cin >> n >> m;
  
  int precos_venda[n];
  int custo_componente[m];
  int limite_prod[m];

  double compostos[n][m]{0.0};

  for (int i=0; i<n; i++)
    cin>>precos_venda[i];
  
  for (int i=0; i<m; i++)
    cin>>custo_componente[i] >> limite_prod[i];

  for (int lin=0; lin<n; lin++){
    for (int col=0; col<m; col++){
      cin>>compostos[lin][col];
    }  
  }

  //Calcula o custo de cada produto
  int custo_produto[n]{0};
  for (int lin=0; lin<n; lin++){
    for (int col=0; col<m; col++){
      
    }  
  }




  cout<<"Entrada: \n";
  for (int i=0; i<n; i++)
    cout<<precos_venda[i] <<" ";

  cout<<"\n";
  
  for (int i=0; i<m; i++)
    cout<<custo_componente[i]<<" "<< limite_prod[i]<<"\n";

  for (int lin=0; lin<n; lin++){
    for (int col=0; col<m; col++){
      cout<<setprecision(3) <<compostos[lin][col]<<" ";
    }  
    cout<<"\n";
  } 

  return 0;
}

