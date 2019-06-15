Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("Login.aspx", 
		"URL=https://www.wjx.cn/Login.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=/css/index.css?v=3", ENDITEM, 
		"Url=/js/jquery-1.8.3.min.js", ENDITEM, 
		"Url=/js/zhezhao.js?v=3", ENDITEM, 
		"Url=/images/register-login/logo.png", ENDITEM, 
		"Url=https://image.wjx.com/images/register-login/weixin-nor.png", ENDITEM, 
		"Url=https://image.wjx.com/images/register-login/qiye-nor.png", ENDITEM, 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("Origin", 
		"https://www.wjx.cn");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("Login.aspx_2", 
		"Action=https://www.wjx.cn/Login.aspx", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://www.wjx.cn/Login.aspx", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=__VIEWSTATE", "Value=/wEPDwUKLTEwOTA5MDgzOWQYAQUeX19Db250cm9sc1JlcXVpcmVQb3N0QmFja0tleV9fFgEFClJlbWVtYmVyTWUWFrt7kU/iJpi6/ct+f/nuU9C2FA==", ENDITEM, 
		"Name=__VIEWSTATEGENERATOR", "Value=C2EE9ABB", ENDITEM, 
		"Name=__EVENTVALIDATION", "Value=/wEdAAbMzKrdeBjfGR+anhaHVMu/R1LBKX1P1xh290RQyTesRRHS0B3lkDg8wcTlzQR027xcCvP9YJ59uTpXZUTciHnZJx1yNK0PnRor9mt9az+5BdypqPqLgdpphNzIPTIm7G5VaFEe3GK4xox/1M+a6zjzF5Js2Q==", ENDITEM, 
		"Name=UserName", "Value=webtest", ENDITEM, 
		"Name=hfUserName", "Value=", ENDITEM, 
		"Name=Password", "Value=kiwiwjx+1s", ENDITEM, 
		"Name=LoginButton", "Value=ç™\xBB å½\x95", ENDITEM, 
		EXTRARES, 
		"Url=/layer/theme/default/layer.css?v=3.1.0", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/index/mobieindexnew.png", "Referer=https://www.wjx.cn/newwjx/css/wjxmaster.css?v=4", ENDITEM, 
		"Url=/Images/newimg/user.png", "Referer=https://www.wjx.cn/newwjx/css/wjxmaster.css?v=4", ENDITEM, 
		"Url=/Images/newimg/home24.png", "Referer=https://www.wjx.cn/newwjx/css/wjxmaster.css?v=4", ENDITEM, 
		"Url=/Images/newimg/news.png", "Referer=https://www.wjx.cn/newwjx/css/wjxmaster.css?v=4", ENDITEM, 
		"Url=/images/newimg/pic-1/create_15.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		"Url=/Images/newimg/exit.png", "Referer=https://www.wjx.cn/newwjx/css/wjxmaster.css?v=4", ENDITEM, 
		"Url=/images/newimg/pic-1/recovery.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		"Url=/images/newimg/pic-1/design.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		"Url=/images/newimg/pic-1/download.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		"Url=/images/newimg/pic-1/delete-gray.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		"Url=/images/newimg/pic-1/search-gray.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		"Url=/images/newimg/pic-1/stop.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		"Url=/images/newimg/pic-1/copy.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		"Url=/images/newimg/pic-1/folder.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		"Url=/images/newimg/pic-1/delete.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		"Url=/images/newimg/pic-1/remind.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		"Url=/Images/newimg/first-new@2x.png", "Referer=https://www.wjx.cn/newwjx/css/default.css?v=4", ENDITEM, 
		"Url=/Images/newimg/next-new@2x.png", "Referer=https://www.wjx.cn/newwjx/css/default.css?v=4", ENDITEM, 
		"Url=/Images/newimg/previous1-new@2x.png", "Referer=https://www.wjx.cn/newwjx/css/default.css?v=4", ENDITEM, 
		"Url=/Images/newimg/last1-new@2x.png", "Referer=https://www.wjx.cn/newwjx/css/default.css?v=4", ENDITEM, 
		"Url=https://c.cnzz.com/core.php?web_id=4478442&t=z", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=https://hm.baidu.com/hm.js?21be24c80829bd7a683b2c536fcf520b", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1536x864&vl=722&et=0&ja=0&ln=zh-cn&lo=0&rnd=663436844&si=21be24c80829bd7a683b2c536fcf520b&su=https%3A%2F%2Fwww.wjx.cn%2FLogin.aspx&v=1.2.51&lv=1&sn=7574&ct=!!&tt=%E6%88%91%E7%9A%84%E9%97%AE%E5%8D%B7%20-%20%E9%97%AE%E5%8D%B7%E6%98%9F%EF%BC%88%E5%85%8D%E8%B4%B9%E7%89%88%EF%BC%89", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1536x864&vl=722&ep=15711%2C15710&et=3&ja=0&ln=zh-cn&lo=0&rnd=987796918&si=21be24c80829bd7a683b2c536fcf520b&su=https%3A%2F%2Fwww.wjx.cn%2FLogin.aspx&v=1.2.51&lv=1&sn=7574", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		LAST);

	web_add_cookie("UM_distinctid=16b4af024d8e4-092e879fed8989-e353165-144000-16b4af024d9160; DOMAIN=www.wjx.cn");

	web_add_cookie("CNZZDATA4478442=cnzz_eid%3D2027245396-1560329066-https%253A%252F%252Fwww.wjx.cn%252F%26ntime%3D1560329066; DOMAIN=www.wjx.cn");

	web_add_cookie("Hm_lvt_21be24c80829bd7a683b2c536fcf520b=1560330389; DOMAIN=www.wjx.cn");

	web_add_cookie("Hm_lpvt_21be24c80829bd7a683b2c536fcf520b=1560330389; DOMAIN=www.wjx.cn");

	web_add_cookie("_cnzz_CV4478442=%E7%94%A8%E6%88%B7%E7%89%88%E6%9C%AC%7C%E5%85%8D%E8%B4%B9%E7%89%88%7C1560330390183; DOMAIN=www.wjx.cn");

	lr_think_time(7);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='60000' Name ='qindex' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=qindex",
		"RegExp=quot;:(.*?),",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/viewnps.aspx*",
		LAST);

	web_url("reporttransfer.aspx",
		"URL=https://www.wjx.cn/wjx/activitystat/reporttransfer.aspx?activity=40211802",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx",
		"Snapshot=t39.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=/Images/newimg/home.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/online-exam/design.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/online-exam/analysis.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/online-exam/recycling.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/question-gray.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/service-gray.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/online-exam/link.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/online-exam/default-nor.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/online-exam/download.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/online-exam/correct.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/online-exam/analysis-hover.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/online-exam/source.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/online-exam/report-pre.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/online-exam/complete.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=https://image.wjx.com/images/wjx/viewstat/column-s.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM,
		"URL=https://image.wjx.com/images/wjx/viewstat/broken-line.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM,
		"URL=https://image.wjx.com/images/wjx/viewstat/strip-nor.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM,
		"URL=/images/newimg/single-icon.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM,
		"URL=https://sojump.cn-hangzhou.log.aliyuncs.com/logstores/activitystat/track.gif?APIVersion=0.6.0&activity=40211802&type=nps&jointimes=2", "Referer=https://www.wjx.cn/wjx/activitystat/viewnps.aspx?activity=40211802", ENDITEM,
		"URL=https://at.alicdn.com/t/font_1066834_87xmm2dp4hk.woff2", "Referer=https://www.wjx.cn/wjxUI/src/wjxUI.css?v=5", ENDITEM,
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(8);

	web_url("viewnps.aspx",
		"URL=https://www.wjx.cn/wjx/activitystat/viewnps.aspx?activity=40211802&qindex={qindex}&atype=2&xq=-3&qtype=0",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.wjx.cn/wjx/activitystat/viewnps.aspx?activity=40211802",
		"Snapshot=t40.inf",
		"Mode=HTML",
		LAST);

	lr_think_time(7);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("viewurl.aspx",
		"URL=https://www.wjx.cn/wjx/activitystat/viewurl.aspx?activity=40211802",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://www.wjx.cn/wjx/activitystat/viewnps.aspx?activity=40211802",
		"Snapshot=t42.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=/Images/newimg/online-exam/report.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=/Images/newimg/online-exam/source-hover.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM,
		"URL=https://image.wjx.com/images/wjx/viewstat/pie-nor.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM,
		"URL=https://image.wjx.com/images/wjx/viewstat/ring-nor.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM,
		"URL=https://image.wjx.com/images/wjx/viewstat/column-nor.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM,
		"URL=https://image.wjx.com/images/wjx/viewstat/pie-s.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM,
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	return 0;
}