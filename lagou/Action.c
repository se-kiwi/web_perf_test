Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("myresume.html", 
		"URL=https://www.lagou.com/resume/myresume.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("HMACCOUNT=0D48116799755DC6; DOMAIN=hm.baidu.com");

	web_add_cookie("BAIDUID=E456C59E5436F4192D328D34EB5580A6:FG=1; DOMAIN=hm.baidu.com");

	web_add_cookie("BIDUPSID=E456C59E5436F4192D328D34EB5580A6; DOMAIN=hm.baidu.com");

	web_add_cookie("PSTM=1559573735; DOMAIN=hm.baidu.com");

	web_add_cookie("sensorsdata2015jssdkcross="
		"%7B%22distinct_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22%24device_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22props%22%3A%7B%22%24latest_traffic_source_type%22%3A%22%E7%9B%B4%E6%8E%A5%E6%B5%81%E9%87%8F%22%2C%22%24latest_referrer%22%3A%22%22%2C%22%24latest_referrer_host%22%3A%22%22%2C%22%24latest_search_keyword%22%3A%22%E6%9C%AA%E5%8F%96%E5%88%B0%E5%80%BC_%E7%9B%B4%E6%8E%A5%E6%89%93%E5%BC%80%22%7D%7D; DOMAIN="
		"passport.lagou.com");

	web_add_cookie("sajssdk_2015_cross_new_user=1; DOMAIN=passport.lagou.com");

	web_add_cookie("_ga=GA1.2.1782348110.1560570394; DOMAIN=passport.lagou.com");

	web_add_cookie("_gid=GA1.2.2119366934.1560570395; DOMAIN=passport.lagou.com");

	web_add_cookie("Hm_lvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570397; DOMAIN=passport.lagou.com");

	web_add_cookie("Hm_lpvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570397; DOMAIN=passport.lagou.com");

	web_add_cookie("_ga=GA1.3.1782348110.1560570394; DOMAIN=passport.lagou.com");

	web_add_cookie("_gat=1; DOMAIN=passport.lagou.com");

	web_add_header("X-Anit-Forge-Code",
		"34061307");

	web_add_header("X-Anit-Forge-Token",
		"90689a8f-fe27-458b-a704-6af5f9000d87");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getPhoneCountryCode.json",
		"URL=https://passport.lagou.com/register/getPhoneCountryCode.json",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851",
		"Snapshot=t2.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=https://www.lgstatic.com/passport/static/pc/modules/common/img/icon-sina_e161002.png", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/passport/static/pc/modules/common/img/icon-arrow-right_ea91505.png", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/passport/static/common/static/img/wx-login_c936a5c.svg", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/passport/static/common/static/img/qrcode-normal_bb3ab97.svg", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/passport/static/pc/modules/common/img/logo_e420e46.png", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/passport/static/pc/modules/common/img/icon-baidu_d1ad2b6.png", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/passport/static/pc/modules/common/img/icon-wechat_823d4eb.png", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/passport/static/pc/modules/common/img/icon-tencent_c85c20a.png", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/passport/static/pc/modules/error-pop/img/overlay_c2e5558.png", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://a.lagou.com/js/a.js", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://img.lagou.com/yun-main/static/common/static/sensorsSDK/1.8.10/js/sensorsdata.min.js", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://a.lagou.com/collect?v=1&_v=j31&a=895058163&t=pageview&_s=1&dl=https%3A%2F%2Fpassport.lagou.com%2Flogin%2Flogin.html%3Fsignature%3DA6CF4F334DB79C4DC31D06BBDED03E4B%26service%3Dhttp%25253A%25252F%25252Fwww.lagou.com%25252Fresume%25252Fmyresume.html%26action%3Dlogin%26serviceId%3Dlagou%26ts%3D1560570384851&ul=zh-cn&de=utf-8&dt=%E6%89%BE%E5%B7%A5%E4%BD%9C-%E4%BA%92%E8%81%94%E7%BD%91%E6%8B%9B%E8%81%98%E6%B1%82%E8%81%8C%E7%BD%91-%E6%8B%89%E5%8B%BE%E7%BD%91&sd=24-bit&sr=1920x1080&vp=1920x1082&je=1&fl=32.0%20r0&_u=MEAAAAQAK~&jid=1093432231&cid=1782348110.1560570394&tid=UA-41268416-1&_r=1&z=904190132", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.google-analytics.com/analytics.js", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.google-analytics.com/collect?v=1&_v=j76&a=895058163&t=pageview&_s=1&dl=https%3A%2F%2Fpassport.lagou.com%2Flogin%2Flogin.html%3Fsignature%3DA6CF4F334DB79C4DC31D06BBDED03E4B%26service%3Dhttp%25253A%25252F%25252Fwww.lagou.com%25252Fresume%25252Fmyresume.html%26action%3Dlogin%26serviceId%3Dlagou%26ts%3D1560570384851&ul=zh-cn&de=utf-8&dt=%E6%89%BE%E5%B7%A5%E4%BD%9C-%E4%BA%92%E8%81%94%E7%BD%91%E6%8B%9B%E8%81%98%E6%B1%82%E8%81%8C%E7%BD%91-%E6%8B%89%E5%8B%BE%E7%BD%91&sd=24-bit&sr=1920x1080&vp=1920x1082&je=1&fl=32.0%20r0&_u=ICDAgEQAB~&jid=&gjid=&cid=1782348110.1560570394&tid=UA-41268416-1&_gid=2119366934.1560570395&z=491761592", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/passport/static/common/static/img/info_03c90e8.png", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://hm.baidu.com/hm.js?4233e74dff0ae5bd0a3d81c6ccf756e6", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://api.geetest.com/gettype_deepknow.php?gt=66442f2f720bfc86799932d8ad2eb6c7&callback=geetest_1560570397047", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1920x1080&vl=1082&et=0&fl=32.0&ja=1&ln=zh-cn&lo=0&rnd=2080622303&si=4233e74dff0ae5bd0a3d81c6ccf756e6&v=1.2.51&lv=1&sn=50977&ct=!!&tt=%E6%89%BE%E5%B7%A5%E4%BD%9C-%E4%BA%92%E8%81%94%E7%BD%91%E6%8B%9B%E8%81%98%E6%B1%82%E8%81%8C%E7%BD%91-%E6%8B%89%E5%8B%BE%E7%BD%91", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://static.geetest.com/static/js/sense.1.2.3.js", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/passport/static/pc/modules/error-pop/img/loading_e6611f8.gif", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/passport/static/pc/modules/error-pop/img/loading_background_acf427e.png", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/passport/static/pc/modules/error-pop/img/controls_74ddda3.png", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/passport/static/pc/modules/common/img/info_03c90e8.png", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=../upload/edm/image/oss.gif?1560570397929", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		LAST);

	web_add_cookie("sensorsdata2015jssdkcross="
		"%7B%22distinct_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22%24device_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22props%22%3A%7B%22%24latest_traffic_source_type%22%3A%22%E7%9B%B4%E6%8E%A5%E6%B5%81%E9%87%8F%22%2C%22%24latest_referrer%22%3A%22%22%2C%22%24latest_referrer_host%22%3A%22%22%2C%22%24latest_search_keyword%22%3A%22%E6%9C%AA%E5%8F%96%E5%88%B0%E5%80%BC_%E7%9B%B4%E6%8E%A5%E6%89%93%E5%BC%80%22%7D%7D; DOMAIN=a.lagou.com");

	web_add_cookie("sajssdk_2015_cross_new_user=1; DOMAIN=a.lagou.com");

	web_add_cookie("_ga=GA1.2.1782348110.1560570394; DOMAIN=a.lagou.com");

	web_add_cookie("_gid=GA1.2.2119366934.1560570395; DOMAIN=a.lagou.com");

	web_add_cookie("Hm_lvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570397; DOMAIN=a.lagou.com");

	web_add_cookie("Hm_lpvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570397; DOMAIN=a.lagou.com");

	web_custom_request("oss.html",
		"URL=https://passport.lagou.com/upload/ltm/oss.html?u=/login/login.html&q=0&n=3&d=3536&l=4850&dns=0&p=8387&pi=1046&qn=30752&t=1560570398975",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851",
		"Snapshot=t3.inf",
		"Mode=HTML",
		"EncType=application/json;charset=utf-8",
		EXTRARES,
		"URL=https://deepknow.egoid.me/timeStamp?t=1560570398124&callback=geetest_1560570398959", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://a.lagou.com/track?v=1&t=input&dl=https%3A%2F%2Fpassport.lagou.com%2Flogin%2Flogin.html%3Fsignature%3DA6CF4F334DB79C4DC31D06BBDED03E4B%26service%3Dhttp%25253A%25252F%25252Fwww.lagou.com%25252Fresume%25252Fmyresume.html%26action%3Dlogin%26serviceId%3Dlagou%26ts%3D1560570384851&dr=&dt=鎵惧伐浣?浜掕仈缃戞嫑鑱樻眰鑱岀綉-鎷夊嬀缃?aid=1j90_idnull_0_idnull_4396&intrack=TG-TRACK-CODE=undefined;%20path=/", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		LAST);

	web_add_header("Origin", 
		"https://passport.lagou.com");

	web_custom_request("gt_judgement",
		"URL=https://api.geetest.com/gt_judgement?pt=0&gt=66442f2f720bfc86799932d8ad2eb6c7",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/javascript",
		"Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851",
		"Snapshot=t4.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=utf-8",
		"Body=)kmR25LDl28edmhDey3Gwglh9fVa8NDh0OFCRUjaQg4xqNMHf1JEYE)uxWJFgwqzPQMS(cKLQ)3TVDjHqMd8nMSC9Tz1ac70gHDPlGlvOoNgtgVMTp06Azht)o5jaGzaH7UVZ2HusYhQhGJsD4oXX1HJr5xJJ3E1RZ8r1MEfTPoviJD7F5bK6wlv9EmkSqImgSf27oW9(s(8l7Xg2rXZC(oPSmJIZmUfvxmqwRZ7opLH)j64EnU4yR9KEwkBp6O4AVdSiIqXcw4iYgfUC0iCbsW07CFZE1LRTTpPoNUaQnEUg)Xf0FdsVY3jpQLt)kafa1guMjXaDa85g2gKSBWeB0gZqCaBI09PtTMpcOfWuhjUNZNDRwAivhRlnE)bvFoZ5q(MQpDTveGutksTkt1HDy7YmRHNiNzgKYPbS1LKxaOvi3aJw(CvGUcnG1G3d63r(wGUlfECdySSLX8H5tttRFJM5xuTquXyUSsIHZ6VuDH6ZgEepUY09ORQYWnjL5UcJypFnJxuSQDCNHNIlw50aB58IW5QFAyovuPmF48UVy8Hm2oTx1psPKwuHpy2vFqR0qXDjBIDdOT8upCP58r0maZB(sGuqninSfVrKv1KO3)A8zZo7xFfDQ(HYJhXWIbjJr21vhn57oC8qULcFgyHdC4)9EXc)5ivjhIXO)Mlw0vu8lDEwq4y7YNqJ1ui6LynQf(8OEiM89kWKYigSvcpyhWqu8()BVkuxEthwrYOLQRrGMVyI4CYevTUGtP)X3F55DO2WfoYtRRQYKy(sn5f3jxp6QtbhlOa7rWKjY0EPI2vZp)fohiEcWTCTsUeq6jp2u8vd0MtPiNfcM7t81cKq5orCB0a5tpn3ITpPAntG9eHMEVwKmaf(del3O5a5Q(FHVkS8tpsCKFqtzYCp)Crt78LvcZbA12z4nw3mEFp(GZeyoJnSgtojlot3qF7cfv64un0(X5xjcEvlfiyOq5RoZm)Ogze1cxAmPtB(yLyUD8uqZ1WHSFtoUks92"
		")T4L1W2CAOee)tXQ7oEcCLNNsJkOEQYQaNakGKmJJ3h8rVaAog1XozpR3PvEG5AQ5fiknU5JGaDym5jPDZmVBe4QzHeIEooxSrYtrs62mE1rBqLOVVOUKPAB4zgxULe0DV5d7VPXn0eUV9g)yTDHGglp2iMdWUnkBF96Im4bg25R2rnyExaHswAAO6EUXZRIxyv0ScKwlaWQrLGGnptzUK6duEui6xeJKc5MNY73R(t3tewIVfGVZcNeMj89)2ZPEKD)wkBzNrkop(uUUNbn6OU3xI5gcBSZCkH)NW6ZZOTcmUGj56T2(RgZzpmQETOdLMiaYkqtovSKZU9OvDfHMQ296jWk6ZCDx6FrN)mHGiDbwjr(b876BGxiY4VGJgY1(EpmFPr8P2Qg4TPQj4G3iYVhnrgC3fJg9ATyOGpiBsZ6eQAQVeblfo)tZZmOD4H(Tb8YUiuA6KwuI9Dz1rbDR1VzWQCsYvAoj6bdQBepFMaR)IXlghRLVfZp9Je2HoaGf1gphuo0tjm(UBIWdYGE1b)teRF(ik48XnxboZsO9AkcfqTmSTomGxuo3FUZvDjFdKteBG0g416sIokUXBOIMb01iBT0tHoru2jkw0FWCIS2CnGI)ouY4mZ8a)y28JDBXUxpoGcJ5YONyJ03jFqMuuMehIYM6EZ8EmAMLNunavLj7Y6)oMWAcQ116aicAGEWfNY)Xq9EW8)XcJgKBWn1E7mvNT60))MIa1yur2KtTA7ifuY9EvX(bHShEYYDJPClBh3ES4KXjnT10N5A1Wsm1N8p2XOtjGnicmzzKvMmttmFrhXPLzCG1huNkuRIRAK3CIymC)upmo0UKIHMSftDTQPRiRuB1UEAon4yZl509x12wCmcyancqlPkOKI2MxBbyutndk6Hlr7INbZBzCrbxzvnodcsmjtE5JX1SvqfD(83leJ25AUJb65eKOniRTTEKl2cqmG5597sHAQhkOAX6cm075W6dLjLrR78fmiA90)TRRsjWM(ADsonZ0MgXT"
		"4AVK8pZb5wQj4c6fDBEKsgZF0d09A)RguMHH1OQnMxM2wGBNxQt2W39L2yWaLMERZPmDl0S0Od5vAzmOqk3c7FgAaLh3BK4lV2ofQ0iKpFQL7zaE(wVFFv7vdkqKJl8ox0QaB7g4gWPwXUpOk)21kGg0ZRFhu0sdPdjFuE6gV058JHkM551xt8Eo9GDdVV0vAnw4uCY8IQPFLC9qRec5WCHx7aQLSSkz5z5ctgaspo(QIi3lZthwShdSBHoEtUsbmlUeVUfTatlVlCYFWsKcv(rCFOe9lG6yWIL5LYjHxufi2CDanizOJHQ5081vA(RLlHn7O10TaXV)a4ryWe2Bw4o2x)IxZtJSu471oEZBCMmdqTAEQACxdzZJM7oBnYVzLLZwoh(rZ6jNCKVmCdldftEc59GGXkVX2xIHw2hV4h)M0owjgAIPvz0hauSB9jwi09qTjxFFAX6DIcExXg4yfzGZi)quh)84MrpAdperXGPT8Yz27iPhejj8h0PvorVWa09BLeeSqXCC(MGOb)7BqNRAsyyhCohVOnn2q)sxi2xjG3Qnbps9PTlc9wpUlByClrPgEI(QFMuMqPxKyNPM(JzzHNU08BTfVtGOv(8dyxa8PFN(eE4C7hPMeGY0WYjwZukBogxWZHttS3JkYs)4pMsM9)ZRnssTtJda5XzBzEpN76H2TPxo(wUPH2rO98sVSQlSJclQnGwQf1SpfTIth6W3ZgoXCWrbXy5d)NxlWIxuDNFKgfAYXiZiSXYC)PVQmzGpY9hP45hr8i6Vgzo2wbmYclpmdJdL4IX5fuKyFUSVPT6Jy1DVyqTMY6LXh6(qKZBkzIi0IRrKn(UfhC3qLz2lSOkSEetZSs6R7lZsiloxy2dKbmqshSt9EFzOdB68DufPgEF613UvLunv7lIKLvYORgsobe80phv8g6aihdBHpmgBJaUCS3bInvnA8vuL(wDUlhmHA5CX2skEogoebeFhkWXIS0VJrZIYiVz86FqZW1Is768ssqBuKYRYrB"
		"3l1yNCD89ic(FpYHGHZCIsCgXJ8vMY3KabwX(zzAyd9u65xTKpqXJps1g1pyK1TXIyZXg2U6pYW(nSYJ()tJTkGJ18UBNG7AyYDu(pB1BlWOp(EnRkY12ir6RhMCJnp8wgazLLVWX(hslJhoB3hEmRVRYPRUX)QLAukFJA04qwZ95DBUmvYrLflRtDnOTRPwxQv4tSPhRoe)qBNWbjSCoGwKUsfpaJQfbowrqqVyRVv942GBiqGXuFjQNbymRq0jDywWTZUMgohHw3U99KaHkL44Jne9B2PDjBVcTz9Tem4OAYIgmkliNhMdxTIuVOrb72OuNChRJE4oIJehmem64NSQAteGZk04o70tlV9kc06LQiVmGZTQ9ll157hIaL9DFaUElzHkNx126587f0bcc7b528d22138867eb98af83935e44d08469e1a2324c2fa3012a97bcb74a40cf96a5af6c999a30babbec5e1348115934ba852e2117de81521b1b058735cec62386085ee463bd55e8d543b0ac75562c428ce19b4d7a481a057b1ee8099ba2fff9bc4b5fe46bd1deda831d8c046a888ae381cf90710b669c56560de81",
		LAST);

	web_add_cookie("TG-TRACK-CODE=undefined; DOMAIN=passport.lagou.com");

	web_add_header("X-Anit-Forge-Code",
		"34061307");

	web_add_header("X-Anit-Forge-Token",
		"90689a8f-fe27-458b-a704-6af5f9000d87");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("login.json",
		"Action=https://passport.lagou.com/login/login.json",
		"Method=POST",
		"RecContentType=application/json",
		"Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851",
		"Snapshot=t5.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=isValidate", "Value=true", ENDITEM,
		"Name=username", "Value=0014405363300", ENDITEM,
		"Name=password", "Value=b0091360aa7b95fd0e9bf1a0890b9411", ENDITEM,
		"Name=request_form_verifyCode", "Value=", ENDITEM,
		"Name=submit", "Value=", ENDITEM,
		"Name=challenge", "Value=850629c6ab6a9c50b18ae8017e4dfbb5", ENDITEM,
		LAST);

	web_add_cookie("sensorsdata2015jssdkcross="
		"%7B%22distinct_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22%24device_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22props%22%3A%7B%22%24latest_traffic_source_type%22%3A%22%E7%9B%B4%E6%8E%A5%E6%B5%81%E9%87%8F%22%2C%22%24latest_referrer%22%3A%22%22%2C%22%24latest_referrer_host%22%3A%22%22%2C%22%24latest_search_keyword%22%3A%22%E6%9C%AA%E5%8F%96%E5%88%B0%E5%80%BC_%E7%9B%B4%E6%8E%A5%E6%89%93%E5%BC%80%22%7D%7D; DOMAIN=www.lagou.com");

	web_add_cookie("sajssdk_2015_cross_new_user=1; DOMAIN=www.lagou.com");

	web_add_cookie("_ga=GA1.2.1782348110.1560570394; DOMAIN=www.lagou.com");

	web_add_cookie("_gid=GA1.2.2119366934.1560570395; DOMAIN=www.lagou.com");

	web_add_cookie("Hm_lvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570397; DOMAIN=www.lagou.com");

	web_add_cookie("Hm_lpvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570397; DOMAIN=www.lagou.com");

	web_add_cookie("_gat=1; DOMAIN=a.lagou.com");

	web_add_cookie("Hm_lpvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570431; DOMAIN=www.lagou.com");

	web_add_cookie("LGRID=20190615114714-4376dc4c-8f20-11e9-a37f-5254005c3644; DOMAIN=a.lagou.com");

/*Correlation comment - Do not change!  Original value='3301a1c8-7976-45dd-9e36-25362ea16c96' Name ='CorrelationParameter_2' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_2",
		"RegExp==\\ '(.*?)';\\\n\\ \\ \\ \\ window\\.X_Anti_Forge_Code\\ ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/myresume.html*",
		LAST);

/*Correlation comment - Do not change!  Original value='44321610' Name ='CorrelationParameter_3' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_3",
		"RegExp==\\ '(.*?)';\\\n</script",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/myresume.html*",
		LAST);

	web_url("grant.html",
		"URL=https://passport.lagou.com/grantServiceTicket/grant.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t6.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=https://www.lgstatic.com/www/static/mycenter/modules/common/lg-www-resume/fonts/lg-www-resume_cb684db.eot?tk8sz4", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/common/msgPopup_f0e2385.js", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1920x1080&vl=1082&ep=27286%2C21551&et=3&fl=32.0&ja=1&ln=zh-cn&lo=0&rnd=1466658291&si=4233e74dff0ae5bd0a3d81c6ccf756e6&v=1.2.51&lv=1&sn=50977", "Referer=https://passport.lagou.com/login/login.html?signature=A6CF4F334DB79C4DC31D06BBDED03E4B&service=http%253A%252F%252Fwww.lagou.com%252Fresume%252Fmyresume.html&action=login&serviceId=lagou&ts=1560570384851", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/footer_c/modules/img/backtop-new_0e4bcbc.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/header_c/modules/img/msg_popup_72c460d.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/header_c/modules/img/sprite_361857f.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/components/jquery-colorbox-custom/img/overlay_c2e5558.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/components/artTemplate/template-helper_69eaf51.js", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter/modules/common/img/icon_jobObj_1c9b4bb.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter/modules/common/img/social_account_a5d472f.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter/modules/common/img/icons_mr_0ef4596.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter/modules/myresume_new/img/sprite_cd72b74.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/footer_c/modules/img/footer_lagou_icon_75f0ebc.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://hm.baidu.com/hm.js?4233e74dff0ae5bd0a3d81c6ccf756e6", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1920x1080&vl=1082&et=0&fl=32.0&ja=1&ln=zh-cn&lo=0&lt=1560570397&rnd=1847794977&si=4233e74dff0ae5bd0a3d81c6ccf756e6&su=https%3A%2F%2Fpassport.lagou.com%2Flogin%2Flogin.html%3Fsignature%3DA6CF4F334DB79C4DC31D06BBDED03E4B%26service%3Dhttp%25253A%25252F%25252Fwww.lagou.com%25252Fresume%25252Fmyresume.html%26action%3Dlogin%26serviceId%3Dlagou%26ts%3D1560570384851&v=1.2.51&lv=2&sn=51011&ct=!!&tt=%E6%88%91%E7%9A%84%E7%AE%80%E5%8E%86-%E6%8B%89%E5%8B%BE%E7%BD%91-%E4%B8%93%E4%B8%9A%E7%9A%84%E4%BA%92%E8%81%94%E7%BD%91%E6%8B%9B%E8%81%98%E5%B9%B3%E5%8F%B0", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter/modules/myresume_new/common/galpop/images/btn-next_a939919.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter/modules/myresume_new/common/galpop/images/btn-prev_a939919.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter/modules/myresume_new/img/photo@2x_defa2c7.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/footer_c/modules/img/sprite_9dd5c92.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter/modules/myresume_new/img/basic-sprite_fa961f7.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://a.lagou.com/collect?v=1&_v=j31&a=802742460&t=pageview&_s=1&dl=https%3A%2F%2Fwww.lagou.com%2Fresume%2Fmyresume.html&dr=https%3A%2F%2Fpassport.lagou.com%2Flogin%2Flogin.html%3Fsignature%3DA6CF4F334DB79C4DC31D06BBDED03E4B%26service%3Dhttp%25253A%25252F%25252Fwww.lagou.com%25252Fresume%25252Fmyresume.html%26action%3Dlogin%26serviceId%3Dlagou%26ts%3D1560570384851&ul=zh-cn&de=utf-8&dt=%E6%88%91%E7%9A%84%E7%AE%80%E5%8E%86-%E6%8B%89%E5%8B%BE%E7%BD%91-%E4%B8%93%E4%B8%9A%E7%9A%84%E4%BA%92%E8%81%94%E7%BD%91%E6%8B%9B%E8%81%98%E5%B9%B3%E5%8F%B0&sd=24-bit&sr=1920x1080&vp=1903x1082&je=1&fl=32.0%20r0&_u=MACAAAQAK~&jid=47848235&cid=1782348110.1560570394&tid=UA-41268416-1&_r=1&z=2029605543", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.google-analytics.com/collect?v=1&_v=j76&a=802742460&t=pageview&_s=1&dl=https%3A%2F%2Fwww.lagou.com%2Fresume%2Fmyresume.html&dr=https%3A%2F%2Fpassport.lagou.com%2Flogin%2Flogin.html%3Fsignature%3DA6CF4F334DB79C4DC31D06BBDED03E4B%26service%3Dhttp%25253A%25252F%25252Fwww.lagou.com%25252Fresume%25252Fmyresume.html%26action%3Dlogin%26serviceId%3Dlagou%26ts%3D1560570384851&ul=zh-cn&de=utf-8&dt=%E6%88%91%E7%9A%84%E7%AE%80%E5%8E%86-%E6%8B%89%E5%8B%BE%E7%BD%91-%E4%B8%93%E4%B8%9A%E7%9A%84%E4%BA%92%E8%81%94%E7%BD%91%E6%8B%9B%E8%81%98%E5%B9%B3%E5%8F%B0&sd=24-bit&sr=1920x1080&vp=1903x1082&je=1&fl=32.0%20r0&_u=ACCAgEQAB~&jid=&gjid=&cid=1782348110.1560570394&tid=UA-41268416-1&_gid=2119366934.1560570395&z=1435467083", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://api.geetest.com/gettype_deepknow.php?gt=66442f2f720bfc86799932d8ad2eb6c7&callback=geetest_1560570440527", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter/modules/common/img/delete_3e0bb29.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter/modules/myresume_new/img/pic_arrow@2x_089ced4.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/components/popup/img/lb_error_2e20d03.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://api.geetest.com/gettype_deepknow.php?gt=66442f2f720bfc86799932d8ad2eb6c7&callback=geetest_1560570441116", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/components/jquery-colorbox-custom/img/loading_e6611f8.gif", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://deepknow.egoid.me/timeStamp?t=1560570436960&callback=geetest_1560570445820", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter/modules/common/img/icons_change_f6f00ee.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/components/jquery-colorbox-custom/img/controls_74ddda3.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/components/jquery-colorbox-custom/img/loading_background_acf427e.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter/modules/myresume_new/img/icon_down_normal@2x_442c629.png", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://deepknow.egoid.me/timeStamp?t=1560570437821&callback=geetest_1560570444675", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://www.lagou.com/upload/edm/image/oss.gif?1560570441569", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://a.lagou.com/track?v=1&t=a&dl=https%3A%2F%2Fwww.lagou.com%2Fresume%2Fmyresume.html&dr=https%3A%2F%2Fpassport.lagou.com%2Flogin%2Flogin.html%3Fsignature%3DA6CF4F334DB79C4DC31D06BBDED03E4B%26service%3Dhttp%25253A%25252F%25252Fwww.lagou.com%25252Fresume%25252Fmyresume.html%26action%3Dlogin%26serviceId%3Dlagou%26ts%3D1560570384851&dt=鎴戠殑绠€鍘?鎷夊嬀缃?涓撲笟鐨勪簰鑱旂綉鎷涜仒骞冲彴&aid=5900_idnull_0_idnull_4582&intrack=index_favorite", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		"URL=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1920x1080&vl=1082&ep=22994%2C22994&et=3&fl=32.0&ja=1&ln=zh-cn&lo=0&lt=1560570397&rnd=1307914794&si=4233e74dff0ae5bd0a3d81c6ccf756e6&su=https%3A%2F%2Fpassport.lagou.com%2Flogin%2Flogin.html%3Fsignature%3DA6CF4F334DB79C4DC31D06BBDED03E4B%26service%3Dhttp%25253A%25252F%25252Fwww.lagou.com%25252Fresume%25252Fmyresume.html%26action%3Dlogin%26serviceId%3Dlagou%26ts%3D1560570384851&v=1.2.51&lv=2&sn=51011", "Referer=https://www.lagou.com/resume/myresume.html", ENDITEM,
		LAST);

	web_url("getPhoneCountryCode.json_2", 
		"URL=https://passport.lagou.com/register/getPhoneCountryCode.json?jsoncallback=jQuery111307486207167744017_1560570429134&_=1560570429135", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.lagou.com/resume/myresume.html", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_gat=1; DOMAIN=www.lagou.com");

	web_url("wafcheck.json", 
		"URL=https://www.lagou.com/wafcheck.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.lagou.com/resume/myresume.html", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("X_HTTP_TOKEN=3a94c56efdc0436903407506519e58680e74b17c8d; DOMAIN=www.lagou.com");

	web_add_header("X-Anit-Forge-Code",
		"{CorrelationParameter_3}");

	web_add_header("X-Anit-Forge-Token",
		"{CorrelationParameter_2}");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("newMessageList.json", 
		"URL=https://www.lagou.com/message/newMessageList.json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.lagou.com/resume/myresume.html", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("ajax-loader.gif", 
		"URL=https://www.lgstatic.com/www/static/pkg/mycenter/page/myresume/common/images/ajax-loader.gif", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.lagou.com/resume/myresume.html", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getStyle.json", 
		"URL=https://passport.lagou.com/verify/getStyle.json?jsoncallback=jQuery111307486207167744017_1560570429132&_=1560570429133", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.lagou.com/resume/myresume.html", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"accept, x-l-req-header");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_add_auto_header("Origin", 
		"https://www.lagou.com");

	web_custom_request("style", 
		"URL=https://gate.lagou.com/v1/neirong/account/verifycode/style", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("sensorsdata2015jssdkcross="
		"%7B%22distinct_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22%24device_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22props%22%3A%7B%22%24latest_traffic_source_type%22%3A%22%E7%9B%B4%E6%8E%A5%E6%B5%81%E9%87%8F%22%2C%22%24latest_referrer%22%3A%22%22%2C%22%24latest_referrer_host%22%3A%22%22%2C%22%24latest_search_keyword%22%3A%22%E6%9C%AA%E5%8F%96%E5%88%B0%E5%80%BC_%E7%9B%B4%E6%8E%A5%E6%89%93%E5%BC%80%22%7D%7D; DOMAIN=gate.lagou.com");

	web_add_cookie("sajssdk_2015_cross_new_user=1; DOMAIN=gate.lagou.com");

	web_add_cookie("_ga=GA1.2.1782348110.1560570394; DOMAIN=gate.lagou.com");

	web_add_cookie("_gid=GA1.2.2119366934.1560570395; DOMAIN=gate.lagou.com");

	web_add_cookie("Hm_lvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570397; DOMAIN=gate.lagou.com");

	web_add_cookie("Hm_lpvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570431; DOMAIN=gate.lagou.com");

	web_add_cookie("_gat=1; DOMAIN=gate.lagou.com");

	web_add_cookie("X_HTTP_TOKEN=3a94c56efdc0436903407506519e58680e74b17c8d; DOMAIN=gate.lagou.com");

	web_add_header("X-L-REQ-HEADER", 
		"{deviceType: 1}");

	web_url("style_2", 
		"URL=https://gate.lagou.com/v1/neirong/account/verifycode/style", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.lagou.com/resume/myresume.html", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"accept, x-l-req-header");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_custom_request("token", 
		"URL=https://gate.lagou.com/v1/neirong/account/token", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-L-REQ-HEADER", 
		"{deviceType: 1}");

	web_url("token_2", 
		"URL=https://gate.lagou.com/v1/neirong/account/token", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.lagou.com/resume/myresume.html", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("getPhoneCountryCode.json_3", 
		"URL=https://passport.lagou.com/register/getPhoneCountryCode.json?jsoncallback=jQuery111307486207167744017_1560570429136&_=1560570429137", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.lagou.com/resume/myresume.html", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("sensorsdata2015jssdkcross="
		"%7B%22distinct_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22%24device_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22props%22%3A%7B%22%24latest_traffic_source_type%22%3A%22%E7%9B%B4%E6%8E%A5%E6%B5%81%E9%87%8F%22%2C%22%24latest_referrer%22%3A%22%22%2C%22%24latest_referrer_host%22%3A%22%22%2C%22%24latest_search_keyword%22%3A%22%E6%9C%AA%E5%8F%96%E5%88%B0%E5%80%BC_%E7%9B%B4%E6%8E%A5%E6%89%93%E5%BC%80%22%7D%7D; DOMAIN=account.lagou.com");

	web_add_cookie("sajssdk_2015_cross_new_user=1; DOMAIN=account.lagou.com");

	web_add_cookie("_ga=GA1.2.1782348110.1560570394; DOMAIN=account.lagou.com");

	web_add_cookie("_gid=GA1.2.2119366934.1560570395; DOMAIN=account.lagou.com");

	web_add_cookie("Hm_lvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570397; DOMAIN=account.lagou.com");

	web_add_cookie("Hm_lpvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570431; DOMAIN=account.lagou.com");

	web_add_cookie("_gat=1; DOMAIN=account.lagou.com");

	web_add_cookie("X_HTTP_TOKEN=3a94c56efdc0436903407506519e58680e74b17c8d; DOMAIN=account.lagou.com");

	web_url("create", 
		"URL=https://account.lagou.com/vcode/create?from=register&refresh=1560570429351", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.lagou.com/resume/myresume.html", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("controls.png", 
		"URL=https://www.lgstatic.com/static/common/components/jquery-colorbox-custom/img/controls.png", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.lagou.com/resume/myresume.html", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/www/static/common/static/favicon_faed927.ico", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("oss.html_2", 
		"URL=https://www.lagou.com/upload/ltm/oss.html?u=/resume/myresume.html&q=0&n=6&d=6004&l=10991&dns=0&p=16993&pi=2694&qn=69664&t=1560570444263", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.lagou.com/resume/myresume.html", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		LAST);

	web_add_cookie("TG-TRACK-CODE=index_favorite; DOMAIN=www.lagou.com");

	web_add_cookie("Hm_lpvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570431; DOMAIN=a.lagou.com");

	web_add_cookie("X_HTTP_TOKEN=3a94c56efdc0436903407506519e58680e74b17c8d; DOMAIN=a.lagou.com");

	web_add_cookie("Hm_lpvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570459; DOMAIN=a.lagou.com");

	web_add_cookie("X_HTTP_TOKEN=3a94c56efdc0436985407506519e58680e74b17c8d; DOMAIN=a.lagou.com");

	lr_think_time(9);

/*Correlation comment - Do not change!  Original value='ebaac4d0-fd31-41a6-a63c-b3efee24b62d' Name ='CorrelationParameter_4' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_4",
		"RegExp==\\ '(.*?)';\\\n\\ \\ \\ \\ window\\.X_Anti_Forge_Code\\ ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/collections.html*",
		LAST);

/*Correlation comment - Do not change!  Original value='75879515' Name ='CorrelationParameter_5' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_5",
		"RegExp==\\ '(.*?)';\\\n</script",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/collections.html*",
		LAST);

/*Correlation comment - Do not change!  Original value='ZHIWEITOUDIXIANGYAOQINGHANSHOUZANGJIADINGYUELAN_ZHIWEITOUDIXIANGYAOQINGHANSHOUZANGJIADINGYUELAN' Name ='spaceKey' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=spaceKey",
		"RegExp=div\\ key=\"(.*?)\"\\ class",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/collections.html*",
		LAST);

/*Correlation comment - Do not change!  Original value='JIANLITOUDIDANKUANG_JIANLITOUDIDANKUANG' Name ='spaceKey_1' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=spaceKey_1",
		"RegExp=div\\ key=\"(.*?)\"\\ class",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/collections.html*",
		LAST);

	web_url("collections.html",
		"URL=https://www.lagou.com/mycenter/collections.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://www.lagou.com/resume/myresume.html",
		"Snapshot=t20.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=https://www.lgstatic.com/www/static/mycenter-sidenav/modules/common/img/resume_arr_1f2014c.png", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/mycenter-recommend/img/similar_position_triangle_ef2979b.png", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter-sidenav/modules/common/img/noresult_95_d8b37c3.png", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter-sidenav/page/collections/main_b8c222c.js", ENDITEM,
		"URL=https://hm.baidu.com/hm.js?4233e74dff0ae5bd0a3d81c6ccf756e6", ENDITEM,
		"URL=https://a.lagou.com/collect?v=1&_v=j31&a=1630717747&t=pageview&_s=1&dl=https%3A%2F%2Fwww.lagou.com%2Fmycenter%2Fcollections.html&dr=https%3A%2F%2Fwww.lagou.com%2Fresume%2Fmyresume.html&ul=zh-cn&de=utf-8&dt=%E6%88%91%E6%94%B6%E8%97%8F%E7%9A%84%E8%81%8C%E4%BD%8D-%E6%8B%9B%E8%81%98%E6%9C%8D%E5%8A%A1-%E6%8B%89%E5%8B%BE%E7%BD%91-%E4%B8%93%E4%B8%9A%E7%9A%84%E4%BA%92%E8%81%94%E7%BD%91%E6%8B%9B%E8%81%98%E5%B9%B3%E5%8F%B0&sd=24-bit&sr=1920x1080&vp=1903x1082&je=1&fl=32.0%20r0&_u=MACAAAQAK~&jid=&cid=1782348110.1560570394&tid=UA-41268416-1&z=1508420951", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/components/jquery-pager/jquery.pager_95335ca.js", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/components/validate/additional-methods_808547c.js", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/components/jquery-ajaxfileupload/ajaxfileupload_5b9f1c9.js", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/send-resume/img/profile_select_190_313c2de.png", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter-sidenav/modules/common/mycenter-nav-button/img/icons_mr_da12dfe.png", ENDITEM,
		"URL=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1920x1080&vl=1082&ep=22994%2C22994&et=3&fl=32.0&ja=1&ln=zh-cn&lo=0&lt=1560570397&rnd=1307914794&si=4233e74dff0ae5bd0a3d81c6ccf756e6&su=https%3A%2F%2Fpassport.lagou.com%2Flogin%2Flogin.html%3Fsignature%3DA6CF4F334DB79C4DC31D06BBDED03E4B%26service%3Dhttp%25253A%25252F%25252Fwww.lagou.com%25252Fresume%25252Fmyresume.html%26action%3Dlogin%26serviceId%3Dlagou%26ts%3D1560570384851&v=1.2.51&lv=2&sn=51011&u=https%3A%2F%2Fwww.lagou.com%2Fresume%2Fmyresume.html", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/dep/jquery-validation/dist/jquery.validate_3bcc7a5.js", ENDITEM,
		"URL=https://www.google-analytics.com/collect?v=1&_v=j76&a=1630717747&t=pageview&_s=1&dl=https%3A%2F%2Fwww.lagou.com%2Fmycenter%2Fcollections.html&ul=zh-cn&de=utf-8&dt=%E6%88%91%E6%94%B6%E8%97%8F%E7%9A%84%E8%81%8C%E4%BD%8D-%E6%8B%9B%E8%81%98%E6%9C%8D%E5%8A%A1-%E6%8B%89%E5%8B%BE%E7%BD%91-%E4%B8%93%E4%B8%9A%E7%9A%84%E4%BA%92%E8%81%94%E7%BD%91%E6%8B%9B%E8%81%98%E5%B9%B3%E5%8F%B0&sd=24-bit&sr=1920x1080&vp=1903x1082&je=1&fl=32.0%20r0&_u=ACCAgEQAB~&jid=&gjid=&cid=1782348110.1560570394&tid=UA-41268416-1&_gid=2119366934.1560570395&z=2090952451", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter-sidenav/modules/collections/main_d02a8c4.js", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/mycenter-recommend/main_402bcac.js", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/plat/addIcon_80716d2.js", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/send-resume/main_ba43de9.js", ENDITEM,
		"URL=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1920x1080&vl=1082&et=0&fl=32.0&ja=1&ln=zh-cn&lo=0&lt=1560570397&rnd=43649893&si=4233e74dff0ae5bd0a3d81c6ccf756e6&su=https%3A%2F%2Fwww.lagou.com%2Fresume%2Fmyresume.html&v=1.2.51&lv=2&sn=51039&ct=!!&tt=%E6%88%91%E6%94%B6%E8%97%8F%E7%9A%84%E8%81%8C%E4%BD%8D-%E6%8B%9B%E8%81%98%E6%9C%8D%E5%8A%A1-%E6%8B%89%E5%8B%BE%E7%BD%91-%E4%B8%93%E4%B8%9A%E7%9A%84%E4%BA%92%E8%81%94%E7%BD%91%E6%8B%9B%E8%81%98%E5%B9%B3%E5%8F%B0", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/static/js/plat_tj_resume_log_amd_1b370ac.js", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/common/validate-custom_46e9382.js", ENDITEM,
		"URL=https://a.lagou.com/json?lt=trackshow&a=gp00_0001_0_1232147_4411,gp00_0002_0_3554098_8030,gp00_0003_0_5941470_1241,gp00_0004_0_5713884_1780,gp00_0005_0_5577817_6033&t=p&v=0&dl=https%3A%2F%2Fwww.lagou.com%2Fmycenter%2Fcollections.html&dr=https%3A%2F%2Fwww.lagou.com&time=1560570458968&abt=fine_sort|1,fine_sort|1,fine_sort|1,fine_sort|1,fine_sort|1", ENDITEM,
		"URL=https://api.geetest.com/gettype_deepknow.php?gt=66442f2f720bfc86799932d8ad2eb6c7&callback=geetest_1560570467821", ENDITEM,
		"URL=https://a.lagou.com/show?t=like&dl=https%3A%2F%2Fwww.lagou.com%2Fmycenter%2Fcollections.html&jids=1232147,3554098,5941470,5713884,5577817&time=1560570458969", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/send-resume/img/lb_error_5b0bf87.png", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/send-resume/img/error_0b4953b.png", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/common/widgets/mycenter-recommend/img/arr_top_db7eeba.png", ENDITEM,
		"URL=https://www.lgstatic.com/www/static/mycenter-sidenav/modules/common/img/error_727fcc2.png", ENDITEM,
		"URL=https://deepknow.egoid.me/timeStamp?t=1560570459401&callback=geetest_1560570462985", ENDITEM,
		"URL=../upload/edm/image/oss.gif?1560570463526", ENDITEM,
		LAST);

	web_add_cookie("LGRID=20190615114714-4376dc4c-8f20-11e9-a37f-5254005c3644; DOMAIN=passport.lagou.com");

	web_add_cookie("Hm_lpvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570431; DOMAIN=passport.lagou.com");

	web_add_cookie("X_HTTP_TOKEN=3a94c56efdc0436903407506519e58680e74b17c8d; DOMAIN=passport.lagou.com");

	web_url("getStyle.json_2", 
		"URL=https://passport.lagou.com/verify/getStyle.json?jsoncallback=jQuery1113033311535484799615_1560570453805&_=1560570453806", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.lagou.com/mycenter/collections.html", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getPhoneCountryCode.json_4", 
		"URL=https://passport.lagou.com/register/getPhoneCountryCode.json?jsoncallback=jQuery1113033311535484799615_1560570453807&_=1560570453808", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.lagou.com/mycenter/collections.html", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("LGRID=20190615114714-4376dc4c-8f20-11e9-a37f-5254005c3644; DOMAIN=www.lagou.com");

	web_add_header("X-Anit-Forge-Code",
		"{CorrelationParameter_5}");

	web_add_header("X-Anit-Forge-Token",
		"{CorrelationParameter_4}");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("newMessageList.json_2", 
		"URL=https://www.lagou.com/message/newMessageList.json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.lagou.com/mycenter/collections.html", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("wafcheck.json_2", 
		"URL=https://www.lagou.com/wafcheck.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.lagou.com/mycenter/collections.html", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("Hm_lpvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570459; DOMAIN=www.lagou.com");

	web_add_cookie("X_HTTP_TOKEN=3a94c56efdc0436985407506519e58680e74b17c8d; DOMAIN=www.lagou.com");

	web_add_header("X-Anit-Forge-Code",
		"{CorrelationParameter_5}");

	web_add_header("X-Anit-Forge-Token",
		"{CorrelationParameter_4}");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("showQRCode", 
		"URL=https://www.lagou.com/mycenter/showQRCode", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.lagou.com/mycenter/collections.html", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("sensorsdata2015jssdkcross="
		"%7B%22distinct_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22%24device_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22props%22%3A%7B%22%24latest_traffic_source_type%22%3A%22%E7%9B%B4%E6%8E%A5%E6%B5%81%E9%87%8F%22%2C%22%24latest_referrer%22%3A%22%22%2C%22%24latest_referrer_host%22%3A%22%22%2C%22%24latest_search_keyword%22%3A%22%E6%9C%AA%E5%8F%96%E5%88%B0%E5%80%BC_%E7%9B%B4%E6%8E%A5%E6%89%93%E5%BC%80%22%7D%7D; DOMAIN="
		"ggservice.lagou.com");

	web_add_cookie("sajssdk_2015_cross_new_user=1; DOMAIN=ggservice.lagou.com");

	web_add_cookie("_ga=GA1.2.1782348110.1560570394; DOMAIN=ggservice.lagou.com");

	web_add_cookie("_gid=GA1.2.2119366934.1560570395; DOMAIN=ggservice.lagou.com");

	web_add_cookie("Hm_lvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570397; DOMAIN=ggservice.lagou.com");

	web_add_cookie("Hm_lpvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570459; DOMAIN=ggservice.lagou.com");

	web_add_cookie("_gat=1; DOMAIN=ggservice.lagou.com");

	web_add_cookie("X_HTTP_TOKEN=3a94c56efdc0436985407506519e58680e74b17c8d; DOMAIN=ggservice.lagou.com");

	web_url("data",
		"URL=https://ggservice.lagou.com/promotionSpace/data?callback=jQuery1113033311535484799615_1560570453807&spaceKey={spaceKey}&subsite=%E5%85%A8%E5%9B%BD&_=1560570453809",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.lagou.com/mycenter/collections.html",
		"Snapshot=t26.inf",
		"Mode=HTML",
		LAST);

	web_url("data_2",
		"URL=https://ggservice.lagou.com/promotionSpace/data?callback=jQuery1113033311535484799615_1560570453805&spaceKey={spaceKey_1}&subsite=%E5%85%A8%E5%9B%BD&_=1560570453810",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.lagou.com/mycenter/collections.html",
		"Snapshot=t27.inf",
		"Mode=HTML",
		LAST);

	web_add_cookie("sensorsdata2015jssdkcross="
		"%7B%22distinct_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22%24device_id%22%3A%2216b593e775387-0b89e03e3aa322-293e1d4e-2073600-16b593e7754951%22%2C%22props%22%3A%7B%22%24latest_traffic_source_type%22%3A%22%E7%9B%B4%E6%8E%A5%E6%B5%81%E9%87%8F%22%2C%22%24latest_referrer%22%3A%22%22%2C%22%24latest_referrer_host%22%3A%22%22%2C%22%24latest_search_keyword%22%3A%22%E6%9C%AA%E5%8F%96%E5%88%B0%E5%80%BC_%E7%9B%B4%E6%8E%A5%E6%89%93%E5%BC%80%22%7D%7D; DOMAIN="
		"activity.lagou.com");

	web_add_cookie("sajssdk_2015_cross_new_user=1; DOMAIN=activity.lagou.com");

	web_add_cookie("_ga=GA1.2.1782348110.1560570394; DOMAIN=activity.lagou.com");

	web_add_cookie("_gid=GA1.2.2119366934.1560570395; DOMAIN=activity.lagou.com");

	web_add_cookie("Hm_lvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570397; DOMAIN=activity.lagou.com");

	web_add_cookie("Hm_lpvt_4233e74dff0ae5bd0a3d81c6ccf756e6=1560570459; DOMAIN=activity.lagou.com");

	web_add_cookie("_gat=1; DOMAIN=activity.lagou.com");

	web_add_cookie("X_HTTP_TOKEN=3a94c56efdc0436985407506519e58680e74b17c8d; DOMAIN=activity.lagou.com");

	web_url("getIcon.json", 
		"URL=https://activity.lagou.com/activityapi/icon/getIcon.json?callback=jQuery1113033311535484799615_1560570453811&companyIds=&markLocation=PPF&_=1560570453812", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.lagou.com/mycenter/collections.html", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("oss.html_3", 
		"URL=https://www.lagou.com/upload/ltm/oss.html?u=/mycenter/collections.html&q=129&n=131&d=5177&l=4802&dns=0&p=10108&pi=43&qn=3207&t=1560570463569", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.lagou.com/mycenter/collections.html", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		LAST);

	return 0;
}