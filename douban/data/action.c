Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("www.douban.com", 
		"URL=https://www.douban.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img3.doubanio.com/f/sns/b474dd402e4293943146a4789de3dae88ec96636/pics/sns/anony_home/ic_shijian_home_nav.png", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/8af21e61874a79a3728f00b0c45d36a794f53059/pics/sns/anony_home/anony_nav_logo.png", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/19886d443852bee48de2ed91f4a3bdfdaf8c809c/pics/nav/logo_db.png", ENDITEM, 
		"Url=https://img3.doubanio.com/f/shire/b8f4c3672ef81106701071831e22422a745d3b74/pics/rating_icons/ic_rating_s.png", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/02f0736c7010c4bdccebbd6d6b140ccb1506cf6b/pics/sns/app/app_icons_50_10.jpg", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/2e2ba4027350d34a57a969920083aaff0193de7f/pics/icon/ic_bg_play.png", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/29a478366d210acff7a1b1fcecadf46893fd3353/pics/timeline-player-cover.png", ENDITEM, 
		"Url=https://img3.doubanio.com/img/files/file-1513305186-3.jpg", ENDITEM, 
		"Url=https://img3.doubanio.com/img/files/file-1546855945-0.jpg", ENDITEM, 
		"Url=https://img3.doubanio.com/img/files/file-1545819571-0.jpg", ENDITEM, 
		"Url=https://img3.doubanio.com/img/files/file-1513305186-4.jpg", ENDITEM, 
		"Url=https://img3.doubanio.com/img/files/file-1544439702-0.jpg", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/2842ce5ff147343f9d488659bc80958d1bfe56b5/pics/sns/time/ic_video_w@2x.png", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/c831e5604c9caea0b53892bc84617d01ff8e2f73/pics/sns/time/ic_audio_w@2x.png", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/3d0f5696311e4db481af371ffb241da225cf26d8/pics/sns/anony_home/play.png", ENDITEM, 
		"Url=https://img3.doubanio.com/f/adjs/b2a623018cd76036bb32ad74c28ea231fb2aa462/ad.release.js", ENDITEM, 
		"Url=https://img3.doubanio.com/dae/fundin/piwik.js", ENDITEM, 
		"Url=https://img3.doubanio.com/f/shire/72ced6df41d4d158420cebdd254f9562942464e3/js/jquery.min.js", ENDITEM, 
		"Url=https://img3.doubanio.com/view/puppy_image/raw/public/16ad990ec23uwn790d4.jpg", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/f71f15922ebd7c0ff0ea0e7a25577529efd8981a/pics/icon/bn_srh_1.png", ENDITEM, 
		"Url=https://img3.doubanio.com/f/shire/8377b9498330a2e6f056d863987cc7a37eb4d486/css/ui/dialog.css", ENDITEM, 
		"Url=https://img3.doubanio.com/f/shire/383a6e43f2108dc69e3ff2681bc4dc6c72a5ffb0/js/ui/dialog.js", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/b5793c2d7c298173d57ecf7d96708b5615336def/js/sns/fp/base.js", ENDITEM, 
		"Url=https://img3.doubanio.com/f/music/e0c59262a5d370deb35f338cd4872a00ed804263/js/music/player/pageconn/xdmtransport.js", ENDITEM, 
		"Url=https://img3.doubanio.com/view/photo/albumcover/public/p611002391.jpg", ENDITEM, 
		"Url=https://img1.doubanio.com/view/photo/albumcover/public/p2551384257.jpg", ENDITEM, 
		"Url=https://img3.doubanio.com/view/photo/albumcover/public/p2555463605.jpg", ENDITEM, 
		"Url=https://img1.doubanio.com/view/photo/albumcover/public/p2554436287.jpg", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_homepage_right_top&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032363&callback=erebor_B7CE59E2E0354D43B67ED8196919C564", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_homepage_movie_bottom&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032365&callback=erebor_2477D7C3F8A84315848EC220899A3339", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_homepage_online_activity_promo_1&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032367&callback=erebor_FA3FFED23C354CCB880B2AB130E967C6", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_homepage_movie_bottom&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032365&callback=erebor_E25BCB87303545C78557B823CB823F5F&failback_count=1", ENDITEM, 
		"Url=https://www.googletagmanager.com/gtm.js?id=GTM-5WP579", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_homepage_online_activity_promo_1&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032367&callback=erebor_C3231307C5D14F5589E465919AA3879B&failback_count=1", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_homepage_movie_bottom&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032365&callback=erebor_46EECCDFC2AF44A78D812D8232ED57C3&failback_count=2", ENDITEM, 
		"Url=https://erebor.douban.com/count/?ad=205157&bid=TQzEGe-LGHc&chicken=7e7983485e39294864f4cdcec658d0c6&crtr=3%3A%2F&device=101&experiment_id=0&fv=&hn=anson51&lat=0.00000&lon=0.00000&mark=&model=&net=&ns=1560581033796124644&os=52&osv=NT+10.0&p=0&pid=debug_a599f10e9adf437e7428f1036f569e8f53100c74&rexxar=0&type=impression&uid=&unit=dale_anonymous_homepage_right_top&user_variation=&vendor=", ENDITEM, 
		"Url=https://img3.doubanio.com/view/dale-online/dale_ad/public/d5e1b3f4ce71421.jpg", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_homepage_online_activity_promo_1&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032367&callback=erebor_9B3BFDE739FE41F0A564E13BC3527955&failback_count=2", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_home_page_bottom&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032370&callback=erebor_6D2D214B6AA24EC2826B5DF6163A4CE3", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_homepage_doublemint&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032368&callback=erebor_0419755502184C388B3E62C9E384BDDA", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_home_page_bottom&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032370&callback=erebor_36D7E2A55B244CB7842E9D082E7FE6F9&failback_count=1", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_homepage_doublemint&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032368&callback=erebor_94A26F1F8AAE4F81BDC9CD3459AC6DCC&failback_count=1", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_home_page_bottom&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032370&callback=erebor_C07925FF4DB342E595317F3D5C0DB31F&failback_count=2", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_homepage_doublemint&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032368&callback=erebor_474EB00D321545C6AC55962B1DDC6FF9&failback_count=2", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_homepage_top_for_crazy_ad&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032359&callback=erebor_B2D01026EFFA4B628128DA354D613920", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_home_page_middle_2&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032369&callback=erebor_958F6AE984FF42A4B10504C77C7F0302", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_homepage_top_for_crazy_ad&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032359&callback=erebor_9DFB5814EF714EC5A2202CD7ABF530E0&failback_count=1", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_home_page_middle_2&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032369&callback=erebor_D1E7B39B269A45EE8F065A3622306F5D&failback_count=1", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_homepage_top_for_crazy_ad&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032359&callback=erebor_6F7C049062E04609862446965101B1BF&failback_count=2", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_anonymous_home_page_middle_2&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581032369&callback=erebor_DD60FA09164A47448317A8845F86ED45&failback_count=2", ENDITEM, 
		"Url=https://ssl.google-analytics.com/ga.js", ENDITEM, 
		"Url=https://ssl.google-analytics.com/r/__utm.gif?utmwv=5.7.2&utms=1&utmn=622520450&utmhn=www.douban.com&utme=8(responsive_view_mode)9(desktop)&utmcs=utf-8&utmsr=1920x1080&utmvp=1903x1082&utmsc=24-bit&utmul=zh-cn&utmje=1&utmfl=32.0%20r0&utmdt=%E8%B1%86%E7%93%A3&utmhid=1530124697&utmr=-&utmp=%2F&utmht=1560581044131&utmac=UA-7019765-1&utmcc=__utma%3D30149280.845802281.1560581044.1560581044.1560581044.1%3B%2B__utmz%3D30149280.1560581044.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&"
		"utmjid=918196122&utmredir=1&utmu=qRMAAA0GAAAAAAAAAAAAAAAE~", ENDITEM, 
		"Url=https://img3.doubanio.com/f/music/f73a1d2c5cfdf3caa990814d0e02c63e892d09ae/js/music/player/pageconn/client.js", ENDITEM, 
		"Url=https://img3.doubanio.com/img/files/file-1536839373.jpg", ENDITEM, 
		"Url=https://img3.doubanio.com/img/files/file-1533265075.jpg", ENDITEM, 
		"Url=https://img3.doubanio.com/img/files/file-1536139554.jpg", ENDITEM, 
		"Url=https://img3.doubanio.com/img/files/file-1535537921.jpeg", ENDITEM, 
		"Url=https://img3.doubanio.com/img/files/file-1534925572.jpg", ENDITEM, 
		"Url=https://img1.doubanio.com/img/files/file-1536232158.jpg", ENDITEM, 
		LAST);

	web_custom_request("douban.js", 
		"URL=https://img3.doubanio.com/f/shire/1316664523258f7b8b536e4ce45afc9cb37b8963/js/douban.js", 
		"Method=HEAD", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("_all.js", 
		"URL=https://img3.doubanio.com/f/shire/0efdc63b77f895eaf85281fb0e44d435c6239a3f/js/separation/_all.js", 
		"Method=HEAD", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/f/accounts/c0c2ff7968fac75c6c359c3af49c3493f4d8e835/css/ui/dialog.css", "Referer=https://accounts.douban.com/passport/login_popup?login_source=anony", ENDITEM, 
		"Url=/f/accounts/0d89968f657dd00590944957e19a943e13ecb266/js/ui/dialog.js", "Referer=https://accounts.douban.com/passport/login_popup?login_source=anony", ENDITEM, 
		LAST);

	web_add_cookie("_pk_id.100001.8cb4=d28067e75dd5e0d6.1560581032.1.1560581032.1560581032.; DOMAIN=www.douban.com");

	web_add_cookie("_pk_ses.100001.8cb4=*; DOMAIN=www.douban.com");

	web_url("piwik", 
		"URL=https://fundin.douban.com/piwik?action_name=%E8%B1%86%E7%93%A3&idsite=100001&rec=1&r=488791&h=14&m=43&s=52&url=https%3A%2F%2Fwww.douban.com%2F&_id=d28067e75dd5e0d6&_idts=1560581032&_idvc=1&_idn=1&_refts=0&_viewts=1560581032&pdf=0&qt=0&realp=0&wma=0&dir=0&fla=1&java=1&gears=0&ag=0&cookie=1&res=1920x1080&gt_ms=48", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.douban.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.douban.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.douban.com");

	web_url("items", 
		"URL=https://m.douban.com/rexxar/api/v2/muzzy/columns/10008/items?start=0&count=3", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.douban.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("items_2", 
		"URL=https://m.douban.com/rexxar/api/v2/muzzy/columns/10018/items?start=0&count=3", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.douban.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("bid=TQzEGe-LGHc; DOMAIN=music.douban.com");

	web_add_cookie("__utma=30149280.845802281.1560581044.1560581044.1560581044.1; DOMAIN=music.douban.com");

	web_add_cookie("__utmb=30149280.1.10.1560581044; DOMAIN=music.douban.com");

	web_add_cookie("__utmc=30149280; DOMAIN=music.douban.com");

	web_add_cookie("__utmz=30149280.1560581044.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); DOMAIN=music.douban.com");

	web_add_cookie("__utmt=1; DOMAIN=music.douban.com");

	web_revert_auto_header("Origin");

	web_url("xdmserver", 
		"URL=https://music.douban.com/artists/player/xdmserver?xdm_e=https%3A%2F%2Fwww.douban.com&xdm_c=default8208&xdm_p=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.douban.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("bid=TQzEGe-LGHc; DOMAIN=www.douban.com");

	web_add_cookie("__utma=30149280.845802281.1560581044.1560581044.1560581044.1; DOMAIN=www.douban.com");

	web_add_cookie("__utmb=30149280.1.10.1560581044; DOMAIN=www.douban.com");

	web_add_cookie("__utmc=30149280; DOMAIN=www.douban.com");

	web_add_cookie("__utmz=30149280.1560581044.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); DOMAIN=www.douban.com");

	web_add_cookie("__utmt=1; DOMAIN=www.douban.com");

	lr_think_time(15);

	web_url("stat.html", 
		"URL=https://www.douban.com/stat.html?&action=login_click&platform=douban&login_click_time=1560581076793&callback=jsonp_wwz4u4q5vju0mqr", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://accounts.douban.com/passport/login_popup?login_source=anony", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("bid=TQzEGe-LGHc; DOMAIN=accounts.douban.com");

	web_add_cookie("__utma=30149280.845802281.1560581044.1560581044.1560581044.1; DOMAIN=accounts.douban.com");

	web_add_cookie("__utmb=30149280.1.10.1560581044; DOMAIN=accounts.douban.com");

	web_add_cookie("__utmc=30149280; DOMAIN=accounts.douban.com");

	web_add_cookie("__utmz=30149280.1560581044.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); DOMAIN=accounts.douban.com");

	web_add_cookie("__utmt=1; DOMAIN=accounts.douban.com");

	web_add_cookie("login_start_time=1560581075679; DOMAIN=accounts.douban.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("basic", 
		"Action=https://accounts.douban.com/j/mobile/login/basic", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://accounts.douban.com/passport/login_popup?login_source=anony", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ck", "Value=", ENDITEM, 
		"Name=name", "Value=+4915903922388", ENDITEM, 
		"Name=password", "Value=kiwidb+1s", ENDITEM, 
		"Name=remember", "Value=false", ENDITEM, 
		"Name=ticket", "Value=", ENDITEM, 
		LAST);

	web_url("stat.html_2", 
		"URL=https://www.douban.com/stat.html?&action=login_success&platform=douban&callback=jsonp_x71p76maypxilql", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://accounts.douban.com/passport/login_popup?login_source=anony", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("bid=TQzEGe-LGHc; DOMAIN=erebor.douban.com");

	web_add_cookie("__utma=30149280.845802281.1560581044.1560581044.1560581044.1; DOMAIN=erebor.douban.com");

	web_add_cookie("__utmb=30149280.1.10.1560581044; DOMAIN=erebor.douban.com");

	web_add_cookie("__utmc=30149280; DOMAIN=erebor.douban.com");

	web_add_cookie("__utmz=30149280.1560581044.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); DOMAIN=erebor.douban.com");

	web_add_cookie("__utmt=1; DOMAIN=erebor.douban.com");

	web_url("www.douban.com_2", 
		"URL=https://www.douban.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://accounts.douban.com/passport/login_popup?login_source=anony", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img3.doubanio.com/dae/accounts/resources/4bf727f/sns/assets/bn_srh_1.png", ENDITEM, 
		"Url=https://img3.doubanio.com/f/shire/1316664523258f7b8b536e4ce45afc9cb37b8963/js/douban.js", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/8ee31900bc3f7e370a03572ae94c31a352e0bd3c/js/sns/widgets/isay_a.js", ENDITEM, 
		"Url=https://img3.doubanio.com/f/shire/9c77e9e751bafa33e45781cf4697d16c4678af01/js/statuses.js", ENDITEM, 
		"Url=https://img3.doubanio.com/f/shire/5fde5d6b7ef18adf4fb947449fff1709c73cbceb/js/lib/hotkeys.js", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/bfd76b13e7b4a1de7cd2d6aee507a7e67b7fae8e/pics/sns/isay/ic_setting.svg", ENDITEM, 
		"Url=https://img3.doubanio.com/dae/accounts/resources/4bf727f/sns/assets/lg_main_a11_1.png", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/e6a7bbe944e22644c8950c148174aa0ef0464ddb/pics/sns/gallery/ic_tag@2x.png", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_homepage_login_bottom_middle_right&uid=197980264&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581092433&callback=erebor_BEA3F751C1404FE4BD3974449A5C81E8", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_homepage_login_top_right&uid=197980264&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581092431&callback=erebor_C0CC71EA2CAD462B8F8377BBA9035D9A", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_homepage_login_bottom_middle_right&uid=197980264&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581092433&callback=erebor_683F66BF5EB047F8AEB1E3ED11CA1C58&failback_count=1", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_homepage_login_download_middle&uid=197980264&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581092437&callback=erebor_F3A80A2C09694CE38A52FF6313798FEF", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_homepage_login_bottom_middle_right&uid=197980264&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581092433&callback=erebor_05DCB1C772974D7A85C75C5EA5257C13&failback_count=2", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_homepage_login_download_middle&uid=197980264&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581092437&callback=erebor_6408642900F54641AB142F6CEC96C175&failback_count=1", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/61977f467e6cbed313af1a65ce7d993439b9948f/pics/sns/isay/isay_icons.3.svg", ENDITEM, 
		"Url=https://shared.ydstatic.com/js/yatdk/3.0.0/pcBanner.js", ENDITEM, 
		"Url=https://shared.ydstatic.com/js/yadk/1.1.2.js", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/1931ea1504566997b7b93816547b07cea2ad8dea/pics/sns/isay/isay_icon_pic.svg", ENDITEM, 
		"Url=https://erebor.douban.com/?unit=dale_homepage_login_inner_middle&uid=197980264&bid=TQzEGe-LGHc&crtr=3%3A%2F&ts=1560581092435&callback=erebor_38E5221450E3415B8D5D09DABDFD1463", ENDITEM, 
		"Url=https://erebor.douban.com/count/?ad=203142&uid=197980264&bid=TQzEGe-LGHc&unit=dale_homepage_login_top_right&type=impression", ENDITEM, 
		LAST);

	web_add_cookie("bid=TQzEGe-LGHc; DOMAIN=fundin.douban.com");

	web_add_cookie("__utma=30149280.845802281.1560581044.1560581044.1560581044.1; DOMAIN=fundin.douban.com");

	web_add_cookie("__utmb=30149280.1.10.1560581044; DOMAIN=fundin.douban.com");

	web_add_cookie("__utmc=30149280; DOMAIN=fundin.douban.com");

	web_add_cookie("__utmz=30149280.1560581044.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); DOMAIN=fundin.douban.com");

	web_add_cookie("__utmt=1; DOMAIN=fundin.douban.com");

	web_url("piwik_2", 
		"URL=https://fundin.douban.com/piwik?action_name=%E8%B1%86%E7%93%A3&idsite=100001&rec=1&r=457199&h=14&m=44&s=52&url=https%3A%2F%2Fwww.douban.com%2F&urlref=https%3A%2F%2Faccounts.douban.com%2Fpassport%2Flogin_popup%3Flogin_source%3Danony&_id=d28067e75dd5e0d6&_idts=1560581032&_idvc=1&_idn=0&_refts=0&_viewts=1560581032&pdf=0&qt=0&realp=0&wma=0&dir=0&fla=1&java=1&gears=0&ag=0&cookie=1&res=1920x1080&gt_ms=4", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.douban.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("request.s", 
		"URL=https://gorgon.youdao.com/gorgon/request.s?udid=HmB1Jxco8qu77IzQ8AN6PUESD6uHqmEJ&id=f690d10e6b29edd820475e7d539816db&pos=inline&issecure=1&isSecure=1&ct=2&reqfrom=web&webos=6&nsv=1.1.2&ran=1&callback=_yad_jsonp_0&_1560581097424", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.douban.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://shared.ydstatic.com/js/yatdk/3.0.0/pcBanner.css", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://www.douban.com");

	web_url("frodo_landing", 
		"URL=https://m.douban.com/j/puppy/frodo_landing?include=anony_home", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.douban.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ap_v=0,6.0; DOMAIN=www.douban.com");

	web_add_cookie("_pk_id.100001.8cb4=d28067e75dd5e0d6.1560581032.1.1560581097.1560581032.; DOMAIN=www.douban.com");

	web_add_cookie("__yadk_uid=HmB1Jxco8qu77IzQ8AN6PUESD6uHqmEJ; DOMAIN=www.douban.com");

	web_add_cookie("douban-profile-remind=1; DOMAIN=www.douban.com");

	web_add_cookie("_pk_id.100001.8cb4=d28067e75dd5e0d6.1560581032.1.1560581105.1560581032.; DOMAIN=www.douban.com");

	web_url("mine", 
		"URL=https://www.douban.com/mine/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.douban.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img3.doubanio.com/f/sns/f0524639dc701ad65bba07ecff7214afcc2ac321/pics/icon/icon-ok-g.gif", "Referer=https://www.douban.com/people/kiwilab/", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/de4b852f2441b2e2e5e5562b775c6cc9eabedd3f/pics/site/sp_all_4.png", "Referer=https://www.douban.com/people/kiwilab/", ENDITEM, 
		"Url=https://img3.doubanio.com/f/shire/5361836272f03991e4452c0e4f3b776489eb806c/pics/info_bg.png", "Referer=https://www.douban.com/people/kiwilab/", ENDITEM, 
		"Url=https://img3.doubanio.com/f/sns/475424d94342ce2eb59f1ba2bc391e11635613de/pics/guide_step_icon.gif", "Referer=https://www.douban.com/people/kiwilab/", ENDITEM, 
		"Url=../j/notification/num?callback=jsonp_hhck8ez5zx0iu2p", "Referer=https://www.douban.com/people/kiwilab/", ENDITEM, 
		"Url=../j/doumail/num?callback=jsonp_ito16yd1szovaiq", "Referer=https://www.douban.com/people/kiwilab/", ENDITEM, 
		"Url=https://ssl.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=2&utmn=1620450500&utmhn=www.douban.com&utme=8(responsive_view_mode)9(desktop)&utmcs=utf-8&utmsr=1920x1080&utmvp=1920x1082&utmsc=24-bit&utmul=zh-cn&utmje=1&utmfl=32.0%20r0&utmdt=stlab&utmhid=818778399&utmr=0&utmp=%2Fpeople%2Fkiwilab%2F&utmht=1560581104842&utmac=UA-7019765-1&utmcc=__utma%3D30149280.845802281.1560581044.1560581044.1560581044.1%3B%2B__utmz%3D30149280.1560581044.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)"
		"%3B&utmjid=&utmu=qRMAAA0GAAAAAAAAAAAAAAAE~", "Referer=https://www.douban.com/people/kiwilab/", ENDITEM, 
		"Url=https://ssl.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=3&utmn=1288538566&utmhn=www.douban.com&utmt=var&utmht=1560581104849&utmac=UA-7019765-1&utmcc=__utma%3D30149280.845802281.1560581044.1560581044.1560581044.1%3B%2B__utmz%3D30149280.1560581044.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B%2B__utmv%3D30149280.19798%3B&utmjid=&utmu=qRMQAA0GAAAAAAAAQAAAAAAE~", "Referer=https://www.douban.com/people/kiwilab/", ENDITEM, 
		LAST);

	web_url("piwik_3", 
		"URL=https://fundin.douban.com/piwik?link=https%3A%2F%2Faccounts.douban.com%2Fpassport%2Fsetting%2F&idsite=100001&rec=1&r=135194&h=14&m=44&s=57&url=https%3A%2F%2Fwww.douban.com%2F&urlref=https%3A%2F%2Faccounts.douban.com%2Fpassport%2Flogin_popup%3Flogin_source%3Danony&_id=d28067e75dd5e0d6&_idts=1560581032&_idvc=1&_idn=0&_refts=0&_viewts=1560581032&pdf=0&qt=0&realp=0&wma=0&dir=0&fla=1&java=1&gears=0&ag=0&cookie=1&res=1920x1080&gt_ms=4", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.douban.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ap_v=0,6.0; DOMAIN=fundin.douban.com");

	web_add_cookie("douban-profile-remind=1; DOMAIN=fundin.douban.com");

	web_url("piwik_4", 
		"URL=https://fundin.douban.com/piwik?action_name=stlab&idsite=100001&rec=1&r=751306&h=14&m=45&s=4&url=https%3A%2F%2Fwww.douban.com%2Fpeople%2Fkiwilab%2F&urlref=https%3A%2F%2Fwww.douban.com%2F&_id=d28067e75dd5e0d6&_idts=1560581032&_idvc=1&_idn=0&_refts=0&_viewts=1560581032&pdf=0&qt=0&realp=0&wma=0&dir=0&fla=1&java=1&gears=0&ag=0&cookie=1&res=1920x1080&gt_ms=2", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.douban.com/people/kiwilab/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("__utmb=30149280.3.10.1560581044; DOMAIN=www.douban.com");

	web_add_cookie("push_noty_num=0; DOMAIN=www.douban.com");

	web_add_cookie("push_doumail_num=0; DOMAIN=www.douban.com");

	web_add_cookie("__utmv=30149280.19798; DOMAIN=www.douban.com");

	web_add_cookie("_pk_id.100001.8cb4=d28067e75dd5e0d6.1560581032.1.1560581125.1560581032.; DOMAIN=www.douban.com");

	lr_think_time(17);

	web_url("rlist", 
		"URL=https://www.douban.com/contacts/rlist", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.douban.com/people/kiwilab/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../j/notification/num?callback=jsonp_fhinjjz349zrgjg", ENDITEM, 
		"Url=../j/doumail/num?callback=jsonp_kqt7h43309tuxyy", ENDITEM, 
		"Url=https://ssl.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=4&utmn=1379561412&utmhn=www.douban.com&utme=8(responsive_view_mode)9(desktop)&utmcs=utf-8&utmsr=1920x1080&utmvp=1920x1082&utmsc=24-bit&utmul=zh-cn&utmje=1&utmfl=32.0%20r0&utmdt=%E5%85%B3%E6%B3%A8%E6%88%91%E7%9A%84%E4%BA%BA(0)&utmhid=1965871568&utmr=0&utmp=%2Fcontacts%2Frlist&utmht=1560581125114&utmac=UA-7019765-1&utmcc=__utma%3D30149280.845802281.1560581044.1560581044.1560581044.1%3B%2B__utmz%3D30149280.1560581044.1.1.utmcsr%3D(direct"
		")%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B%2B__utmv%3D30149280.19798%3B&utmjid=&utmu=qRMAAA0GAAAAAAAAAAAAAAAE~", ENDITEM, 
		"Url=https://ssl.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=5&utmn=1556269831&utmhn=www.douban.com&utmt=var&utmht=1560581125123&utmac=UA-7019765-1&utmcc=__utma%3D30149280.845802281.1560581044.1560581044.1560581044.1%3B%2B__utmz%3D30149280.1560581044.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B%2B__utmv%3D30149280.19798%3B&utmjid=&utmu=qRMQAA0GAAAAAAAAQAAAAAAE~", ENDITEM, 
		LAST);

	web_add_cookie("__utmb=30149280.3.10.1560581044; DOMAIN=fundin.douban.com");

	web_add_cookie("push_noty_num=0; DOMAIN=fundin.douban.com");

	web_add_cookie("push_doumail_num=0; DOMAIN=fundin.douban.com");

	web_add_cookie("__utmv=30149280.19798; DOMAIN=fundin.douban.com");

	web_url("piwik_5", 
		"URL=https://fundin.douban.com/piwik?action_name=%E5%85%B3%E6%B3%A8%E6%88%91%E7%9A%84%E4%BA%BA(0)&idsite=100001&rec=1&r=888096&h=14&m=45&s=24&url=https%3A%2F%2Fwww.douban.com%2Fcontacts%2Frlist&urlref=https%3A%2F%2Fwww.douban.com%2Fpeople%2Fkiwilab%2F&_id=d28067e75dd5e0d6&_idts=1560581032&_idvc=1&_idn=0&_refts=0&_viewts=1560581032&pdf=0&qt=0&realp=0&wma=0&dir=0&fla=1&java=1&gears=0&ag=0&cookie=1&res=1920x1080&gt_ms=2", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.douban.com/contacts/rlist", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}