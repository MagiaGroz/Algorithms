#include <iostream>
#include <conio.h>
  
using namespace std;
  
void iswap(int &n1, int &n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
  
int main()
{
    int n;
    cin>>n;
    int a[n];
    for ( int i = 0; i < n; ++i ) 
	{ cin>>a[i];}
    //-----------����������------------//
    //��������� ��-�����������. ����� ��������� ��-��������,
    //��������� ����� ��������� � ��������, ���������� /*(����)*/
    int sh = 0; //��������
    bool b = false;
    for(;;)
    {
    b = false;
    for ( int i = 0; i < n; i++ )
    {
        if( i * 2 + 2 + sh < n )
        {
        if( ( a[i + sh] > /*<*/ a[i * 2 + 1 + sh] ) || ( a[i + sh] > /*<*/ a[i * 2 + 2 + sh] ) )
        {
            if ( a[i * 2 + 1 + sh] < /*>*/ a[i * 2 + 2 + sh] )
            {
            iswap( a[i + sh], a[i * 2 + 1 + sh] );
            b = true;
            }
            else if ( a[i * 2 + 2 + sh] < /*>*/ a[ i * 2 + 1 + sh])
                 {
                     iswap( a[ i + sh], a[i * 2 + 2 + sh]);
                     b = true;
                 }
        }
        //�������������� �������� ��� ��������� ���� ���������
               //� ������� ���� �������� ����� ������������� ��������
               //��������� ����� ���� �� ���� ���������
            if( a[i*2 + 2 + sh] < /*>*/ a[i*2 + 1 + sh] )
            {
            iswap( a[i*2+1+sh], a[i * 2 +2+ sh] );
                        b = true;
            }
        }
        else if( i * 2 + 1 + sh < n )
             {
                 if( a[i + sh] > /*<*/ a[ i * 2 + 1 + sh] )
                 {
                     iswap( a[i + sh], a[i * 2 + 1 + sh] );
                     b = true;
                 }
             }
    }
    if (!b) sh++; //�������� �������������, ����� �� ������� �����
              //����������� ������ ������
    if ( sh + 2 == n ) break;
    }  //����� ����������
  
  
    cout << endl << endl;
    for ( int i = 0; i < n; ++i ) cout << a[i] << " ";
  
  
    getch();
    return 0;
}
