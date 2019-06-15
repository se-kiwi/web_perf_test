Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("laravel_session=eyJpdiI6ImhaNFQ1ODRudGE2VlgwdnFLZk5Lc3c9PSIsInZhbHVlIjoicW1ld2hKUnlQVUtJVWdEMnRvdThQMVhCeVgyR3NOWFFpaDBUUHdoRHNBeTFWTWplZEhrdmtibU5SRnJoaWJscGVGZFl0RDlBVkc5VnBDZVwvR3QwQ2N3PT0iLCJtYWMiOiJmNDE0ZGNhNGE5MTdlMjgzYmYxNjdmZGY5Nzk3NzE4NGU4Yjk5MWIwYTA1NDc0MThhOGNiNGM2MTNhMjBhNDJjIn0%3D; DOMAIN=api.infinitynewtab.com");

	web_url("se.php", 
		"URL=https://api.infinitynewtab.com/se.php?t=t1dd5eu7nmei8b21l8etdmd7t6c9", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/collect?_t=1560330313136&t=pageview&v=1&tid=UA-54537742-7&cid=e0a9e774-13d0-46d6-9af8-89a18b270e6e&sr=1536x864&sd=24-bits&ul=zh-CN&dl=chrome-extension%3A%2F%2Fdbfmnekepjoapopniengjbcpnbljalfg%2Fbackground%2Fbackground.html&dp=%2Fbackground%2Fbackground.html&dt=", "Referer=", ENDITEM, 
		LAST);

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

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1/V7HvPe7JodkdSR95hkyaQ-qj12GBumC6IIxw3b9rG4o", 
		LAST);

	web_add_cookie("CONSENT=YES+CN.zh-CN+20170409-18-0; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI4Lj9gY-uMgOqMFU1UgM4dXfi_JN5l-pVZwV8ReSI1_eubhwLZ1gg9mzL4w2-Bd00ss6Dmf3dnVrKUSqbzgi0YwYfUu_H4vkH-IA7XrdcUCj2G7OCh014UfaCGK3drOGZGtGEnJ; DOMAIN=accounts.google.com");

	web_add_cookie("LSOLH=Y3qYFU86cfIXgKtfiCR3q4DrHmL3oxY:25930729:d177; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=doritos|lso|o.console.cloud.google.com|o.mail.google.com|o.myaccount.google.com|o.notifications.google.com|o.smartlock.google.com|s.blogger|s.youtube|wise:eQdVb5zu5D69MTMyIr0Y09eBMn8ujpmlhBcxUxIqhBCYwzzmxj6BgMBID01x0JoXbYltiA.; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=AhaKg7NxZqA8jqMp6; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=A8mmjBW_olhLHMwEA; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=jhZR3FqfTHcZTzUA/AXjkUzbyxG2UsIZ3Z; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=oEXTV83zchwXusMr/AoPKhv0-l0FA5wtJs; DOMAIN=accounts.google.com");

	web_add_cookie("SID=eQdVb0D3GEPtOlyRkToKfvIVl1e2xKiuXfWA5SDuiKwHP5vMF8mDV0eN95OT4ab0G2IG-g.; DOMAIN=accounts.google.com");

	web_add_cookie("GAPS=1:zAKrPWGf2TmtAOTEVnpdyNUqCAlSYNf14BljpKja-ZpeJB6tKKjS6--XIvRo05RxI7a6pgjrnbzT5-44zEw1a9HBzI_xCg:xlhs1EfR8dca7rWs; DOMAIN=accounts.google.com");

	web_add_cookie("NID=185=1IhE6aXLa8saXAZQbg-yImVl-JTFVNP_FrHcSTWH6zdPvEdqyZNdjk-XMKRx9lmDtQksNl0Wx-qDTwcy7AmVUb22cZWuOcUhzq097MZPxn4EQ3ekdXb9GsYyRBG_vjOphvCg5HXXeAgH_2ZytozX8_PdjXmaDp-drU-nzGNWBuODHN4EY5gLFsJaD0mdYNkH_RqzAjNn45-SAepd6AMyE8b3NQoNG3Og--EkCgtodsOLQp7jPt33YanZ14nbAA7AaBlTdAhwzgfx1FgC2JtSbYH3W_LxgupiBRVc_azCOy7KCh_z3ots2FuyTWxfBRHRiHp4; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2019-6-12-8; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AN0-TYu2iXS3HyV7g2PV5T_deHOxUgE5NaUe0vX7URglhg1S-2-0Qa0mkEHmZevHKWKX9tKr4A; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"Body= ", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/collect?_t=1560330313137&t=event&v=1&tid=UA-54537742-7&cid=e0a9e774-13d0-46d6-9af8-89a18b270e6e&sr=1536x864&sd=24-bits&ul=zh-CN&ec=%E7%89%88%E6%9C%AC&ea=7.3.9&dl=chrome-extension%3A%2F%2Fdbfmnekepjoapopniengjbcpnbljalfg%2Fbackground%2Fbackground.html", "Referer=", ENDITEM, 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=74", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("update-time.json", 
		"URL=https://infinity-basic.infinitynewtab.com/basic-api/update-time.json?_=1560330313070", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1/V7HvPe7JodkdSR95hkyaQ-qj12GBumC6IIxw3b9rG4o&scope=https://www.googleapis.com/auth/chromesync", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=1&utmn=1529123026&utmhn=fngmhnnpilhplaeedifhccceomclgfbg&utmcs=UTF-8&utmsr=1536x864&utmsc=24-bit&utmul=zh-cn&utmje=0&utmfl=-&utmhid=582744442&utmr=-&utmp=%2F_generated_background_page.html&utmht=1560330313025&utmac=UA-33054271-5&utmcc=__utma%3D168020214.2045260896.1542347209.1560330185.1560330313.1324%3B%2B__utmz%3D168020214.1542347209.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qAAAEAAAAAAAAAAAAAAAAAAE~", "Referer=", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=8&utmn=1813179904&utmhn=chphlpgkkbolifaimnlloiipkdnihall&utmcs=UTF-8&utmsr=1536x864&utmsc=24-bit&utmul=zh-cn&utmje=0&utmfl=-&utmhid=292195575&utmr=-&utmp=%2F_generated_background_page.html&utmht=1560330313010&utmac=UA-38573374-2&utmcc=__utma%3D140524640.1375607711.1542347206.1560326740.1560329198.863%3B%2B__utmz%3D140524640.1542347206.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qAAAAAAAAAAAAAAAAAAAAAAE~", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("token_3", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1/V7HvPe7JodkdSR95hkyaQ-qj12GBumC6IIxw3b9rG4o&scope=https://www.googleapis.com/auth/userinfo.profile", 
		LAST);

	web_url("userinfo", 
		"URL=https://www.googleapis.com/oauth2/v1/userinfo", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_fbp=fb.1.1551697940844.697615329; DOMAIN=stats.g.doubleclick.net");

	web_add_cookie("IDE=AHWqTUm013TLZSyAZ6EPvjYn5o_p2RWHA5EYlfqapozolBhFK8f3iqCKyVh-suiJ; DOMAIN=stats.g.doubleclick.net");

	web_custom_request("token_4", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1/V7HvPe7JodkdSR95hkyaQ-qj12GBumC6IIxw3b9rG4o&scope=https://www.googleapis.com/auth/firebase.messaging", 
		EXTRARES, 
		"Url=https://image.wjx.com/images/register-login/qq.png", "Referer=https://www.wjx.cn/css/index.css?v=3", ENDITEM, 
		"Url=https://stats.g.doubleclick.net/r/collect?v=1&aip=1&t=dc&_r=3&tid=UA-93290101-2&cid=1508949300.1559633806&jid=232307240&_gid=867776080.1560092489&gjid=639460598&_v=j76&z=2095306766", "Referer=", ENDITEM, 
		"Url=https://image.wjx.com/images/newimg/register-login/bacg.jpg", "Referer=https://www.wjx.cn/css/index.css?v=3", ENDITEM, 
		"Url=https://image.wjx.com/images/register-login/user.png", "Referer=https://www.wjx.cn/css/index.css?v=3", ENDITEM, 
		LAST);

	web_custom_request("issuetoken", 
		"URL=https://oauthaccountmanager.googleapis.com/v1/issuetoken", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"Body=force=false&response_type=token&scope=https://www.googleapis.com/auth/calendar.readonly+https://www.googleapis.com/auth/cast-edu-messaging+https://www.googleapis.com/auth/clouddevices+https://www.googleapis.com/auth/hangouts+https://www.googleapis.com/auth/hangouts.readonly+https://www.googleapis.com/auth/meetings+https://www.googleapis.com/auth/plus.peopleapi.readwrite+https://www.googleapis.com/auth/userinfo.email&client_id="
		"919648714761-55j965o0km033psv3i9qls5mo3qtdrb0.apps.googleusercontent.com&origin=pkedcjkdefgpdelpbcmbmeomcjbeemfm&device_id=922dc529-5255-4d88-9ac4-258f288c6e0d&device_type=chrome&lib_ver=extension", 
		LAST);

	web_custom_request("CHES4QEStwFBUEE5MWJGejNhY09hWWRyN3lJZEZ0VWtxTkhiM1pOcW5sREZ5bXZLQUQyRU1BcUZjd1Z4VV8xZGp5WGxOTHBYemQ5blhqcGQyRFpKTjk3a3ZzVWNKc3RFZVROcFR6M09RN21RYjdJVjQtSHdobUJLU3Z6eHQtYmZ1dkxUdlFHdzlPdDNHeGs4a19VZ0dTako2OTZpT01UTE5GLUpNdDUxanhDVXFpNmJOMVd6cDE4Mno5XzlTNk0a", 
		"URL=https://clients4.google.com/invalidation/android/request/CHES4QEStwFBUEE5MWJGejNhY09hWWRyN3lJZEZ0VWtxTkhiM1pOcW5sREZ5bXZLQUQyRU1BcUZjd1Z4VV8xZGp5WGxOTHBYemQ5blhqcGQyRFpKTjk3a3ZzVWNKc3RFZVROcFR6M09RN21RYjdJVjQtSHdobUJLU3Z6eHQtYmZ1dkxUdlFHdzlPdDNHeGs4a19VZ0dTako2OTZpT01UTE5GLUpNdDUxanhDVXFpNmJOMVd6cDE4Mno5XzlTNk0aACoCCAAyH2NvbS5nb29nbGUuY2hyb21lLmludmFsaWRhdGlvbnM", 
		"Method=POST", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/x-protobuffer", 
		"BodyBinary=\nY\n\\x06\n\\x04\\x08\\x03\\x10\\x02\\x12%\n\\x06\n\\x04\\x08\\x03\\x10\\x01\\x12\\x12\t\\xFB\\x97\\xA9c\\xA6\r\\x80\\x9A\\x11CA3\\xECNt\\xE06\\x1A\\x07\\x08\\x81\\x14\\x10\\x03\\x18\\x01\\x1A\\x18\\x08\\x00\\x12\\x14\\xDA9\\xA3\\xEE^kK\r2U\\xBF\\xEF\\x95`\\x18\\x90\\xAF\\xD8\\x07\t \\xED\\x92\\x96\\xDD\\xA7\\x80\\x03(\\x002\\x0118\\x9F\\x082\\x95\\x01\n\\x90\\x01\n\\x07\\x08\\x03\\x10\\xAC\\xA1\\xCD\t\\x12sMozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko"
		") Chrome/74.0.3729.169 Safari/537.36\\x1A\\x03C++\"\\x0Bchrome-sync \\x01", 
		EXTRARES, 
		"Url=https://image.wjx.com/images/register-login/password.png", "Referer=https://www.wjx.cn/css/index.css?v=3", ENDITEM, 
		LAST);

	web_add_cookie("B=5r5dmfldut0v3&b=3&s=oe; DOMAIN=www.yahoo.com");

	web_add_cookie("GUC=AQEBAQFccq5dUkIgXgSm&s=AQAAABLzY7NH&g=XHFoHw; DOMAIN=www.yahoo.com");

	web_url("WeatherService;woeids=%5B2151849%5D", 
		"URL=https://www.yahoo.com/news/_tdnews/api/resource/WeatherService;woeids=%5B2151849%5D?t=1560330313622", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ2sVeOg6EbN8jLZFh1L0kIy1lIZnqJBQ=", "Referer=", ENDITEM, 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"aapbdbdomjkkjkaonfhkkikfgjllcleb,aeajloomjeoncelkceelhhpkgbcgafek,cfhdojbkjhnklbpkdaibdccddilifddb,chphlpgkkbolifaimnlloiipkdnihall,dbfmnekepjoapopniengjbcpnbljalfg,dgjhfomjieaadpoljlnidmbgkdffpack,eeeningnfkaonkonalpcicgemnnijjhn,efaidnbmnnnibpcajpcglclefindmkaj,ffabmkklhbepgcgfonabamgnfafbdlkn,fngmhnnpilhplaeedifhccceomclgfbg,hflefjhkfeiaignkclmphmokmmbhbhik,hmhgeddbohgjknpmjagkdomcpobmllji,ilmpacenmcgknoogkhpigakpoocpjmpl,jlgkpaicikihijadgifklkbpdajbkhjo,lloccabjgblebdmncjndmiibianflabo,"
		"mcbpblocgmgfnpjjppndjkmgjaogfceg,mgndgikekgjfcpckkfioiadnlibdjbkf,nmmhkkegccagdldgiimedpiccmgmieda");

	web_add_auto_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_auto_header("X-Goog-Update-Updater", 
		"chromecrx-74.0.3729.169");

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=74.0.3729.169&lang=zh-CN&acceptformat=crx2,crx3&x=id%3Dmgndgikekgjfcpckkfioiadnlibdjbkf%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26brand%3DSQJL&x=id%3Daapbdbdomjkkjkaonfhkkikfgjllcleb%26v%3D2.0.7%26installedby%3Dinternal%26uc%26brand%3DSQJL&x=id%3Daeajloomjeoncelkceelhhpkgbcgafek%26v%3D0.1%26installedby%3Dinternal%26uc%26brand%3DSQJL&x="
		"id%3Dcfhdojbkjhnklbpkdaibdccddilifddb%26v%3D3.5.2%26installedby%3Dinternal%26uc%26brand%3DSQJL&x=id%3Dchphlpgkkbolifaimnlloiipkdnihall%26v%3D1.18%26installedby%3Dinternal%26uc%26brand%3DSQJL&x=id%3Ddbfmnekepjoapopniengjbcpnbljalfg%26v%3D7.3.9%26installedby%3Dinternal%26uc%26brand%3DSQJL&x=id%3Ddgjhfomjieaadpoljlnidmbgkdffpack%26v%3D19.6.6.2105%26installedby%3Dinternal%26uc%26brand%3DSQJL&x=id%3Deeeningnfkaonkonalpcicgemnnijjhn%26v%3D0.0.1.3%26installedby%3Dinternal%26uc%26brand%3DSQJL&x="
		"id%3Defaidnbmnnnibpcajpcglclefindmkaj%26v%3D15.1.1.1%26installedby%3Dexternal%26uc%26brand%3DSQJL&x=id%3Dffabmkklhbepgcgfonabamgnfafbdlkn%26v%3D0.3.2%26installedby%3Dinternal%26uc%26brand%3DSQJL&x=id%3Dfngmhnnpilhplaeedifhccceomclgfbg%26v%3D1.5.0%26installedby%3Dinternal%26uc%26brand%3DSQJL&x=id%3Dhflefjhkfeiaignkclmphmokmmbhbhik%26v%3D1.5.21%26installedby%3Dinternal%26uc%26brand%3DSQJL&x=id%3Dhmhgeddbohgjknpmjagkdomcpobmllji%26v%3D2.0.10%26installedby%3Dinternal%26uc%26brand%3DSQJL&x="
		"id%3Dilmpacenmcgknoogkhpigakpoocpjmpl%26v%3D2.6.1%26installedby%3Dinternal%26uc%26brand%3DSQJL&x=id%3Djlgkpaicikihijadgifklkbpdajbkhjo%26v%3D4.4.2%26installedby%3Dinternal%26uc%26brand%3DSQJL&x=id%3Dlloccabjgblebdmncjndmiibianflabo%26v%3D2.4.4%26installedby%3Dinternal%26uc%26brand%3DSQJL&x=id%3Dmcbpblocgmgfnpjjppndjkmgjaogfceg%26v%3D0.98.96%26installedby%3Dinternal%26uc%26brand%3DSQJL&x=id%3Dnmmhkkegccagdldgiimedpiccmgmieda%26v%3D1.0.0.4%26installedby%3Dother%26uc%26brand%3DSQJL", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_url("crx_2", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=74.0.3729.169&lang=zh-CN&acceptformat=crx2,crx3&x=id%3Dpkedcjkdefgpdelpbcmbmeomcjbeemfm%26v%3D7419.311.0.1%26installedby%3Dother%26uc%26brand%3DSQJL", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Goog-Update-Interactivity");

	web_revert_auto_header("X-Goog-Update-Updater");

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
		"Name=LoginButton", "Value=�\xBB �\x95", ENDITEM, 
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

	web_url("stat.htm", 
		"URL=https://gzs20.cnzz.com/stat.htm?id=4478442&r=https%3A%2F%2Fwww.wjx.cn%2FLogin.aspx&lg=zh-cn&ntime=none&cnzz_eid=2027245396-1560329066-https%3A%2F%2Fwww.wjx.cn%2F&showp=1536x864&p=https%3A%2F%2Fwww.wjx.cn%2Fnewwjx%2Fmanage%2Fmyquestionnaires.aspx&t=%E6%88%91%E7%9A%84%E9%97%AE%E5%8D%B7%20-%20%E9%97%AE%E5%8D%B7%E6%98%9F%EF%BC%88%E5%85%8D%E8%B4%B9%E7%89%88%EF%BC%89&umuuid=16b4af024d8e4-092e879fed8989-e353165-144000-16b4af024d9160&h=1&rnd=2082027922", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZx7147VYKfcMjLeMbDGwkIy3J0gWGJBQ=", "Referer=", ENDITEM, 
		"Url=https://www.wjx.cn/images/newimg/pic-1/download-hover.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		"Url=https://www.wjx.cn/images/newimg/pic-1/recovery-hover.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		"Url=https://www.wjx.cn/images/newimg/pic-1/design-hover.png", "Referer=https://www.wjx.cn/newwjx/css/myquestionnaires.css?v=467", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("reporttransfer.aspx", 
		"URL=https://www.wjx.cn/wjx/activitystat/reporttransfer.aspx?activity=40211802", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.wjx.cn/newwjx/manage/myquestionnaires.aspx", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Images/newimg/home.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/online-exam/design.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/online-exam/analysis.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/online-exam/recycling.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/question-gray.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/service-gray.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/online-exam/link.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/online-exam/default-nor.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/online-exam/download.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/online-exam/correct.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/online-exam/analysis-hover.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/online-exam/source.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/online-exam/report-pre.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/online-exam/complete.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=https://image.wjx.com/images/wjx/viewstat/column-s.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM, 
		"Url=https://image.wjx.com/images/wjx/viewstat/broken-line.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM, 
		"Url=https://image.wjx.com/images/wjx/viewstat/strip-nor.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM, 
		"Url=/images/newimg/single-icon.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM, 
		"Url=https://sojump.cn-hangzhou.log.aliyuncs.com/logstores/activitystat/track.gif?APIVersion=0.6.0&activity=40211802&type=nps&jointimes=2", "Referer=https://www.wjx.cn/wjx/activitystat/viewnps.aspx?activity=40211802", ENDITEM, 
		"Url=https://at.alicdn.com/t/font_1066834_87xmm2dp4hk.woff2", "Referer=https://www.wjx.cn/wjxUI/src/wjxUI.css?v=5", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(8);

	web_url("viewnps.aspx", 
		"URL=https://www.wjx.cn/wjx/activitystat/viewnps.aspx?activity=40211802&qindex=60000&atype=2&xq=-3&qtype=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.wjx.cn/wjx/activitystat/viewnps.aspx?activity=40211802", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	web_url("md5.json", 
		"URL=https://img.infinitynewtab.com/bingWallpaper/md5.json?t=1560330413079", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

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
		"Url=/Images/newimg/online-exam/report.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=/Images/newimg/online-exam/source-hover.png", "Referer=https://www.wjx.cn/newwjx/css/wjxdesign360.css?v=16", ENDITEM, 
		"Url=https://image.wjx.com/images/wjx/viewstat/pie-nor.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM, 
		"Url=https://image.wjx.com/images/wjx/viewstat/ring-nor.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM, 
		"Url=https://image.wjx.com/images/wjx/viewstat/column-nor.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM, 
		"Url=https://image.wjx.com/images/wjx/viewstat/pie-s.png", "Referer=https://www.wjx.cn/css/single-item-count.css?v=4", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(7);

	web_link("完成率分�\x90", 
		"Text=完成率分�\x90", 
		"Snapshot=t43.inf", 
		EXTRARES, 
		"Url=/layer/theme/default/icon.png", "Referer=https://www.wjx.cn/layer/theme/default/layer.css?v=3.1.0", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("viewurl.aspx_2", 
		"URL=https://www.wjx.cn/wjx/activitystat/viewurl.aspx?activity=40211802", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.wjx.cn/wjx/activitystat/visiturl.aspx?activity=40211802", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}