#include <iostream>
#include <unordered_map>
#include <iterator>
#include <cstring>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(){
  //cout << "HERE";
  /*
  HashTable k;
  cout << k.hash("kevin");
  cout << "DONE";
  */
  unordered_map<string, string> dictionary;

  /*
  //tester code, comment out on Kattis
  ifstream cin("input.txt");
  ifstream textFile;
  textFile.open("input.txt");
  if(textFile.fail()){
    cout << "File Open Failed";
    return 0;
  }
  */
  
   
  
  
  

  //create the dictionary

  //HashTable kevin;


  
  string inputLine;
  //for(int i = 0; i < 100000; i++){
    //getline(cin, inputLine);
  while(getline(cin, inputLine)){
    //cout << "HERE";
    //cout << inputLine << endl;
    
  //cout << "loop beginning";
  //getline(cin, inputLine);
    //cout << "AT IF HERE";
    if(inputLine == ""){
      break;
    }
    /*
  int breakPosition = 0;
  for(int j = 0; j < inputLine.length(); j++){
    if(inputLine[j] == ' '){
      breakPosition = j;
      break;
    }
  }
    */
    
  //cout << breakPosition << endl;
  string first;
  string second;
  first = inputLine.substr(0, inputLine.find(' '));
  second = inputLine.substr(inputLine.find(' ') + 1);
    //cout << second.find(' ') << endl;
    //cout << second.length();
    //cout << first << ", " << second;
    //kevin.insert(first, second);
    dictionary.insert(make_pair(second,first));
    //cout << "HERE" <<endl ;
  }



  //cout << "DONE WITH PREPROCESSING";

  //translate the words

  //cout << "HERE";
  
  string word;
  while(getline(cin, word)){
    if(dictionary.count(word) == 0){
      cout << "eh" << endl;
    }
    else{
      cout << dictionary.find(word)->second << endl;
    }
    //cout << word << endl;
    //cout << kevin.translateToEnglish(word) << endl;
  }
  

  
  return 0;
}
