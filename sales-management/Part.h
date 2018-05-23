//
//  Part.h
//  sales-management
//
//  Created by POTADOS on 2018. 5. 24..
//  Copyright © 2018 POTADOS. All rights reserved.
//

#ifndef Part_h
#define Part_h

#include <stdio.h>
#include <stdlib.h>
#include "IO.h"


// Struct declaration
typedef struct _Part{
    int partNum;
    char *partName;
    char *specification;
    int price;
    int salesCount;
} _Part;

typedef _Part * Part;

void destructor(Part this);

Part new_Part(int partNum,
              char *partName,
              char *specification,
              int price,
              int salesCount);

void print_sales(Part *parts, const unsigned int length);


#endif /* Part_h */