#include <iostream>
using namespace std;

class AntonymDictionary{
    public:
        AntonymDictionary(){
            words[50]={""};
            antonyms[50]={""};
        }
        AntonymDictionary(string words_in[], string antonyms_in[]){
            for(int i=0; i<50; i++){
                words[i]=words_in[i];
                antonyms[i]=antonyms_in[i];
            }
        }
        int LoadWords(string filename){
           ifstream myfile(filename);
           string words,antonyms[2];
           if(!infile.fail()){
               getline(myfile, words);
                while(getline(infile,line)){
                    num_words=split(line,',',antonyms,2);
                    
                }
                infile.close();
                return words.size();
            }
            else{
                return -1;
            }
        }
        int SearchForWord(string wordName);
        string GetAntonym(string wordName);
    private:
        string words[50];
        string antonyms[50];
};