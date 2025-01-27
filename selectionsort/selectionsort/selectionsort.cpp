// selectionsort.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int dizi[] = { 5,3,10, 9, 7, 1 };

    int enkucuk,temp;

    for (int i = 0; i < 6; i++) {

        int enkucuk = dizi[i];

        for (int j = i+1; j < 6; j++) {

            if (enkucuk > dizi[j]) {
                enkucuk = dizi[j];
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
     
              

            }
                      
            
        }   
        //swap(dizi[i],enkucuk);
    }


    for(int a =0; a<6; a++)
        cout << dizi[a] << endl;
  


}

