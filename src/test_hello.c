/*
 * This file is part of the zlog Library.
 *
 * Copyright (C) 2011 by Hardy Simpson <HardySimpson1984@gmail.com>
 *
 * Licensed under the LGPL v2.1, see the file COPYING in base directory.
 */

#include <stdio.h>
//#include "zlog_utils.h"

#include "zlog.h"

int main(int argc, char** argv)
{
	 int rc;
	 zlog_category_t *zc;
    //Czlog zlog("test_hello.conf");
    //   Czlog::getInstance();
	
    rc = zlog_init("test_hello.conf");
    // Czlog::getinstance();
   if (rc) {
		printf("init failed\n");
		return -1;
	}

	zc = zlog_get_category("my_cat");
	if (!zc) {
		printf("get cat fail\n");
		zlog_fini();
		return -2;
	}

	zlog_info(zc, "hello, zlog");


	zlog_warn(zc,"xxxxx");
	zlog_error(zc,"xxxxxxxerrorxxxxx>>>>""");
	zlog_fatal(zc,">>>>>>>>fatal>>>>>>>>>");
	zlog_debug(zc,">>>>>>>debug>>>>>>>>>>");

	zlog_fini();
	
	return 0;
}
