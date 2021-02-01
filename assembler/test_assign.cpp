// Chris Grimes
// cs23001
// test.cpp overload = for stack

#include"stack.hpp"

int main(){
  {
    //Setup
    stack<int> a;

    //Test
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    stack<int> b=a;
    
    //Verfiy
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.empty()<<"=="<<a.empty()<<"== True"<<std::endl;
    assert(!(a.empty()==0));
    assert(!(b.empty()==0));
  }
  {
    //Setup
    stack<char> a;

    //Test
    a.push('b');
    a.push('c');
    a.push('w');
    a.push('t');
    stack<char> b=a;
    
    //Verfiy
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.empty()<<"=="<<a.empty()<<"== True"<<std::endl;
    assert(!(a.empty()==0));
    assert(!(b.empty()==0));
  }
  {
    //Setup
    stack<double> a;

    //Test
    a.push(1.007);
    a.push(2.6743);
    a.push(3.4453);
    a.push(4.6675);
    stack<double> b=a;
    
    //Verfiy
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.empty()<<"=="<<a.empty()<<"== True"<<std::endl;
    assert(!(a.empty()==0));
    assert(!(b.empty()==0));
  }
  {
    //Setup
    stack<int> a;

    //Test
    for(int i= 0; i<100;++i)
      a.push(i);
    stack<int> b=a;
    
    //Verfiy
    for(int j= 99; j>=0;--j){
      std::cout<<b.top()<<"=="<<a.top()<<std::endl;
      assert(a.pop()==b.pop());
    }
    std::cout<<b.empty()<<"=="<<a.empty()<<"== True"<<std::endl;
    assert(!(a.empty()==0));
    assert(!(b.empty()==0));
  }
  {
    //Setup
    stack<String> a;

    //Test
    a.push("help");
    a.push("i");
    a.push("need");
    a.push("somebody");
    stack<String> b=a;
    
    //Verfiy
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.empty()<<"=="<<a.empty()<<"== True"<<std::endl;
    assert(!(a.empty()==0));
    assert(!(b.empty()==0));
  }
  {
    //Setup
    stack<String> a;

    //Test
    a.push("like a rolling stone");
    a.push("like the fbi");
    a.push("and the cia");
    a.push("and the bbc");
    a.push("i once had a girl");
    a.push("she asked me to stay and she told me to sit anywhere");
    a.push("we talked until two and then she said it's time for bed");
    a.push("i told her i didn't and crawled off to sleep in the bath");
    a.push("my love don't give me presents"); 
    stack<String> b=a;
    
    //Verfiy
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.top()<<"=="<<a.top()<<std::endl;
    assert(a.pop()==b.pop());
    std::cout<<b.empty()<<"=="<<a.empty()<<"== True"<<std::endl;
    assert(!(a.empty()==0));
    assert(!(b.empty()==0));
  }
     
  std::cout<<"passed overloading =, success"<<std::endl;
}
