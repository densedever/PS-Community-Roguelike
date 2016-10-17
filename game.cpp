#include <iostream>
using namespace std;

struct character {
	char body = '@';
	int x = 1;
	int y = 1;
}ch;

struct map{
	
	char game_map[12][12] = {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',},
							 {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
							 {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
							 {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
							 {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
							 {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
							 {'#', '.', '.', '.', '.', '+', '+', '.', '.', '.', '.', '#',},
							 {'#', '.', '.', '.', '.', '/', '\\', '.', '.', '.', '.', '#',},
							 {'#', '.', '.', '.', '.', '|', '|', '.', '.', '.', '.', '#',},
							 {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
							 {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
							 {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',},};
	
	void display_map(){
		// maybe we shouldn't use hard-coded values for the loops' upper bounds?
		for(int x=0; x<12; ++x){
			for(int y=0; y<12; ++y){
				cout << game_map[x][y] << " ";
			}
			cout << endl;
		}	
	}
	
	void draw_character() {
		game_map[ch.x][ch.y] = ch.body;
	}
}handle;

void draw_world() {
	system("cls");
	handle.draw_character();
	handle.display_map();
}

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
			draw_world();
		}else if(choice == 'q' ||  choice == 'Q'){
			exit(0);
		}else{
			cout << "\n Wrong key pressed";
			continue;
		}
	}
	
	return 0;
}
