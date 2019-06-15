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
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(7);

	web_reg_find("Search=All",
		"Text=true",
		LAST);

/*Correlation comment - Do not change!  Original value='8e41513b-908a-41b0-ba86-3c341840d79f' Name ='code' Type ='RecordReplay'*/
	web_reg_save_param_json(
		"ParamName=code",
		"QueryString=$.code",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

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
	
	web_reg_find("Search=All",
		"Text=Have a nice day!",
		LAST);

	web_url("sayHello",
		"URL=http://localhost:30701/hello?username=test1&code={code}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t5.inf",
		"Mode=HTML",
		LAST);
	
	return 0;
}