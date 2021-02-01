// Chris Grimes
// cs23001
// Free Function cpp

#include "utilities.hpp"
#include<iostream>
#include<fstream>
#include<vector>

void infix2postfix(std::istream& file, std::ostream& out){
  stack<String> result, rtnval;
  while(!file.eof()){
    String test;
    file>>test;
    while((test!=";")&&(!file.eof())){
      if(test==")"){
        String right= result.pop();
        String oper= result.pop();
        String left= result.pop();
        String temp(left);
        temp+=" ";
        temp+=right;
        temp+=" ";
        temp+=oper;
        result.push(temp);
      }
      else if(test!="("){
        result.push(test);
        test="";
      }
      file>>test;
    }
    while(result.empty()==0){
      out<<"Postfix Expression: "<<result.top();
      result.pop();
    }
    out<<std::endl;
  } 
}

void postfix2assembly(std::istream& file, std::ostream& out){
  stack<String> result;
  std::vector<String> line;
  char x;
  String test;
  while(!file.eof()){
    while(x!='\n'){
      test+= String(x);
      file.get(x);
    }
    if(x=='\n'){
      file.get(x);
      line=test.split(' ');
    }
    for(std::vector<String>::size_type i=0; i<line.size();++i)
      out<<line[i]<<" ";
    out<<std::endl;
    int count=1; 
    for(std::vector<String>::size_type i=2; i<line.size();++i){
      if((line[i]!="+")&&(line[i]!="-")&&(line[i]!="/")&&(line[i]!="*"))
        result.push(line[i]);
      else if((line[i]=="+")||(line[i]=="-")||(line[i]=="/")||(line[i]=="*")){
        String right=result.pop();
        String left=result.pop();
        result.push(evaluate(left,line[i],right,count,out));
        ++count;
      }
    }
    test="";
  }
}

String evaluate(String& left, String& oper, String& right, int& N, std::ostream& out){
  out<<"   LD    "<<left<<std::endl;
  if(oper=="*")
    out<<"   MU    "<<right<<std::endl;
  else if(oper=="/")
    out<<"   DV    "<<right<<std::endl;
  else if(oper=="+")
    out<<"   AD    "<<right<<std::endl;
  else if(oper=="-")
    out<<"   SB    "<<right<<std::endl;
  out<<"   ST    TMP"<<N<<std::endl;
  char z=N+'0';
  String tmpNum(z);
  String tmp="TMP"+tmpNum;
  return tmp;
}
