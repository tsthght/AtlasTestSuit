install:
	g++ -liconv -I/usr/local/include -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include -lglib-2.0 -levent -o executer Markup.cpp executer.cpp -DMARKUP_STDCONV
