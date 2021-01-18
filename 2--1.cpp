#include<fstream>
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main(void)
{
    int x;
    int count1=0,count2=0,sum2=0,sum3=0,sum4=0,sum5=0;
    int sum6=0,sum7=0,sum8=0,sum9=0,sum10=0,sum11=0,sum12=0;
    int sum13=0,sum14=0;
    int aa=0,bb=0,cc=0,dd=0,ee=0;
    int i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,xx=0,y=0,z=0;
    char txt;
    ifstream ifile("c:\\News.txt",ios::in);
    ofstream ofile("c:\\niu_b0643041.txt",ios::out);
   
       
    while(!ifile.eof())
    {
      
        if((txt>='a'&&txt<='z'))
        txt=txt-32;
        ofile.put(txt);
      
       ifile.get(txt);
       if(txt==32)
       {count2++;} 
   
       else if(txt!=32)
       { 
        if(((txt>='A'&&txt<='Z')||(txt>='a'&&txt<='z')))
         {count1++;}
       }
       if(txt=='a')
       sum2++;
       else if(txt=='b')
       sum3++; 
       else if(txt=='c')
       sum4++; 
       else if(txt=='d')
       sum10++;
       if(txt=='e')
       sum11++;
       else if(txt=='f')
       sum12++; 
       else if(txt=='g')
       sum13++; 
       else if(txt=='h')
       sum14++;
        if(txt=='i')
       i++;
       else if(txt=='j')
       j++; 
       else if(txt=='k')
       k++; 
       else if(txt=='l')
       l++;
       if(txt=='m')
       m++;
       else if(txt=='n')
       n++; 
       else if(txt=='o')
       o++; 
       else if(txt=='p')
       p++; 
       else if(txt=='q')
       q++;
       if(txt=='r')
       r++;
       else if(txt=='s')
       s++; 
       else if(txt=='t')
       t++; 
       else if(txt=='u')
       u++;
       else if(txt=='v')
       v++; 
       else if(txt=='w')
       w++; 
       else if(txt=='x')
       xx++;
       else if(txt=='y')
       y++;
       else if(txt=='z')
       z++;
       
       
       else if(txt=='1')
       sum6++;
       else if(txt=='2')
       sum7++;
       else if(txt=='3')
       sum8++;
       else if(txt=='4')
       sum9++;
       else if(txt=='5')
       aa;
       else if(txt=='6')
       bb;
       else if(txt=='7')
       cc;
       else if(txt=='8')
       dd;
       else if(txt=='9')
       ee;
      
    }

    cout<<"¦r¼Æ "<<count1<<endl;
    cout<<"ªÅ¥Õ "<<count2<<endl;
    cout<<"a¡G"<<sum2<<endl; 
    cout<<"b¡G"<<sum3<<endl; 
    cout<<"c¡G"<<sum4<<endl; 
    cout<<"d¡G"<<sum10<<endl;
    cout<<"e¡G"<<sum11<<endl; 
    cout<<"f¡G"<<sum12<<endl; 
    cout<<"g¡G"<<sum13<<endl; 
    cout<<"h¡G"<<sum14<<endl;
    cout<<"i¡G"<<i<<endl; 
    cout<<"j¡G"<<j<<endl; 
    cout<<"k¡G"<<k<<endl; 
    cout<<"l¡G"<<l<<endl;
    cout<<"m¡G"<<m<<endl; 
    cout<<"n¡G"<<n<<endl; 
    cout<<"o¡G"<<o<<endl; 
    cout<<"p¡G"<<p<<endl;
    cout<<"q¡G"<<q<<endl;
    cout<<"r¡G"<<r<<endl; 
    cout<<"s¡G"<<s<<endl; 
    cout<<"t¡G"<<t<<endl; 
    cout<<"u¡G"<<u<<endl; 
    cout<<"v¡G"<<v<<endl;
    cout<<"w¡G"<<w<<endl; 
    cout<<"x¡G"<<xx<<endl; 
    cout<<"y¡G"<<y<<endl; 
    cout<<"z¡G"<<z<<endl; 
  
    cout<<"1:"<<sum6<<endl;
    cout<<"2:"<<sum7<<endl;
    cout<<"3:"<<sum8<<endl;
    cout<<"4:"<<sum9<<endl;
    cout<<"5:"<<aa<<endl;
    cout<<"6:"<<bb<<endl;
    cout<<"7:"<<cc<<endl;
    cout<<"8:"<<dd<<endl;
    cout<<"9:"<<ee<<endl;
     if(ofile.is_open())
      {
       ofile<<"b0643041"<<endl;
       cout<<"finish"<<endl;                
      }
    
    
    ifile.close();                
    ofile.close(); 
    system("pause");
    return 0;
}

