install:
	g++ -liconv -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include -lglib-2.0 -stdlib=libc++ -o executer executer.cpp