Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("login.php", 
		"URL=https://login.51job.com/login.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img01.51jobcdn.com/im/2019/login/newbg.a1df1775.png", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/2019/2016/temp/icon_lr.497a7ae2.png", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/2019/login/foot-icon.a9aa2473.png", ENDITEM, 
		"Url=https://js.51jobcdn.com/in/js/2016/trace/trackData.js?20180206", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("verifymethod.php", 
		"URL=https://login.51job.com/ajax/verifymethod.php?callback=jsoncallback&_=1560568870586", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://login.51job.com/login.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("logRecord.php",
		"URL=https://trace.51jingying.com/logRecord.php?VerType=3&webId=2&logTime=1560568871598&ip=202.120.40.82&guid=99a1f5fd9691580e3e5168b4fd6f0cac&domain=login.51job.com&pageCode=19999&cusParam=1%16%1651job_web%16%160%16&vt=1560568874392&logType=pageView",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://login.51job.com/login.php",
		"Snapshot=t3.inf",
		"Mode=HTML",
		LAST);

	web_submit_data("login.php_2", 
		"Action=https://login.51job.com/login.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://login.51job.com/login.php", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=lang", "Value=c", ENDITEM, 
		"Name=action", "Value=save", ENDITEM, 
		"Name=from_domain", "Value=i", ENDITEM, 
		"Name=loginname", "Value=onemoresecond@163.com", ENDITEM, 
		"Name=password", "Value=jkfdyzdy51job", ENDITEM, 
		"Name=verifycode", "Value=", ENDITEM, 
		EXTRARES, 
		"Url=https://img01.51jobcdn.com/im/mkt/zn/banner/mqzp/5-770-65.jpg", "Referer=https://i.51job.com/userset/my_51job.php", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/2017/my/ns2.png", "Referer=https://i.51job.com/userset/my_51job.php", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/resume/iconMain.png", "Referer=https://i.51job.com/userset/my_51job.php", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/2017/my/hot.png", "Referer=https://i.51job.com/userset/my_51job.php", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/jobs/fb_img.png", "Referer=https://i.51job.com/userset/my_51job.php", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/2017/my/icon_close.png", "Referer=https://i.51job.com/userset/my_51job.php", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/2016/icon/header.png", "Referer=https://i.51job.com/userset/my_51job.php", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/jobs/img_top.png", "Referer=https://i.51job.com/userset/my_51job.php", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/2017/my/n.png", "Referer=https://i.51job.com/userset/my_51job.php", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/2017/my/new.png", "Referer=https://i.51job.com/userset/my_51job.php", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/2016/icon/arrow.png", "Referer=https://i.51job.com/userset/my_51job.php", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/2016/icon/header2.png", "Referer=https://i.51job.com/userset/my_51job.php", ENDITEM, 
		"Url=https://img01.51jobcdn.com/im/2017/my/icon_rse.png", "Referer=https://i.51job.com/userset/my_51job.php", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("whoviewme.php", 
		"URL=https://i.51job.com/userset/ajax/whoviewme.php", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://i.51job.com/userset/my_51job.php", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("adid=31493934", 
		"URL=https://www.51job.com/ex/page_view.php/adid=31493934", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://i.51job.com/userset/my_51job.php", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getRecommendJob.php", 
		"URL=https://i.51job.com/userset/ajax/getRecommendJob.php?jsoncallback=jQuery183035585671028137044_1560568902396&currentPage=1&number=5&langType=c&_=1560568910981", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://i.51job.com/userset/my_51job.php", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("logRecord.php_2",
		"URL=https://trace.51jingying.com/logRecord.php?logCode=81&webId=2&version=1&logTime=1560568906168&ip=202.120.40.82&guid=99a1f5fd9691580e3e5168b4fd6f0cac&domain=i.51job.com&pageCode=11203&eventType=23&traceName=&cusParam=1%16158602693&vt=1560568910983&logType=event",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://i.51job.com/userset/my_51job.php",
		"Snapshot=t8.inf",
		"Mode=HTML",
		LAST);

	web_url("logRecord.php_3",
		"URL=https://trace.51jingying.com/logRecord.php?VerType=3&webId=2&logTime=1560568912631&ip=202.120.40.82&guid=99a1f5fd9691580e3e5168b4fd6f0cac&domain=i.51job.com&pageCode=11203&cusParam=1%16158602693%1651job_web%16%160%16login.51job.com&vt=1560568912988&logType=pageView",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://i.51job.com/userset/my_51job.php",
		"Snapshot=t9.inf",
		"Mode=HTML",
		LAST);

	lr_think_time(9);

	web_url("logRecord.php_4",
		"URL=https://trace.51jingying.com/logRecord.php?logCode=81&webId=2&version=1&logTime=1560568921709&ip=202.120.40.82&guid=99a1f5fd9691580e3e5168b4fd6f0cac&domain=i.51job.com&pageCode=11203&eventType=5&traceName=&cusParam=1%16158602693&vt=1560568922065&logType=event",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://i.51job.com/userset/my_51job.php",
		"Snapshot=t10.inf",
		"Mode=HTML",
		LAST);

	web_url("my_apply.php", 
		"URL=https://i.51job.com/userset/my_apply.php?lang=c", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://i.51job.com/userset/my_51job.php", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("my_apply.php_2", 
		"URL=http://i.51job.com/userset/my_apply.php?lang=c", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://img01.51jobcdn.com/im/2017/my/hot.png", "Referer=http://i.51job.com/userset/my_apply.php?lang=c", ENDITEM, 
		"Url=http://img01.51jobcdn.com/im/2017/my/icon_mt.png", "Referer=http://i.51job.com/userset/my_apply.php?lang=c", ENDITEM, 
		"Url=http://img01.51jobcdn.com/im/2016/icon/header2.png", "Referer=http://i.51job.com/userset/my_apply.php?lang=c", ENDITEM, 
		"Url=http://img01.51jobcdn.com/im/2016/icon/header.png", "Referer=http://i.51job.com/userset/my_apply.php?lang=c", ENDITEM, 
		"Url=http://img01.51jobcdn.com/im/jobs/img_top.png", "Referer=http://i.51job.com/userset/my_apply.php?lang=c", ENDITEM, 
		"Url=http://img01.51jobcdn.com/im/2017/my/ns2.png", "Referer=http://i.51job.com/userset/my_apply.php?lang=c", ENDITEM, 
		"Url=http://img01.51jobcdn.com/im/jobs/fb_img.png", "Referer=http://i.51job.com/userset/my_apply.php?lang=c", ENDITEM, 
		"Url=http://img01.51jobcdn.com/im/2017/my/n.png", "Referer=http://i.51job.com/userset/my_apply.php?lang=c", ENDITEM, 
		"Url=http://img01.51jobcdn.com/im/2016/form/hp_arr.png", "Referer=http://i.51job.com/userset/my_apply.php?lang=c", ENDITEM, 
		"Url=http://img01.51jobcdn.com/im/2016/icon/arrow.png", "Referer=http://i.51job.com/userset/my_apply.php?lang=c", ENDITEM, 
		"Url=http://img01.51jobcdn.com/im/2017/my/new.png", "Referer=http://i.51job.com/userset/my_apply.php?lang=c", ENDITEM, 
		LAST);

	web_url("logRecord.php_5",
		"URL=http://trace.51jingying.com/logRecord.php?VerType=3&webId=2&logTime=1560568925933&ip=202.120.40.82&guid=99a1f5fd9691580e3e5168b4fd6f0cac&domain=i.51job.com&pageCode=19999&cusParam=1%16158602693%1651job_web%16%160%16&vt=1560568926262&logType=pageView",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://i.51job.com/userset/my_apply.php?lang=c",
		"Snapshot=t13.inf",
		"Mode=HTML",
		LAST);

	return 0;
}