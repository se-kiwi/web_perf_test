Action()
{
	int p4_1, p4_2;
	char request_body[1024];
	
	int rd_day, rd_year;
	srand(time(NULL));  // 每次取不同随机值
	rd_day = rand()%365;  //最大值365的随机数
	rd_year = rand()%20;
	lr_save_datetime("%Y-%m-%d", DATE_NOW - (rd_day * ONE_DAY) - (rd_year * ONE_DAY * 365), "rd_time");  // 随机实现小于当天的日期
//	lr_message(lr_eval_string("{rd_time}"));

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("laravel_session=eyJpdiI6ImhsR2ZVOVNndUR5YjFCVWNveVMyWmc9PSIsInZhbHVlIjoiZjJ0b2dmZUFKXC9CQ3o4YjRscWZVT3I5eXJNVm9FcjFBWDV4bFBEYUFyQ3J3V3RmMkJsbFwvUHpQMTd3Y2ZPTTh3S1A0WHpvRXA5dHpJRFVISHNTd24wQT09IiwibWFjIjoiMjk3MWUyNzMzMDMwZDA4NTRlMDQ2ZDRiNmQ0ZGJiYzk0MjJiMTVjNmM4YmMzNmU0NjA4Y2JmODQ4NzMxZWFmYSJ9; DOMAIN=api.infinitynewtab.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("14514689.aspx", 
		"URL=https://www.wjx.cn/jq/14514689.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		"Url=../joinnew/maincss/q.css?v=826", ENDITEM, 
		"Url=../joinnew/css/newsolid_38.css?v=2", ENDITEM, 
		"Url=../joinnew/js/zhezhao.js?v=2", ENDITEM, 
		"Url=../joinnew/js/slider_extras.js?v=826", ENDITEM, 
		"Url=../joinnew/js/hintinfo.js?v=2", ENDITEM, 
		"Url=../joinnew/js/jqnew2.js?v=826", ENDITEM, 
		"Url=../joinnew/js/calendar.js", ENDITEM, 
		"Url=../images/form/mobile.png", ENDITEM, 
		"Url=../images/form/date.png", ENDITEM, 
		"Url=https://s6.cnzz.com/z_stat.php?id=4478442&web_id=4478442", ENDITEM, 
		"Url=https://image.wjx.com/GreyBox/ajax-loading.gif", ENDITEM, 
		"Url=https://down.wjx.com/handler/qrcode.ashx?chs=50x50&chl=https%3a%2f%2fwww.wjx.cn%2fm%2f14514689.aspx", ENDITEM, 
		"Url=https://c.cnzz.com/core.php?web_id=4478442&t=z", ENDITEM, 
		"Url=https://hm.baidu.com/hm.js?21be24c80829bd7a683b2c536fcf520b", ENDITEM, 
		"Url=https://cnzz.mmstat.com/9.gif?abc=1&rnd=648614870", ENDITEM, 
		"Url=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1536x864&vl=1122&et=0&ja=0&ln=zh-cn&lo=0&rnd=76763105&si=21be24c80829bd7a683b2c536fcf520b&v=1.2.51&lv=1&sn=64710&ct=!!&tt=%E4%B8%80%E9%A4%90%E6%A1%8C%E9%9D%A2%E6%B8%85%E7%90%86%E6%83%85%E5%86%B5%E8%B0%83%E6%9F%A5", ENDITEM, 
		"Url=https://sojump.cn-hangzhou.log.aliyuncs.com/logstores/activityfinish/track.gif?APIVersion=0.6.0&activity=14514689&source=0&weixin=0&vip=0&qtype=1", ENDITEM, 
		"Url=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1536x864&vl=1122&ep=57801%2C31786&et=3&ja=0&ln=zh-cn&lo=0&rnd=1062860768&si=21be24c80829bd7a683b2c536fcf520b&v=1.2.51&lv=1&sn=64710", ENDITEM, 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("uploadqiniu.aspx", 
		"URL=https://www.wjx.cn/wjx/join/uploadqiniu.aspx?activity=14514689&q=3&ms=4096&length=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.wjx.cn/jq/14514689.aspx", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/images/checkbox.gif", "Referer=https://www.wjx.cn/joinnew/maincss/q.css?v=826", ENDITEM, 
		"Url=/images/wjx/JoinQuestionnaire/bgProgressBg.gif", "Referer=https://www.wjx.cn/joinnew/maincss/q.css?v=826", ENDITEM, 
		LAST);

	web_add_cookie("_fbp=fb.1.1551697940844.697615329; DOMAIN=stats.g.doubleclick.net");

	web_add_cookie("IDE=AHWqTUm013TLZSyAZ6EPvjYn5o_p2RWHA5EYlfqapozolBhFK8f3iqCKyVh-suiJ; DOMAIN=stats.g.doubleclick.net");

	lr_think_time(5);  // why pause 5 seconds?

	web_add_cookie("UM_distinctid=16b3eb7aa964ce-0fbf81633905e7-e353165-144000-16b3eb7aa972b9; DOMAIN=www.wjx.cn");

	web_add_cookie("CNZZDATA4478442=cnzz_eid%3D220356809-1560120921-%26ntime%3D1560120921; DOMAIN=www.wjx.cn");

	lr_think_time(5);

	web_add_header("X-Goog-Update-AppId", 
		"aapbdbdomjkkjkaonfhkkikfgjllcleb,aeajloomjeoncelkceelhhpkgbcgafek,cfhdojbkjhnklbpkdaibdccddilifddb,chphlpgkkbolifaimnlloiipkdnihall,dbfmnekepjoapopniengjbcpnbljalfg,dgjhfomjieaadpoljlnidmbgkdffpack,eeeningnfkaonkonalpcicgemnnijjhn,efaidnbmnnnibpcajpcglclefindmkaj,ffabmkklhbepgcgfonabamgnfafbdlkn,fngmhnnpilhplaeedifhccceomclgfbg,hflefjhkfeiaignkclmphmokmmbhbhik,hmhgeddbohgjknpmjagkdomcpobmllji,ilmpacenmcgknoogkhpigakpoocpjmpl,jlgkpaicikihijadgifklkbpdajbkhjo,lloccabjgblebdmncjndmiibianflabo,"
		"mcbpblocgmgfnpjjppndjkmgjaogfceg,mgndgikekgjfcpckkfioiadnlibdjbkf,nmmhkkegccagdldgiimedpiccmgmieda");

	web_add_auto_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_auto_header("X-Goog-Update-Updater", 
		"chromecrx-74.0.3729.169");

	lr_think_time(7);

	web_add_header("X-Goog-Update-AppId", 
		"pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	lr_think_time(5);

	web_add_cookie("Hm_lvt_21be24c80829bd7a683b2c536fcf520b=1560125385; DOMAIN=www.wjx.cn");

	web_add_cookie("Hm_lpvt_21be24c80829bd7a683b2c536fcf520b=1560125385; DOMAIN=www.wjx.cn");

	web_revert_auto_header("X-Goog-Update-Interactivity");

	web_revert_auto_header("X-Goog-Update-Updater");

	web_add_header("Origin", 
		"https://www.wjx.cn");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

//	web_submit_data("wjx-z0.qiniup.com", 
//		"Action=https://wjx-z0.qiniup.com/", 
//		"Method=POST", 
//		"EncType=multipart/form-data", 
//		"RecContentType=text/html", 
//		"Referer=https://www.wjx.cn/wjx/join/uploadqiniu.aspx?activity=14514689&q=3&ms=4096&length=1", 
//		"Snapshot=t21.inf", 
//		"Mode=HTML", 
//		ITEMDATA, 
//		"Name=token", "Value=-kY3jr8KMC7l3KkIN3OcIs8Q4s40OfGgUHr1Rg4D:XIaW14neyxzT2ql_mKFcrmE5Kyk="
//		":eyJzY29wZSI6InNvanVtcCIsInJldHVyblVybCI6Imh0dHBzOi8vd3d3LndqeC5jbi93angvam9pbi91cGxvYWRxaW5pdS5hc3B4P2FjdGl2aXR5PTE0NTE0Njg5JnE9MyZtcz00MDk2IiwicmV0dXJuQm9keSI6IntcInNpemVcIjpcIiQoZnNpemUpXCIsXCJuYW1lXCI6XCIkKGZuYW1lKVwiLFwia2V5XCI6XCIkKGtleSlcIixcIm1pbWVUeXBlXCI6XCIkKG1pbWVUeXBlKVwifSIsImRlYWRsaW5lIjoxNzE3ODA1MzQ3LCJzYXZlS2V5IjoiMTQ1MTQ2ODlfNjBfcTNfR3JnTXpQcW9GVUtmd3JVZExnUlBnJChleHQpIiwiaW5zZXJ0T25seSI6MSwiZGV0ZWN0TWltZSI6MCwibWltZUxpbWl0IjoiaW1hZ2UvanBnO2ltYWdlL2pwZWc7aW1hZ2UvZ2lmO2ltYWdlL2Jtc"
//		"DtpbWFnZS9wbmc7YXBwbGljYXRpb24vcGRmO2FwcGxpY2F0aW9uL21zd29yZDthcHBsaWNhdGlvbi92bmQub3BlbnhtbGZvcm1hdHMtb2ZmaWNlZG9jdW1lbnQud29yZHByb2Nlc3NpbmdtbC5kb2N1bWVudDthcHBsaWNhdGlvbi92bmQubXMtZXhjZWw7YXBwbGljYXRpb24vdm5kLm9wZW54bWxmb3JtYXRzLW9mZmljZWRvY3VtZW50LnNwcmVhZHNoZWV0bWwuc2hlZXQ7YXBwbGljYXRpb24vdm5kLm1zLXBvd2VycG9pbnQ7YXBwbGljYXRpb24vdm5kLm9wZW54bWxmb3JtYXRzLW9mZmljZWRvY3VtZW50LnByZXNlbnRhdGlvbm1sLnByZXNlbnRhdGlvbjt0ZXh0L3BsYWluO2FwcGxpY2F0aW9uL3gtcmFyLWNvbXByZXNzZWQ7YXBwbGljYXRpb24veC1yYXI7YXBwbGl"
//		"jYXRpb24vemlwO2FwcGxpY2F0aW9uL3gtZ3ppcDt2aWRlby9tcDQ7YXBwbGljYXRpb24veC1tcGVnVVJMO3ZpZGVvL3gtZmx2O3ZpZGVvL3gtZjR2O3ZpZGVvL3dlYm07dmlkZW8vcXVpY2t0aW1lO3ZpZGVvL3gtbTR2O3ZpZGVvLzNncHA7dmlkZW8veC1tc3ZpZGVvO3ZpZGVvL3gtbXMtd212O2F1ZGlvL21wZWc7YXVkaW8veC1tcy13bWE7YXVkaW8veC13YXY7YXVkaW8vQU1SO3RleHQveC1jKytzcmM7dGV4dC94LWNzcmMiLCJmc2l6ZUxpbWl0Ijo0MTk0MzA0fQ==", ENDITEM, 
//		"Name=file", "Value=timg.jpg", "File=Yes", ENDITEM, 
//		EXTRARES, 
//		"Url=http://pubuserqiniu.paperol.cn/14514689_60_q3_GrgMzPqoFUKfwrUdLgRPg.jpg?imageMogr2/thumbnail/120x120&e=1560125462&token=-kY3jr8KMC7l3KkIN3OcIs8Q4s40OfGgUHr1Rg4D:6SHKsJijTkfZwvVrqr24FcEH_Zk=", "Referer=", ENDITEM, 
//		LAST);

	web_add_header("Origin", 
		"https://www.wjx.cn");

	p4_1 = atoi(lr_eval_string("{Param4}"));
	p4_2 = 100 - p4_1;

	sprintf(request_body,
	        "1$%s}2$%s}3$}4$1!%d^2!%d}5$1!%s^2!%s}6$%s}7$%s}8$%s",
	        lr_eval_string("{Param1}"),
	        lr_eval_string("{Param2}"),
	       	/* void Param3 */
	        p4_1, p4_2,
	        lr_eval_string("{Param5}"), lr_eval_string("{Param5}"),
	        lr_eval_string("{Param6}"),
	        lr_eval_string("{Param7}"),
	        lr_eval_string("{rd_time}")
	);
	
	lr_log_message("%s / p4: %d %d, message: %s", lr_eval_string("{Param1}"), p4_1, p4_2, request_body);
	
	lr_save_string(request_body, "url_req_body");
	web_convert_param("url_req_body", "SourceEncoding=PLAIN", "TargetEncoding=URL", LAST);
	
	sprintf(request_body,
	        "Body=submitdata=%s",
	        lr_eval_string("{url_req_body}"));
		
	lr_save_string(request_body, "url_req_body");
	
	web_custom_request("processjq.ashx", 
		"URL=https://www.wjx.cn/joinnew/processjq.ashx?submittype=1&curID=14514689&t=1560125440888&starttime=2019%2F6%2F10%208%3A09%3A05&ktimes=135&rn=3394161671.72174508&hlv=1&jqnonce=3dda81ca-dad2-4272-be44-b13370f143c5&jqsign=6aad%3D4fd(ada7(1727(g%6011(g46625c416f0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.wjx.cn/jq/14514689.aspx", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		lr_eval_string("{url_req_body}"),
		LAST);
	
	web_add_cookie("jcmob=11122223333; DOMAIN=www.wjx.cn");

	web_add_cookie("sca=d2828dc3; DOMAIN=cnzz.mmstat.com");

	web_add_cookie("atpsida=6fdfc6e7f0dfaffe6929a81b_1560125382_1; DOMAIN=cnzz.mmstat.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("complete.aspx", 
		"URL=https://www.wjx.cn/wjx/join/complete.aspx?q=14514689&JoinID=102822716510&jidx=60&s=&njqj=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.wjx.cn/jq/14514689.aspx", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://hm.baidu.com/hm.js?21be24c80829bd7a683b2c536fcf520b", "Referer=https://www.wjx.cn/wjx/join/complete.aspx?q=14514689&JoinID=102822716510&jidx=60&s=&njqj=1", ENDITEM, 
		"Url=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1536x864&vl=1122&ep=57801%2C31786&et=3&ja=0&ln=zh-cn&lo=0&rnd=1062860768&si=21be24c80829bd7a683b2c536fcf520b&v=1.2.51&lv=1&sn=64710&u=https%3A%2F%2Fwww.wjx.cn%2Fjq%2F14514689.aspx", "Referer=https://www.wjx.cn/wjx/join/complete.aspx?q=14514689&JoinID=102822716510&jidx=60&s=&njqj=1", ENDITEM, 
		"Url=https://cnzz.mmstat.com/9.gif?abc=1&rnd=815573849", "Referer=https://www.wjx.cn/wjx/join/complete.aspx?q=14514689&JoinID=102822716510&jidx=60&s=&njqj=1", ENDITEM, 
		"Url=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1536x864&vl=722&et=0&ja=0&ln=zh-cn&lo=0&lt=1560125385&rnd=363078200&si=21be24c80829bd7a683b2c536fcf520b&su=https%3A%2F%2Fwww.wjx.cn%2Fjq%2F14514689.aspx&v=1.2.51&lv=2&sn=64775&ct=!!&tt=%E4%B8%80%E9%A4%90%E6%A1%8C%E9%9D%A2%E6%B8%85%E7%90%86%E6%83%85%E5%86%B5%E8%B0%83%E6%9F%A5--%E9%97%AE%E5%8D%B7%E5%A1%AB%E5%86%99%E5%AE%8C%E6%88%90%E9%A1%B5%E9%9D%A2", "Referer=https://www.wjx.cn/wjx/join/complete.aspx?q=14514689&JoinID=102822716510&jidx=60&s=&"
		"njqj=1", ENDITEM, 
		LAST);

	web_url("stat.htm_3", 
		"URL=https://gzs20.cnzz.com/stat.htm?id=4478442&r=https%3A%2F%2Fwww.wjx.cn%2Fjq%2F14514689.aspx&lg=zh-cn&ntime=1560120921&cnzz_eid=220356809-1560120921-&showp=1536x864&p=https%3A%2F%2Fwww.wjx.cn%2Fwjx%2Fjoin%2Fcomplete.aspx%3Fq%3D14514689%26JoinID%3D102822716510%26jidx%3D60%26s%3D%26njqj%3D1&t=%E4%B8%80%E9%A4%90%E6%A1%8C%E9%9D%A2%E6%B8%85%E7%90%86%E6%83%85%E5%86%B5%E8%B0%83%E6%9F%A5--%E9%97%AE%E5%8D%B7%E5%A1%AB%E5%86%99%E5%AE%8C%E6%88%90%E9%A1%B5%E9%9D%A2&umuuid="
		"16b3eb7aa964ce-0fbf81633905e7-e353165-144000-16b3eb7aa972b9&h=1&rnd=489155835", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.wjx.cn/wjx/join/complete.aspx?q=14514689&JoinID=102822716510&jidx=60&s=&njqj=1", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_url("stat.htm_4", 
		"URL=https://ei.cnzz.com/stat.htm?id=4478442&r=https%3A%2F%2Fwww.wjx.cn%2Fjq%2F14514689.aspx&lg=zh-cn&ntime=1560120921&cnzz_eid=220356809-1560120921-&showp=1536x864&p=https%3A%2F%2Fwww.wjx.cn%2Fwjx%2Fjoin%2Fcomplete.aspx%3Fq%3D14514689%26JoinID%3D102822716510%26jidx%3D60%26s%3D%26njqj%3D1&ei=PC%25E7%25AB%25AF%25E5%25AE%258C%25E6%2588%2590%7C%25E5%2585%258D%25E8%25B4%25B9%25E7%2589%2588%7C1%7C0%7C&t="
		"%E4%B8%80%E9%A4%90%E6%A1%8C%E9%9D%A2%E6%B8%85%E7%90%86%E6%83%85%E5%86%B5%E8%B0%83%E6%9F%A5--%E9%97%AE%E5%8D%B7%E5%A1%AB%E5%86%99%E5%AE%8C%E6%88%90%E9%A1%B5%E9%9D%A2&umuuid=16b3eb7aa964ce-0fbf81633905e7-e353165-144000-16b3eb7aa972b9&h=1&rnd=1724594876", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.wjx.cn/wjx/join/complete.aspx?q=14514689&JoinID=102822716510&jidx=60&s=&njqj=1", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://sojump.cn-hangzhou.log.aliyuncs.com/logstores/activitydata/track.gif?APIVersion=0.6.0&t=1&a=14514689&j=102822716510&i=0&q=1&s=1&w=5&d=3193&r=0&c=0", "Referer=https://www.wjx.cn/wjx/join/complete.aspx?q=14514689&JoinID=102822716510&jidx=60&s=&njqj=1", ENDITEM, 
		LAST);

	return 0;
}