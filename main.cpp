//Author: Alejandro Diaz-Diaz
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool colorSame(string &);

string colorTheme(vector<string>);

int main(){
string colorTitle;
string fileTitle;
fstream reader;
string line;
bool colorSearch=false;
vector<string> colors;
int itr3=0;

ifstream myfile("colornames.txt");
if (myfile.is_open()){
  while(getline(myfile,line)){
    colors.push_back(line);
  }
  myfile.close();
}
while(!colorSearch){

cout<<"Input a color value with a given name to be saved with your theme: ";
cin>> colorTitle;
for(int i=0; i<colors.size(); i++){
  if(colors[i]==colorTitle){
    colorSearch=true;
    break;
  }

}
if(!colorSearch){
  cout<<"Try again."<<endl;
}
}

cout<<"Give a name to save the file as: " <<endl;
cin>> fileTitle;
fileTitle= fileTitle+".svg";

std::ofstream outFile (fileTitle);
if (outFile.is_open()){
  outFile<<colorTitle<<endl;
  cout<<colorTitle<<endl;
  for (int k=0;k<colors.size(); k++){
    if(colors[k] != colorTitle){
      outFile << colors[k] <<endl;
      cout<< colors[k]<<endl;
      itr3++;
      if(itr3==5){
        break;
      }
    }
  }

outFile.close();
}
  return 0;
}
bool colorSame(){
}
string colorTheme(vector<string> ){

}
