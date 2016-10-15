#include <iostream>
using namespace std;

struct map{
	
	char game_map[12][12] = {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',},
							 {'#', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '#',},
							 {'#', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '#',},
							 {'#', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '#',},
							 {'#', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '#',},
							 {'#', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '#',},
							 {'#', '@', '@', '@', '@', '+', '+', '@', '@', '@', '@', '#',},
							 {'#', '@', '@', '@', '@', '/', '\\', '@', '@', '@', '@', '#',},
							 {'#', '@', '@', '@', '@', '|', '|', '@', '@', '@', '@', '#',},
							 {'#', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '#',},
							 {'#', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '#',},
							 {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',},};
	
	void display_map(){
		
		for(int x=0; x<12; ++x){
			for(int y=0; y<12; ++y){
				cout << game_map[x][y] << " ";
			}
			cout << endl;
		}	
	}
}handle;



int main(){
	
	char choice;
	cout << "\n\t\t Welcome To Mission impossible Rogue !";
	
	while(true){
		cin.ignore();
		cout << "\n 1 )- Press S to Start game : ";
		cout << "\n 2 )- Press Q to quit game  : ";
		cout << "\n Your choice here : ";
		choice = cin.get();
		
		if(choice == 's' || choice == 'S'){
			system("cls");
			handle.display_map();
		}else if(choice == 'q' ||  choice == 'Q'){
			exit(0);
		}else{
			cout << "\n Wrong key pressed";
			continue;
		}
	}
	
	return 0;
}
