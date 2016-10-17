#include <iostream>
using namespace std;

struct character {
	char body = '@';
	int x = 1;
	int y = 1;
}ch;

struct map{
    // map's width and height. Used instead of hard-coded magic numbers. Easier to maintain.
	const int width = 12;
    const int height= 12;
	char game_map[width][height] = {};
    /*
                            {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',},
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
    */
	
    void gen_map() {
        for(int x=0; x<width; x++) {
            for(int y=0; y<height; y++) {
                game_map[x][y] = (
                    x==0 && y==0 && x-1==width && y-1==height
                )? '#': '.';
            }
        }
    }
	void display_map(){
		for(int x=0; x<width; ++x){
			for(int y=0; y<height; ++y){
				cout << game_map[x][y] << " "; // why is this space here?
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
    handle.gen_map();
	
	while(true){
		cin.ignore();
		cout << "\n 1 )- Press t/T to Start game : ";
		cout << "\n 2 )- Press q/Q to quit game  : ";
		cout << "\n Your choice here : ";
		choice = cin.get();
		
		switch(choice) {
			case 't':
			case 'T':
				draw_world(); break;
			case 'q':
			case 'Q':
				exit(0); break;
            // movement commands:
			case 'w': // up
			case 'W':
                break;
			case 'a': // left
			case 'A':
                break;
			case 's': // down
			case 'S':
                break;
			case 'd': // right
			case 'D':
                break;
			default:
				cout << "\n Wrong key pressed"; continue;
		}
	}
	
	return 0;
}

