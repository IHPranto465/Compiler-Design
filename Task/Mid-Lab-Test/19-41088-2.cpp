#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
    FILE * file;
    char path[100];

    char ch;
    string line ;
    int characters, words, lines;
    ifstream FILE("c:\\code.txt");
    while(getline(FILE,line))
    {
        cout<<line<<endl;
    }
    cout<<endl;

    cout<<"Enter source file path: ";
    cin>>path;

    file = fopen(path, "r");


    if (file == NULL)
    {
        cout<<"Unable to open file.\n";
        cout<<"Please check if file exists and you have read previously.\n";

        exit(EXIT_FAILURE);
    }


    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        if (ch == '\n' || ch == '\0')
            lines++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0'|| ch== 'char')
            words++;

    }

    
    if (characters > 0)
    {
        words++;
        lines++;
    }

    cout<<"\n"<<endl;
    cout<<"Total  alphabetic  words   = \n"<< words<<endl;
    cout<<"Total new lines   = \n"<<lines<<endl;


    fclose(file);

    return 0;
}
