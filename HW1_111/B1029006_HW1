#include <iostream>
#include <string>
#include <malloc.h>


using namespace std;

int main()
{
    int num;
    int len=0;
    
    cout<<"請輸入字串數量"<<endl;
    cin>>num;
    cin.ignore();
    cout<<"請輸入"<<num<<"個字串"<<endl;
    
    char **tem=(char**)malloc(num*sizeof(char*));
    char **str = new char*[num];
    
    for(int i=0;i<num;i++)
    {
        tem[i] = (char*)malloc(100*sizeof(char));
        int a=0;
        gets(tem[i]);
        if(a<len)
            a=len;
    }
    
    for(int i=0;i<num;i++)
    {
        str[i]=new char [len];
        str[i]=tem[i];
    }
    
    for (int i=0;i<num-1;i++)
    {
        for (int j=0; j<num-1; j++)
        {
            if(str[j][0]<str[j+1][0])
            {
                tem[0]=str[j];
                str[j]=str[j+1];
                str[j+1]=tem[0];
            }
        }
    }
    cout<<"----------我是分隔線----------"<<endl;
    
    for(int i=0;i<num;i++)
    {
        cout<<str[i]<<endl;
    }
    
    free(tem);
    delete[] str;
    
    return 0;
}
