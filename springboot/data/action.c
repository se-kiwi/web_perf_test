Action()
{

	web_url("localhost:30701", 
		"URL=http://localhost:30701/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/hello?username=test1&code=8e41513b-908a-41b0-ba86-3c341840d79f", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(7);

	web_submit_data("login", 
		"Action=http://localhost:30701/login", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://localhost:30701/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=test1", ENDITEM, 
		"Name=password", "Value=test1", ENDITEM, 
		LAST);

	return 0;
}