#include <cstdlib>
#include <exception>
#include "getMino.h"
#define NUM_MINO 5
#define MINO_S 0
#define MINO_I 1
#define MINO_L 2
#define MINO_O 3
#define MINO_T 4
Mino * getMino()
{
	int mino_type;
	Mino * ptr;

	mino_type = random() % NUM_MINO;
	switch(mino_type) {
		case MINO_S:
				try{
					ptr = new MinoS;
					break;
				}catch (exception& e)
  				{
    				cout << "Standard exception: " << e.what() << endl;
  				}		
		case MINO_I:
				try{
					ptr = new MinoI;
					break;
				}catch (exception& e)
  				{
    				cout << "Standard exception: " << e.what() << endl;
  				}		
		case MINO_L:
				try{
					ptr = new MinoL;
					break;
				}catch (exception& e)
  				{
    				cout << "Standard exception: " << e.what() << endl;
  				}		
		case MINO_O:
				try{
					ptr = new MinoO;
					break;
				}catch (exception& e)
  				{
    				cout << "Standard exception: " << e.what() << endl;
  				}		
		case MINO_T:
				try{
					ptr = new MinoT;
					break;
				}catch (exception& e)
  				{
    				cout << "Standard exception: " << e.what() << endl;
  				}		
	}
	return ptr;
}
