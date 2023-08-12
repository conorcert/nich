#include<iostream>
#include<string>
#include<fstream>
int main(int argc, char* argv[]){
	try{
	std::string av3=argv[5];
	if(av3=="-c"){
		std::fstream clear_;
	clear_.open("log.nich",std::ios::out);clear_<<"";clear_.close();
	//std::fstream clear__;
	//clear__.open("set.txt",std::ios::out);clear__<<" ";clear__.close();
	std::cout<<"cleared"<<std::endl;
	}

	//std::cout<<argv[3]<<std::endl;
	
	std::string fv=argv[2];
	std::string fa=argv[1];
//	std::string ff=srgv[]
	if(fa=="--search"){
	int npi=0;
	int npa=0;
	std::fstream file1;
       file1.open(argv[4],std::ios::in);
       std::string find;
       while(getline(file1,find)){
	npi+=1;       
       if(find.find(fv)!=std::string::npos){	       
       std::fstream paste;
       paste.open("log.nich",std::ios::app);
       paste<<find<<"\n";
       std::cout<<"::line "<<npi<<" found match -> "<<find<<std::endl;
       npa+=1;
     
       }}
	file1.close();
std::cout<<"total found :: "<<npa<<std::endl;

	}
	else if(fa=="--remove"){
        
	int npi=0;
	int npa=0;
	std::fstream file1;
       file1.open(argv[4],std::ios::in);
       std::string find;
       while(getline(file1,find)){
	npi+=1;       
       if(find.find(fv)!=std::string::npos){
	      // std::cout<<fv<<std::endl;

       }else{	      
	std::cout<<"::line "<<npi<<" "<<find<<std::endl;
       
	       
       std::fstream paste;
       paste.open("log.nich",std::ios::app);
       paste<<find<<"\n";
       //std::cout<<"::line "<<npi<<" removed match -> "<<find<<std::endl;
       npa+=1;
     
       }}
	file1.close();
	std::cout<<"total ("<<fv<<")removed :: "<<npa<<std::endl;}}
	catch(...){
		std::cout<<"Nich is a general purpose toolkit for bookmark and sorting content.\n@author : conorcert\n\nUSAGE GUIDE:\n\n--search\t-\tbookmark and extract specific lines containing a keyword (eg. nich --search 'keyword').\n--remove\t-\tbookmark and remove specific lines containing a keyword (eg. nich --remove 'keyword').\n--path	\t-\tpath to file for process(eg. nich --search 'keyword' --path '/home/nich/nichfile.txt').\n-c\t\t-\tfor cleaning log files before starting process."<<std::endl; 
	}
	}
              
       



