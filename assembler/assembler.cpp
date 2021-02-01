// Chris Grimes
// cs23001
// postfix.cpp p3-m2

#include "utilities.hpp"
#include<iostream>
#include<fstream>
#include<cstdlib>

int main(int argc, char *argv[]){
  if((argc!=2)&&(argc!=3)){
    std::cout<<"There needs to be at least two arguments, with a max of three"
    <<"(1)./.aout (2)input file (3)[optional] output file"<<std::endl;
    exit(1);
  } 
  std::ifstream in(argv[1]);
  if(!in.is_open()){
    std::cout<<"The in-file could not be opened"<<std::endl;
    exit(1);
  }
  if(argc==2){
    std::ofstream mid("data-test.txt");
    if(!mid.is_open()){
      std::cout<<"The mid_file could not be opened, you need data-test.txt for this to work"<<std::endl;
      exit(1);
    }
    std::ifstream mid2("data-test.txt");
    if(!mid2.is_open()){
      std::cout<<"The mid_file could not be opened, you need data-test.txt for this to work"<<std::endl;
      exit(1);
    }
    infix2postfix(in, mid);
    postfix2assembly(mid2, std::cout);
    in.close();
    mid.close();
    mid2.close();
  }
  if(argc==3){
    std::ofstream out(argv[2]);
    if(!out.is_open()){
      std::cout<<"The out_file could not be opened"<<std::endl;
      exit(1);
    }
    std::ofstream mid("data-test.txt");
    if(!mid.is_open()){
      std::cout<<"The mid_file could not be opened, you need data-test.txt for this to work"<<std::endl;
      exit(1);
    }
    std::ifstream mid2("data-test.txt");
    if(!mid2.is_open()){
      std::cout<<"The mid_file could not be opened, you need data-test.txt for this to work"<<std::endl;
      exit(1);
    } 
    infix2postfix(in, mid);
    in.close();
    postfix2assembly(mid2, out);
    mid.close();
    mid2.close();
  }
}
