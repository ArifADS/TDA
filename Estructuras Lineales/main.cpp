//
//  main.cpp
//  Estructuras Lineales
//
//  Created by Arif De Sousa on 12/9/13.
//  Copyright (c) 2013 ADS Studios. All rights reserved.
//

#include <iostream>
#include "List.h"

int main(int argc, const char * argv[])
{
    List<string> myStringList,myCopy;
    
    int i = 0;
	
	myStringList.addInfoAtPos("Hola",i++);
	myStringList.addInfoAtPos("Arif",i++);
	myStringList.addInfoAtPos("Lorenzo",i++);
	myStringList.addInfoAtPos("Jose",i++);
    myStringList.addInfoAtPos("David",i++);
    
	
	myStringList.imprimirLog();
    
    //myCharList.deleteAtPos(myCharList.getLenght()-1);
    myStringList.invertir();
    
    myStringList.imprimirLog();
    
    printf("%s",myStringList[1].c_str());
	
    
    return 0;
}

