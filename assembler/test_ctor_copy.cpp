// Chris Grimes
// cs23001
// test.cpp copy ctor for stack.hpp

#include"stack.hpp"

int main(){
  {
    //Setup
    stack<int>a;

    //Test
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    stack<int> b(a);

    //Verfiy
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.empty()<<"=="<<b.empty()<<"== True"<<std::endl;
    assert(!(a.empty()==0));
    assert(!(b.empty()==0));
  }
  {
    //Setup
    stack<char>a;

    //Test
    a.push('j');
    a.push('p');
    a.push('s');
    a.push('u');
    a.push('x');
    stack<char> b(a);

    //Verfiy
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.empty()<<"=="<<b.empty()<<"== True"<<std::endl;
    assert(!(a.empty()==0));
    assert(!(b.empty()==0));
  }
  {
    //Setup
    stack<double>a;

    //Test
    a.push(1.9963);
    a.push(2.9923);
    a.push(3.0012);
    a.push(4.9934);
    a.push(5.0045);
    stack<double> b(a);

    //Verfiy
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.empty()<<"=="<<b.empty()<<"== True"<<std::endl;
    assert(!(a.empty()==0));
    assert(!(b.empty()==0));
  }
  {
    //Setup
    stack<int>a;

    //Test
    for(int i=0; i<100;++i)
      a.push(i);
    stack<int> b(a);

    //Verfiy
    for(int j=99; j>=0; --j){
      std::cout<<a.top()<<"=="<<b.top()<<std::endl;
      assert(a.pop()==b.pop());
    }
    std::cout<<a.empty()<<"=="<<b.empty()<<"== True"<<std::endl;
    assert(!(a.empty()==0));
    assert(!(b.empty()==0));
  }
 {
    //Setup
    stack<String>a;

    //Test
    a.push("j");
    a.push("p");
    a.push("s");
    a.push("u");
    a.push("x");
    stack<String> b(a);

    //Verfiy
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.empty()<<"=="<<b.empty()<<"== True"<<std::endl;
    assert(!(a.empty()==0));
    assert(!(b.empty()==0));
  }
 {
    //Setup
    stack<String>a;

    //Test
    a.push("only have to give me");
    a.push("love forever and forever");
    a.push("wait oh yes");
    a.push("please please mister postman");
    a.push("you didn't stop to make me feel better");
    a.push("i'm a loser");
    a.push("there is one love i should never have crossed");
    a.push("although i laugh like a clown");
    stack<String> b(a);

    //Verfiy
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.top()<<"=="<<b.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<a.empty()<<"=="<<b.empty()<<"== True"<<std::endl;
    assert(!(a.empty()==0));
    assert(!(b.empty()==0));
  }

  std::cout<<"passed copy ctor tests, success"<<std::endl;
}
