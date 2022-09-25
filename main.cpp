#include <iostream>
#include <cmath>
using namespace std;

int main(){

//es n.1
int lato;
cout<<"Inserisci il lato del quadrato \n";
cin>>lato;
int area = lato*lato;
int permimetro = (lato + lato) * 2;
cout<<"Area: "<<area<<" Perimetro: "<<permimetro<<" \n";

//es n.2
float areaCirconferenza;
cout<<"Inserisci area circonferenza \n";
cin>>areaCirconferenza;
float perimetroCirconferenza = (sqrt(4 * 3.14 *areaCirconferenza))/2;
cout<<"Perimetro circonferenza: "<<perimetroCirconferenza<<" \n";

//es n.3
float perimetroQuadrato;
cout<<"Inserisci il perimetro del quadrato \n";
cin>>perimetroQuadrato;
float areaQuadrato = (perimetroQuadrato/4)*(perimetroQuadrato/4);
cout<<"Area: "<<areaQuadrato<<" \n";

}