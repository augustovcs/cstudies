#include<iostream>

using namespace std;

struct rectangle 
{
	int length;
	int breadth;
};

struct card 
{
    int face;
    int shape;
    int color;

};

int main() 
{
	struct card card_one;
	
	card_one.face = 1;
	card_one.shape = 0;
	card_one.color = 0;
	
	//card_one => {1, 0, 0} na struct
	
	//outro exemplo seria com baralho
	
	struct card deck[52] = 
	{ 
		{1,0,0},
		{2,0,0},
		{3,0,0} //... até o valor max
		
	};


    cout << "Face da carta: " << endl;
    printf("%d\n", deck[2].face);

    printf("%lu ", sizeof(deck));
	
}
