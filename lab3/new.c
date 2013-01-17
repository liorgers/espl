  #include <stdio.h>
  #include <unistd.h>

  int main (int argc, char ** argv)
  {
      FILE *fp;
      FILE *fp2;
      int proccessCheck;
      int halfWay = 0
      int fileNumOfBytes;
      int sonCounter = 0;
      int fatherCounter = 0;
      unsigned char word;
      unsigned char word2;
      unsigned char word3;
      unsigned char word4;
	
      fp = fopen(argv[1], "r");
      fp2 = fopen(argv[2], "r");
      
      while(fgetc(fp) != EOF)
	{
	  fileNumOfBytes++;
	}
	
      halfWay = fileNumOfBytes / 2;
      fatherCounter = halfWay;
      
      proccessCheck = fork();
      
      if(proccessCheck = 0){
	while(fread(&word, 1, 1, fp)&&fread(&word2, 1, 1, fp2)&& sonCounter<halfWay){
	      if(word != word2){
	      printf("byte %d %d %d\n",counter,word,word2);
	      ++sonCounter;
	 }
      }
    }
      else{
	while(fread(&word3, 1, 1, fp)&&fread(&word4, 1, 1, fp2)&& fatherCounter<fileNumOfBytes){
	      if(word3 != word4){
	      printf("byte %d %d %d\n",counter,word3,word4);
	      ++fatherCounter;
	}	
      }
    
    
  }
