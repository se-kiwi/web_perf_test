Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("crudat=2019-05-22 17:56:15; DOMAIN=www.wjx.cn");

	web_add_cookie("WjxUser=UserName=webtest; DOMAIN=www.wjx.cn");

	web_add_cookie("LastCheckUpdateDate=1; DOMAIN=www.wjx.cn");

	web_add_cookie("LastCheckDesign=1; DOMAIN=www.wjx.cn");

	web_add_cookie("UM_distinctid=16b1dd9e27d89-0df50382fd90a6-293e1d4e-144000-16b1dd9e27e2f9; DOMAIN=www.wjx.cn");

	web_add_cookie("CNZZDATA4478442=cnzz_eid%3D1591451856-1559572098-%26ntime%3D1560561510; DOMAIN=www.wjx.cn");

	web_add_cookie(".ASPXANONYMOUS=FxyXsK5Q1QEkAAAAN2NiMzA4MDItMTcxMS00NGIzLWE2NjAtZDY1MGQxM2IwZjZkcqfiQRwHh9HGeWcvNsmUlY3KDlA1; DOMAIN=www.wjx.cn");

	web_add_cookie("_cnzz_CV4478442=%E7%94%A8%E6%88%B7%E7%89%88%E6%9C%AC%7C%E5%85%8D%E8%B4%B9%E7%89%88%7C1560566395047; DOMAIN=www.wjx.cn");

	web_add_cookie("acw_tc=707c9fcc15595739297887103e74ac419669d897e64ee666b0161f2a22ad8d; DOMAIN=www.wjx.cn");

	web_add_cookie("Hm_lvt_21be24c80829bd7a683b2c536fcf520b=1559608344,1559609769,1560126211,1560566336; DOMAIN=www.wjx.cn");

	web_url("Login.aspx", 
		"URL=https://www.wjx.cn/Login.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://image.wjx.com/images/register-login/qiye-nor.png", ENDITEM, 
		"Url=https://image.wjx.com/images/register-login/user.png", ENDITEM, 
		"Url=https://image.wjx.com/images/register-login/qq.png", ENDITEM, 
		"Url=https://image.wjx.com/images/register-login/weixin-nor.png", ENDITEM, 
		"Url=https://image.wjx.com/images/register-login/password.png", ENDITEM, 
		"Url=https://image.wjx.com/images/newimg/register-login/bacg.jpg", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_submit_form("Login.aspx_2", 
		"Snapshot=t19.inf", 
		ITEMDATA, 
		"Name=UserName", "Value=webtest", ENDITEM, 
		"Name=Password", "Value=kiwiwjx+1s", ENDITEM, 
		"Name=RememberMe", "Value=<OFF>", ENDITEM, 
		"Name=LoginButton", "Value=�\xBB �\x95", ENDITEM, 
		EXTRARES, 
		"Url=/layer/theme/default/layer.css?v=3.1.0", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/Images/newimg/exit.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/index/mobieindexnew.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/Images/newimg/home24.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/Images/newimg/news.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/Images/newimg/user.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/download.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/design.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/recovery.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/search-gray.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/create_15.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/copy.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/delete-gray.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/release-hover.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/delete.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/folder.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/Images/newimg/previous1-new@2x.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/stop.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/Images/newimg/first-new@2x.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/remind.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/Images/newimg/next-new@2x.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/Images/newimg/last1-new@2x.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/download-hover.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/copy-hover.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/recovery-hover.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		"Url=/images/newimg/pic-1/design-hover.png", "Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", ENDITEM, 
		LAST);

	web_link("编辑问卷", 
		"Text=编辑问卷", 
		"Ordinal=1", 
		"Snapshot=t20.inf", 
		EXTRARES, 
		"Url=/Images/newimg/online-exam/analysis.png", "Referer=https://www.wjx.cn/newwjx/design/editquestionnaire.aspx?activity=40211802", ENDITEM, 
		"Url=/Images/newimg/online-exam/recycling.png", "Referer=https://www.wjx.cn/newwjx/design/editquestionnaire.aspx?activity=40211802", ENDITEM, 
		"Url=/Images/newimg/online-exam/design-hover.png", "Referer=https://www.wjx.cn/newwjx/design/editquestionnaire.aspx?activity=40211802", ENDITEM, 
		"Url=/Images/newimg/online-exam/edit-pre.png", "Referer=https://www.wjx.cn/newwjx/design/editquestionnaire.aspx?activity=40211802", ENDITEM, 
		"Url=/Images/newimg/quality.png", "Referer=https://www.wjx.cn/newwjx/design/editquestionnaire.aspx?activity=40211802", ENDITEM, 
		"Url=/Images/newimg/online-exam/set.png", "Referer=https://www.wjx.cn/newwjx/design/editquestionnaire.aspx?activity=40211802", ENDITEM, 
		"Url=/Images/newimg/appearance.png", "Referer=https://www.wjx.cn/newwjx/design/editquestionnaire.aspx?activity=40211802", ENDITEM, 
		"Url=/Images/newimg/question-gray.png", "Referer=https://www.wjx.cn/newwjx/design/editquestionnaire.aspx?activity=40211802", ENDITEM, 
		"Url=/Images/newimg/online-exam/prizes.png", "Referer=https://www.wjx.cn/newwjx/design/editquestionnaire.aspx?activity=40211802", ENDITEM, 
		"Url=/Images/newimg/online-exam/guide.png", "Referer=https://www.wjx.cn/newwjx/design/editquestionnaire.aspx?activity=40211802", ENDITEM, 
		"Url=/images/newimg/triangle.png", "Referer=https://www.wjx.cn/newwjx/design/editquestionnaire.aspx?activity=40211802", ENDITEM, 
		"Url=/Images/newimg/service-gray.png", "Referer=https://www.wjx.cn/newwjx/design/editquestionnaire.aspx?activity=40211802", ENDITEM, 
		"Url=/Images/newimg/home.png", "Referer=https://www.wjx.cn/newwjx/design/editquestionnaire.aspx?activity=40211802", ENDITEM, 
		LAST);

	web_submit_form("editquestionnaire.aspx", 
		"Snapshot=t21.inf", 
		ITEMDATA, 
		"Name=ctl02$ContentPlaceHolder1$btnEditQ", "Value=下一�\xA5", ENDITEM, 
		EXTRARES, 
		"Url=/Js/hintinfo.js?v=2", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=/Js/design_new.js?v=470", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=/Images/WJX/JoinQuestionnaire/sliderEnd.png", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=/Js/operation_new.js?v=470", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=/images/stu/icon.png", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=/Js/utility_new.js?v=470", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=/kindeditor/kindeditor.js?v=470", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=/images/checkbox.gif", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=/Js/createqattr_new.js?v=470", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=/Images/WJX/JoinQuestionnaire/slider1.png", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=/images/wjx/JoinQuestionnaire/Rate/piont_lv.png", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=/images/radio.gif", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=/images/design/icoall.png?v=2", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=https://c.cnzz.com/core.php?web_id=4478442&t=z", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=https://at.alicdn.com/t/font_1066834_87xmm2dp4hk.eot?", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=/kindeditor/skins/default.css?v=6", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		LAST);

	web_add_cookie("HMACCOUNT=0D48116799755DC6; DOMAIN=hm.baidu.com");

	web_add_cookie("BAIDUID=E456C59E5436F4192D328D34EB5580A6:FG=1; DOMAIN=hm.baidu.com");

	web_add_cookie("BIDUPSID=E456C59E5436F4192D328D34EB5580A6; DOMAIN=hm.baidu.com");

	web_add_cookie("PSTM=1559573735; DOMAIN=hm.baidu.com");

	web_url("stat.htm", 
		"URL=https://gzs20.cnzz.com/stat.htm?id=4478442&r=https%3A%2F%2Fwww.wjx.cn%2Fnewwjx%2Fdesign%2Feditquestionnaire.aspx%3Factivity%3D40211802&lg=zh-cn&ntime=1560561510&cnzz_eid=1591451856-1559572098-&showp=1536x864&p=https%3A%2F%2Fwww.wjx.cn%2Fmysojump%2Fquestionnairemng%2Fdesignnew.aspx%3Fversion%3D7%26openType%3Dredesign%26curid%3D40211802%26nqt%3D&t=%E8%AE%BE%E8%AE%A1%E9%97%AE%E5%8D%B7%20%EF%BC%8D%20%E4%B8%93%E4%B8%9A%E7%9A%84%E5%9C%A8%E7%BA%BF%E9%97%AE%E5%8D%B7%E8%B0%83%E6%9F%A5%E5%B9%B3%E5%8F%B0"
		"&umuuid=16b1dd9e27d89-0df50382fd90a6-293e1d4e-144000-16b1dd9e27e2f9&h=1&rnd=380222273", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.wjx.cn/kindeditor/skins/common/editor.css?ver=3.5.5", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=https://www.wjx.cn/Images/design/full-screen-nor.png", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=https://hm.baidu.com/hm.js?21be24c80829bd7a683b2c536fcf520b", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=https://www.wjx.cn/kindeditor/skins/default/default.png?v=3", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		"Url=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1536x864&vl=745&et=0&fl=32.0&ja=1&ln=zh-cn&lo=0&lt=1560566589&rnd=1930911126&si=21be24c80829bd7a683b2c536fcf520b&su=https%3A%2F%2Fwww.wjx.cn%2Fnewwjx%2Fdesign%2Feditquestionnaire.aspx%3Factivity%3D40211802&v=1.2.51&lv=3&sn=47169&ct=!!&tt=%E8%AE%BE%E8%AE%A1%E9%97%AE%E5%8D%B7%20%EF%BC%8D%20%E4%B8%93%E4%B8%9A%E7%9A%84%E5%9C%A8%E7%BA%BF%E9%97%AE%E5%8D%B7%E8%B0%83%E6%9F%A5%E5%B9%B3%E5%8F%B0", "Referer=https://www.wjx.cn/mysojump/questionnairemng/"
		"designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		LAST);

	web_url("stat.htm_2", 
		"URL=https://ei.cnzz.com/stat.htm?id=4478442&r=https%3A%2F%2Fwww.wjx.cn%2Fnewwjx%2Fdesign%2Feditquestionnaire.aspx%3Factivity%3D40211802&lg=zh-cn&ntime=1560561510&cnzz_eid=1591451856-1559572098-&showp=1536x864&p=https%3A%2F%2Fwww.wjx.cn%2Fmysojump%2Fquestionnairemng%2Fdesignnew.aspx%3Fversion%3D7%26openType%3Dredesign%26curid%3D40211802%26nqt%3D&ei="
		"%25E7%25BC%2596%25E8%25BE%2591%25E9%25A1%25B5%25E9%259D%25A2%7C%25E7%25BC%2596%25E8%25BE%2591%25E9%25A2%2598%25E7%259B%25AE%7C%25E7%25BC%2596%25E8%25BE%2591%25E6%258C%2589%25E9%2592%25AE%7C0%7C&t=%E8%AE%BE%E8%AE%A1%E9%97%AE%E5%8D%B7%20%EF%BC%8D%20%E4%B8%93%E4%B8%9A%E7%9A%84%E5%9C%A8%E7%BA%BF%E9%97%AE%E5%8D%B7%E8%B0%83%E6%9F%A5%E5%B9%B3%E5%8F%B0&umuuid=16b1dd9e27d89-0df50382fd90a6-293e1d4e-144000-16b1dd9e27e2f9&h=1&rnd=1067330947", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("stat.htm_3", 
		"URL=https://ei.cnzz.com/stat.htm?id=4478442&r=https%3A%2F%2Fwww.wjx.cn%2Fnewwjx%2Fdesign%2Feditquestionnaire.aspx%3Factivity%3D40211802&lg=zh-cn&ntime=1560561510&cnzz_eid=1591451856-1559572098-&showp=1536x864&p=https%3A%2F%2Fwww.wjx.cn%2Fmysojump%2Fquestionnairemng%2Fdesignnew.aspx%3Fversion%3D7%26openType%3Dredesign%26curid%3D40211802%26nqt%3D&ei=%25E5%25B1%258F%25E5%25B9%2595%25E5%25AE%25BD%25E5%25BA%25A6%7Cw1536%7C%7C0%7C&t="
		"%E8%AE%BE%E8%AE%A1%E9%97%AE%E5%8D%B7%20%EF%BC%8D%20%E4%B8%93%E4%B8%9A%E7%9A%84%E5%9C%A8%E7%BA%BF%E9%97%AE%E5%8D%B7%E8%B0%83%E6%9F%A5%E5%B9%B3%E5%8F%B0&umuuid=16b1dd9e27d89-0df50382fd90a6-293e1d4e-144000-16b1dd9e27e2f9&h=1&rnd=1181562370", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("Hm_lvt_21be24c80829bd7a683b2c536fcf520b=1559609769,1560126211,1560566336,1560566589; DOMAIN=www.wjx.cn");

	web_add_cookie("Hm_lpvt_21be24c80829bd7a683b2c536fcf520b=1560566589; DOMAIN=www.wjx.cn");

	lr_think_time(9);

	web_custom_request("designQHandler.ashx", 
		"URL=https://www.wjx.cn/Handler/designQHandler.ashx?submitType=redesign&curID=40211802&userguid=&validate_text=ys&t=1560566601514&sstate=pub&totalq=6&initqc=6&eod=true&pub=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"Body=surveydata="
		"%E5%BD%93%E4%BB%A3%E5%A4%A7%E5%AD%A6%E7%94%9F%E8%84%B1%E5%8F%91%E6%83%85%E5%86%B5%E8%B0%83%E6%9F%A5132%C2%A7%C2%A70%C2%A70%C2%A70%C2%A7false%C2%A7%C2%A7%C2%A77%C2%A7false%C2%A7false%C2%A7false%C2%A7false%C2%A7false%C2%A7false%C2%A4page%C2%A71%C2%A7%C2%A7undefined%C2%A7%C2%A7%C2%A7%C2%A4check%C2%A71%C2%A7new%20title%E3%80%92%E3%80%92%E3%80%92%E3%80%92false%C2%A70%C2%A71%E3%80%92false%C2%A7false%C2%A7false%C2%A70%C2%A7true%2C%2C%C2%A7%C2%A7%C2%A70%C2%A7%C2%A7%C2%A7%E9%80%89%E9%A1%B94%E3%80%92false%E"
		"3%80%921%E3%80%920%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A7%E9%80%89%E9%A1%B95%E3%80%92false%E3%80%922%E3%80%920%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A4radio%C2%A72%C2%A7new%20title%E3%80%92%E3%80%92%E3%80%92%E3%80%92false%C2%A70%C2%A71%E3%80%92false%C2%A7false%C2%A7false%C2%A70%C2%A7true%C2%A7%C2%A7%C2%A70%C2%A7%C2%A7%C2%A7%E6%96%B0%E7%9A%84%E9%80%89%E9%A1%B9%E3%80%92false%E3%80%921%E3%80%920%E3%80%92true%E3%80%92false%E3%80%92%"
		"E3%80%92false%E3%80%92%E3%80%92%C2%A7%E9%80%89%E9%A1%B93%E3%80%92false%E3%80%922%E3%80%920%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A4gapfill%C2%A73%C2%A7%E5%A7%93%E5%90%8D%EF%BC%9A_________%26nbsp%3B%26nbsp%3B%26nbsp%3B%26nbsp%3B%E5%B9%B4%E9%BE%84%EF%BC%9A___%E5%B2%81%3Cbr%3E%E7%94%B5%E8%AF%9D%EF%BC%9A____________%E3%80%92%E3%80%92%C2%A7undefined%C2%A7true%C2%A73%C2%A7%C2%A7false%C2%A70%C2%A7%2C%2C%2C%2C%E3%80%92%2C%2C%2C%2C%E3%80%92%2C%2C%2C%2C%C2%A7%C2%A4radio%C2%"
		"A74%C2%A7%E6%A0%87%E9%A2%98%E3%80%92%E3%80%92%E3%80%92%E3%80%92false%C2%A70%C2%A71%E3%80%92false%C2%A7true%C2%A7false%C2%A70%C2%A7true%C2%A7ceping%E3%80%92false%E3%80%92%C2%A7%C2%A70%C2%A7%C2%A7%C2%A7%E9%80%89%E9%A1%B96%E3%80%92false%E3%80%921%E3%80%920%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A7%E9%80%89%E9%A1%B97%E3%80%92false%E3%80%922%E3%80%920%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A4matrix%C2%A75%C2%A7%E6%A0%87%E9%A2%98%E3%80%92"
		"%E3%80%92%E3%80%92%E3%80%92false%C2%A7202%C2%A7%E5%A4%96%E8%A7%82%0A%E5%8A%9F%E8%83%BD%E3%80%92%E3%80%92%C2%A7false%C2%A7false%C2%A70%C2%A7true%C2%A7%E3%80%92%E3%80%920%E3%80%92100%C2%A7%C2%A70%C2%A7%C2%A7%C2%A7%E5%BE%88%E4%B8%8D%E6%BB%A1%E6%84%8F%E3%80%92false%E3%80%921%E3%80%920%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A7%E4%B8%8D%E6%BB%A1%E6%84%8F%E3%80%92false%E3%80%922%E3%80%920%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A7%E4%B8%80%"
		"E8%88%AC%E3%80%92false%E3%80%923%E3%80%920%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A7%E6%BB%A1%E6%84%8F%E3%80%92false%E3%80%924%E3%80%920%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A7%E5%BE%88%E6%BB%A1%E6%84%8F%E3%80%92false%E3%80%925%E3%80%920%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A4radio%C2%A76%C2%A7%E6%82%A8%E5%90%91%E6%9C%8B%E5%8F%8B%E6%88%96%E5%90%8C%E4%BA%8B%E6%8E%A8%E8%8D%90%E6%88%91%E4%BB%AC%E7%9"
		"A%84%E5%8F%AF%E8%83%BD%E6%80%A7%E6%9C%89%E5%A4%9A%E5%A4%A7%EF%BC%9F%E3%80%92%E3%80%92%E3%80%92%E3%80%92false%C2%A76%C2%A71%E3%80%92false%C2%A7true%C2%A7false%C2%A70%C2%A7true%C2%A7%C2%A7%C2%A70%C2%A7%C2%A7%C2%A7%E4%B8%8D%E5%8F%AF%E8%83%BD%E3%80%92false%E3%80%920%E3%80%920%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A71%E3%80%92false%E3%80%921%E3%80%921%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A72%E3%80%92false%E3%80%922%E3%80%922%E3%80%92f"
		"alse%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A73%E3%80%92false%E3%80%923%E3%80%923%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A74%E3%80%92false%E3%80%924%E3%80%924%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A75%E3%80%92false%E3%80%925%E3%80%925%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A76%E3%80%92false%E3%80%926%E3%80%926%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2"
		"%A77%E3%80%92false%E3%80%927%E3%80%927%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A78%E3%80%92false%E3%80%928%E3%80%928%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A79%E3%80%92false%E3%80%929%E3%80%929%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92%C2%A7%E6%9E%81%E6%9C%89%E5%8F%AF%E8%83%BD%E3%80%92false%E3%80%9210%E3%80%9210%E3%80%92false%E3%80%92false%E3%80%92%E3%80%92false%E3%80%92%E3%80%92", 
		LAST);

	web_url("designstart.aspx", 
		"URL=https://www.wjx.cn/wjx/design/designstart.aspx?activity=40211802", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("designqfinish.ashx", 
		"Action=https://www.wjx.cn/Handler/designqfinish.ashx?curID=40211802", 
		"Method=POST", 
		"Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=edit", "Value=true", ENDITEM, 
		EXTRARES, 
		"Url=../Images/newimg/online-exam/edit.png", "Referer=https://www.wjx.cn/wjx/design/designstart.aspx?activity=40211802", ENDITEM, 
		"Url=../Images/newimg/online-exam/guide-pre.png", "Referer=https://www.wjx.cn/wjx/design/designstart.aspx?activity=40211802", ENDITEM, 
		"Url=../Images/newimg/questionnaire.png", "Referer=https://www.wjx.cn/wjx/design/designstart.aspx?activity=40211802", ENDITEM, 
		"Url=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1536x864&vl=745&ep=13172%2C13170&et=3&fl=32.0&ja=1&ln=zh-cn&lo=0&lt=1560566589&rnd=870269072&si=21be24c80829bd7a683b2c536fcf520b&su=https%3A%2F%2Fwww.wjx.cn%2Fnewwjx%2Fdesign%2Feditquestionnaire.aspx%3Factivity%3D40211802&v=1.2.51&lv=3&sn=47169", "Referer=https://www.wjx.cn/mysojump/questionnairemng/designnew.aspx?version=7&openType=redesign&curid=40211802&nqt=", ENDITEM, 
		LAST);

	return 0;
}