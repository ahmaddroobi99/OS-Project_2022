#include <iostream>
#include <fstream>
#include <string>
#include<cstdint>
#include <typeinfo>
#include <sys/stat.h>
#include <sys/types.h>
// #include <conio.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
 


void readFromFile (char FileName[],char storage[], int &NEnt)
{

  ifstream take (FileName) ; 
  for (int i =0 ;i<NEnt;i++){
    take>> storage[i];
     printf("hi"); 
  }}
void writeToFile (char FileName22[],char storage[], int &NEnt, int index ,int SkipM)
{
      printf("hi from Write "); 


  ofstream take (FileName22) ; 
  for (int i =index ;i<NEnt;i+=SkipM){
    take << storage[i];
    // printf("hi"); 
  }

  
}

void Mkdir(char ss[] ,char store[], int count ,int index, int skip){

int check;
    char* dirname = "OS-Project";
    // clrscr();
    printf("11111");

    check = mkdir(dirname,0777);
  printf("2222");
  char sss[]= "OS-Project/";
  strcat (sss ,ss);
  // writeToFile(sss,store,count , index,skip);
  
    // check if directory is created or not
    if (!check)
        printf("Directory created\n");
    else {
        printf("Unable to create directory\n");
        exit(1);
    }
  }

int main(int argc ,char * argv[]) {

  // Algorithm
  // 1. count chars
  // 2.read from file Scr to Array .
  // 3. Write from arr To Des .
  
string line;
    // string  filename[20] =argv[1] ;

ifstream inMyStream (argv[1]); 
int c;

if (inMyStream.is_open()) 
{

     while(  getline (inMyStream, line)){

             c += line.length();
  }
    }
    inMyStream.close(); 


  
 int count=c ;
 char store[c] ;

  readFromFile(argv[1],store,count ); 
    // char filename2[20] =argv[2] ;
  // mkedir("BaggyRoastedNanotechnology"); 
  // Mkdir(argv[2],store,count ,atoi(argv[3]),atoi (argv[4])); 

int check;
    char* dirname = "OS-Project";
    // clrscr();
    printf("11111");

    check = mkdir(dirname,0777);
  printf("2222");
  char sss[]= "OS-Project/";
  // strcat (sss ,ss);
  // writeToFile(sss,store,count , index,skip);
  
    // check if directory is created or not
    if (!check)
        printf("Directory created\n");
    else {
        printf("Unable to create directory\n");
        exit(1);
    }

  
  printf("ssssssss"); 

    // getch();
  
    // system("dir");
    // getch();
char ss [100]; 
  strcpy (ss,"/BaggyRoastedNanotechnology/OS-Project/"); 
  printf("%s", ss); 
  
  
  strcat (ss,argv[2]);
    printf("%s", ss); 
 

     string sDirectory;

    // Ask the user for a directory to move into
    cout << "Please enter a directory..." << endl;
    cin >> sDirectory;
    cin.get();

    // Navigate to the directory specified by the user
   chdir(sDirectory.c_str());
      FILE *f ;
  f =fopen(argv[2],"w"); 
  fclose(f);


   // chdir("/BaggyRoastedNanotechnology/OS-Project"); 
  writeToFile(argv[2],store,count , atoi(argv[3]),atoi(argv[4]));

  printf("%s",argv[2]);
  printf("%s",argv[3]);
  printf("%s",argv[4]);

cout << typeid(argv[3]).name() << endl;
  
  
  }


