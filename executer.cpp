//
//  executer.cpp
//  AtlasTestSuite
//
//  Created by  atlas on 16/8/18.
//  Copyright © 2016年 GHT. All rights reserved.
//
#include "Markup.h"
#include "executer.h"
//#include "/usr/include/glib-2.0/glib.h"
#include "glib.h"
#include "event.h"
int main() {
    GPtrArray *p;
    CMarkup xml;
    int j = 1000;
    struct event_base *ev;
    ev = event_base_new();
    event_base_dispatch(ev);
    p = g_ptr_array_new();
    while(j--) {
        int *i = (int*)malloc(sizeof(int));
        *i = j;
        g_ptr_array_add(p,i);
    }
    printf("len = %d\n",p->len);
    for(j=0;j<p->len;j++) {
        printf("%d\n",*(int*)(p->pdata[j]));
    }
    printf("hello world!\n");
    return 0;
}
