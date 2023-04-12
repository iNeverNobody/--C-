#include <bits/stdc++.h>

#define is_debug

using namespace std;

// To store the path of all the files.
string File_Path[123];


/// @param map_path The path of the map file.
/// @return If all the file in the map file is opened or not.
/// @brief The get the status of all the file to make sure that the program can run successfully.
bool get_status(string map_path){
	ifstream _map,temp;
    _map.open(map_path);
    string a;
    //Read from map file until there's nothing.
    while(_map>>a){
    	//Try open each line. 
    	temp.open(a);
    	
    	//Check if it is available to open or not.
    	if(temp.is_open()){
    		//Display debug data.
    		#if defined(is_debug)
    		cout<<"[Check] File with path \""<<a<<"\" is opened successfully.\n";
    		#endif
		}else{
			cout<<"[Check] File with path\""<<a<<"\" can't open or doesn't exist.\n";
			return false;
		}
    	
    	temp.close();
	}
	_map.close();
}
int main(){
	ios::sync_with_stdio(false);
	setlocale(LC_ALL,"Chinese-simplified");
	// Check the file.
	bool file_status=get_status("./map.txt");
	
}
