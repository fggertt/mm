import requests
import random
from user_agent import generate_user_agent
import os
goodaol=0
notav=0
goodgmail=0
badinsta=0
hit=0
goodstat='ok'
black = "\033[30m"
red = "\033[31m"
green = "\033[32m"
yellow = "\033[33m"
blue = "\033[34m"
purple = "\033[35m"
cyan = "\033[36m"
white = "\033[37m"
bright_black = "\033[90m"
bright_red = "\033[91m"
bright_green = "\033[92m"
bright_yellow = "\033[93m"
bright_blue = "\033[94m"
bright_purple = "\033[95m"
bright_cyan = "\033[96m"
bright_white = "\033[97m"
instapis=['https://tfrdr-f955724a8068.herokuapp.com','https://uycdyudy-39e3fb413de4.herokuapp.com','https://yeyudyudy-ab02b3aa88e2.herokuapp.com','https://ydsys-sd-2f9fd334bf63.herokuapp.com','https://uhdsuydshyds-3ff3b0c92c60.herokuapp.com','https://ydhyudhyds-bfc5a317d67a.herokuapp.com','https://ytugytgyt-7041e128086f.herokuapp.com','https://ggggjf-b79f57bc8534.herokuapp.com','https://yusdytsg-qs-ccd7f4395f39.herokuapp.com','https://apiiduidshudh-43efa20df968.herokuapp.com','https://ytytyy-c7eded637339.herokuapp.com','https://uhedyedy-3e6f9845d988.herokuapp.com']
aolapis=['https://hgytg-j-b5c605d0aca2.herokuapp.com','https://ytgy-fgtftr-4beb9202a3b5.herokuapp.com','https://ytg-rtr-017908d8f0de.herokuapp.com','https://ygygtyyg-686987ca61b7.herokuapp.com']
ID=input(purple+'id    :  '+yellow)
TOK=input(purple+'token    :  '+yellow)
file_path = input(purple + 'namefile    : ' )
import requests
from uuid import uuid4
from user_agent import generate_user_agent
import random
import requests;import json,os,random;from uuid import uuid4
filecook='cooook.txt'
import requests
from user_agent import generate_user_agent
from uuid import uuid4
from random import choice as Qredes
from random import randrange 
h=str
def insta(email):
    try:
          req=requests.get('https://insta1-449232194b76.herokuapp.com/Qredes/email='+email).json()
          if req['s'] == 'good':return goodstat
          else:return 'bad'
    except requests.ConnectionError:insta(email)
    except:return 'bad'
def cook():
	headers1 = {
    'User-Agent': 'Instagram 100.0.0.17.129 Android (29/10; 420dpi; 1080x2129; samsung; SM-M205F; m20lte; exynos7904; en_GB; 161478664)'};rrr = requests.post('https://i.instagram.com/api/v1/accounts/login/', headers=headers1).cookies.get_dict();csrftoken=rrr['csrftoken'];mid=rrr['mid']
	try:os.remove(filecook)
	except:pass
	with open(filecook, 'a') as (fffffffffff):fffffffffff.write(csrftoken + ':' + mid +'\n');fffffffffff.close()
cook()
def rest(user):
    ud = str(uuid4())
    try:mc =  open(filecook,'r').read().splitlines();mcs =  random.choice(mc);csrftoken,mid=mcs.split(':')
    except:cook();rest(user)
    headers = { 'X-IG-App-ID': '567067343352427','User-Agent': 'Instagram 100.0.0.17.129 Android (29/10; 420dpi; 1080x2129; samsung; SM-M205F; m20lte; exynos7904; en_GB; 161478664)','Accept-Language': 'en-GB, en-US','Cookie': f'mid={mid}; csrftoken={csrftoken}','Content-Type': 'application/x-www-form-urlencoded; charset=UTF-8','Host': 'i.instagram.com'};data = {'signed_body': ''.join(random.choice('AZERTYUIOPQSDFGHJKLMNBVCXWazertyuiopqsdfghjklmwxcvbn1234567890') for i in range(60))+'.{"_csrftoken":"'+csrftoken+'","adid":"'+ud+'","guid":"'+ud+'","device_id":"'+ud+'","query":"'+user+'"}', 'ig_sig_key_version': '4'};response = requests.post('https://i.instagram.com/api/v1/accounts/send_recovery_flow_email/',headers=headers,data=data);return response
import requests
from requests import get
from user_agent import generate_user_agent
def info1(user,hit,email):
	try:
		response = get('https://lookup.socialservicesapi.com/api/user/username/'+user+'?api_key=e8451c0868bac19b75f2c405d34eb67b',  headers={'user-agent': generate_user_agent()}).json()
		
		try:restt=rest(user).json()['email']
		except:restt='ملاوي'
		tlg = f'''
⌯ Hi Qredes Got Hit
ᯓᯓᯓᯓᯓᯓᯓᯓᯓᯓ
⌯ Hits —>  {hit}
⌯ User —>  {user}
⌯ Email —> {email}
⌯ Followers -> {response['followers']} × {response['following']} <- Following ⌯
⌯ Id —> {response['id']}
⌯ Bio —> {response['biography']}
⌯ Name —> {response['full_name']}
⌯ Reset —> {restt}
   BY : @Qredes
@Qredes_Python
    '''
		
	except:
		
		tlg = f'''
⌯ Hi Qredes Got Hit
ᯓᯓᯓᯓᯓᯓᯓᯓᯓᯓ
⌯ Hits —>  {hit}
⌯ User —>  {user}
⌯ Email —> {email}
   BY : @Qredes
@Qredes_Python
    '''
	try:requests.get(f"https://api.telegram.org/bot{TOK}/sendMessage?chat_id={ID}&text={tlg}")
	except:info1(user,hit,email)

def clear1():os.system('clear')
clear1()
import requests;from uuid import uuid4;import requests,json;from user_agent import generate_user_agent as ee;import random;from uuid import uuid4;import os;import secrets;filetl='tl.txt'
def user_ag():a='Mozilla/5.0 (Symbian/3; Series60/';b=random.randrange(1, 9);c=random.randrange(1, 9);d='Nokia';e=random.randrange(100, 9999);f='/110.021.0028; Profile/MIDP-2.1 Configuration/CLDC-1.1 ) AppleWebKit/535.1 (KHTML, like Gecko) NokiaBrowser/';g=random.randrange(1, 9);h=random.randrange(1, 4);i=random.randrange(1, 4);j=random.randrange(1, 4);k='Mobile Safari/535.1';uaku=(f'{a}{b}.{c} {d}{e}{f}{g}.{h}.{i}.{j} {k}');return uaku
def tll():
	cok = secrets.token_hex(8) * 2
	try:re = requests.post('https://accounts.google.com/_/signup/validatepersonaldetails?hl=ar&_reqid=82313&rt=j',headers= {'Accept':'*/*','Accept-Encoding':'gzip, deflate, br','Accept-Language':'ar,en-US;q=0.9,en;q=0.8,pt;q=0.7','Content-Length':'2012','Content-Type':'application/x-www-form-urlencoded;charset=UTF-8','Cookie':cok,'Google-Accounts-Xsrf':'1','Origin':'https://accounts.google.com','Referer':'https://accounts.google.com/signup/v2/createaccount?theme=glif&flowName=GlifWebSignIn&flowEntry=SignUp','Sec-Ch-Ua':'"Chromium";v="116", "Not)A;Brand";v="24", "Google Chrome";v="116"','Sec-Ch-Ua-Arch':'"x86"','Sec-Ch-Ua-Bitness':'"64"','Sec-Ch-Ua-Full-Version':'"116.0.5845.188"','Sec-Ch-Ua-Full-Version-List':'"Chromium";v="116.0.5845.188", "Not)A;Brand";v="24.0.0.0", "Google Chrome";v="116.0.5845.188"','User-Agent':user_ag(),'X-Chrome-Id-Consistency-Request':'version=1,client_id=77185425430.apps.googleusercontent.com,device_id=b20ba583-8cad-46a7-80ea-88e6755866ad,sync_account_id=105342098533404169783,signin_mode=all_accounts,signout_mode=show_confirmation','X-Client-Data':'CIe2yQEIpbbJAQipncoBCMzfygEIlKHLAQiFoM0BCI2yzQEI3L3NAQjfxM0BCOnFzQEIucrNAQjV0M0BCJHSzQEIitPNAQj5wNQVGPXJzQE=','X-Same-Domain':'1'},data={'theme': 'glif','continue': 'https://accounts.google.com/ManageAccount?nc=1','f.req': '["AEThLlzavccs_MdaDMBDfSU7NEeTKr02URa8Y9GAk-2d5ygvEJv1okzAOPzpFw_rFw7MwSmg0m4SxVvZNNMz97nf2-NlwAlseWtZSAdlgAwoVzJaYtv-tuezCMXj8lHpLGDJbv2PEVTDn47o79z30klv1McaYIuuIW8xRVelt4tQ3jbscrpSkCTv7cT5a5A3FvaQISHBljEF",null,null,null,null,0,0,"strrgrs","strrgrs","web-glif-signup",0,null,10,[null,null,[],null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,[5,"77185425430.apps.googleusercontent.com",["https://www.google.com/accounts/OAuthLogin"],null,null,"b20ba583-8cad-46a7-80ea-88e6755866ad",null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,5,null,null,[],null,null,null,null,[]],null,null,null,null,null,null,[],null,null,null,null,[]],1]','at': 'AFoagUUzkiOnQaoRtzNNCpQ0ha9o8tIkSQ:1695585059018','azt': 'AFoagUUi89PpEd8CL8NrG88__muZtPuD_w:1695585059018','cookiesDisabled': 'false','deviceinfo': '[null,null,null,[],null,"IQ",null,null,null,"GlifWebSignIn",null,[null,null,[],null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,[5,"77185425430.apps.googleusercontent.com",["https://www.google.com/accounts/OAuthLogin"],null,null,"b20ba583-8cad-46a7-80ea-88e6755866ad",null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,5,null,null,[],null,null,null,null,[]],null,null,null,null,null,null,[],null,null,null,null,[]],null,null,null,null,1,null,0,1,"",null,null,2,2]','gmscoreversion': 'undefined','flowName': 'GlifWebSignIn','checkConnection': 'youtube:290:0','checkedDomains': 'youtube','pstMsg': '1',}).text;TLL = re.split('["gf.ttu",null,"')[1].split('"],')[0];re2 = requests.post('https://accounts.google.com/_/signup/validatebasicinfo?hl=ar&TL=AJeL0C43qObZzGhdyZTfL_-PeEXerBAQ8r6OB8Tq1uhlCyJ0Y-WKaVwPFuDvjohv&_reqid=283689&rt=j',headers= {'Accept':'*/*','Accept-Encoding':'gzip, deflate, br','Accept-Language':'ar,en-US;q=0.9,en;q=0.8,pt;q=0.7','Content-Length':'1243','Content-Type':'application/x-www-form-urlencoded;charset=UTF-8','Cookie':cok,'Google-Accounts-Xsrf':'1','Origin':'https://accounts.google.com','Referer':'https://accounts.google.com/signup/v2/birthdaygender?theme=glif&flowName=GlifWebSignIn&flowEntry=SignUp&TL=AJeL0C43qObZzGhdyZTfL_-PeEXerBAQ8r6OB8Tq1uhlCyJ0Y-WKaVwPFuDvjohv','Sec-Ch-Ua':'"Chromium";v="116", "Not)A;Brand";v="24", "Google Chrome";v="116"','Sec-Ch-Ua-Arch':'"x86"','Sec-Ch-Ua-Bitness':'"64"','Sec-Ch-Ua-Full-Version':'"116.0.5845.188"','Sec-Ch-Ua-Full-Version-List':'"Chromium";v="116.0.5845.188", "Not)A;Brand";v="24.0.0.0", "Google Chrome";v="116.0.5845.188"','User-Agent':user_ag(),'X-Chrome-Id-Consistency-Request':'version=1,client_id=77185425430.apps.googleusercontent.com,device_id=b20ba583-8cad-46a7-80ea-88e6755866ad,sync_account_id=105342098533404169783,signin_mode=all_accounts,signout_mode=show_confirmation','X-Client-Data':'CIe2yQEIpbbJAQipncoBCMzfygEIlKHLAQiFoM0BCI2yzQEI3L3NAQjfxM0BCOnFzQEIucrNAQjV0M0BCJHSzQEIitPNAQj5wNQVGPXJzQE=','X-Same-Domain':'1'},data={'theme': 'glif','continue': 'https://accounts.google.com/ManageAccount?nc=1','f.req': f'["TL:{TLL}",1999,3,6,2,null,null,0,null,null,0,0]','at': 'AFoagUXYUhTvUEnQe3grDoZb22BYTBUXFg:1695586462543','azt': 'AFoagUWQYD1CqlgiVRQg71n710QgPsx-jA:1695586462544','cookiesDisabled': 'false','deviceinfo': '[null,null,null,[],null,"IQ",null,null,null,"GlifWebSignIn",null,[null,null,[],null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,[5,"77185425430.apps.googleusercontent.com",["https://www.google.com/accounts/OAuthLogin"],null,null,"b20ba583-8cad-46a7-80ea-88e6755866ad",null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,5,null,null,[],null,null,null,null,[]],null,null,null,null,null,null,[],null,null,null,null,[]],null,null,null,null,1,null,0,1,"",null,null,2,2]','gmscoreversion': 'undefined','flowName': 'GlifWebSignIn','checkConnection': 'youtube:486:0','checkedDomains': 'youtube','pstMsg': '1'}).text
	except:tll()
	try:
		tl=re2.split('["gf.bgvr",1,0,0,"TL:')[1].split('",null,null,0,24,null,null,0],["e",2,null,null,146]]]')[0]
		try:os.remove(filetl)
		except:pass
		with open(filetl, 'a') as (fffffffffff):fffffffffff.write(tl+'\n');fffffffffff.close()
	except:tll()
tll()
def gmail(email):
    try:mc =  open(filetl,'r').read().splitlines();tl =  random.choice(mc)
    except:tll();gmail(email)
    uui,uid= uuid4(),uuid4()
    if '@' in email:email=email.split('@')[0]+'@gmail.com'
    else:email=email+'@gmail.com'
    
    try:
         response = requests.post('https://accounts.google.com/_/signup/usernameavailability',params={'hl': 'en','TL': tl,'_reqid': '72345','rt': 'j',},headers={'Host': 'accounts.google.com','sec-ch-ua': 'Google','x-same-domain': '1','sec-ch-ua-mobile': '?1','user-agent': 'Mozilla/5.0 (Linux; Android 10; K) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/119.0.0.0 Mobile Safari/537.36','content-type': 'application/x-www-form-urlencoded;charset=UTF-8','sec-ch-ua-full-version': '119.0.6045.163','sec-ch-ua-platform-version': '10.0.0','google-accounts-xsrf': '1','sec-ch-ua-full-version-list': 'Google','sec-ch-ua-model': 'SM-M205F','sec-ch-ua-wow64': '?0','sec-ch-ua-platform': 'Android','accept': '*/*','origin': 'https://accounts.google.com','sec-fetch-site': 'same-origin','sec-fetch-mode': 'cors','sec-fetch-dest': 'empty','referer': 'https://accounts.google.com/signup/v2/createusername?TL='+tl+'&continue=https%3A%2F%2Fwww.google.com%2Fsearch%3Fq%3Dgmail%26oq%3Dgmail%26gs_lcrp%3DEgZjaHJvbWUqBggAEEUYOzIGCAAQRRg7MgYIARBFGDwyBggCEEUYPDIGCAMQRRg8MgYIBBBFGDwyBggFEEUYPDIHCAYQABiPAjIHCAcQABiPAtIBCDEzNDRqMGo3qAIAsAIA%26client%3Dms-android-samsung-gj-rev1%26sourceid%3Dchrome-mobile%26ie%3DUTF-8%26ptid%3D19034382%26ptt%3D8%26fpts%3D1702839894853&dsh=S-1056100206%3A1702839899691979&ec=futura_srp_og_si_4980089_p&flowEntry=SignUp&flowName=GlifWebSignIn&hl=en&ifkv=ASKXGp2LNTeADceDHwvZ88X9gc_54ZaDzkh79Amfpidz7fs8bf7W9Bg4DPxctjTqcwNOC4UPSKdYig&theme=glif','accept-encoding': 'gzip, deflate, br','accept-language': 'en-GB,en;q=0.9'},data={'theme': 'glif','continue': 'https://accounts.google.com/ManageAccount?nc=1','f.req': f'["TL:{tl}","{email}",0,0,0,null,0,15856]','at': 'AFoagUV7ayPwNwcTzAJd8hG5bsUQ9UspxA:1695553167761','azt': 'AFoagUXaPxbm3Wne7jhJpuTr_KRQXXYYHQ:1695553167761','cookiesDisabled': 'false','deviceinfo': f'[null,null,null,[],null,"IQ",null,null,null,"GlifWebSignIn",null,[null,null,[],null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,[5,"77185425430.apps.googleusercontent.com",["https://www.google.com/accounts/OAuthLogin"],null,null,"{uui}",null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,5,null,null,[],null,null,null,null,[]],null,null,null,null,null,null,[],null,null,null,null,[]],null,null,null,null,1,null,0,1,"",null,null,2,2]','gmscoreversion': 'undefined','flowName': 'GlifWebSignIn','checkConnection': '','checkedDomains': 'youtube','pstMsg': '1'}).text
         if '"gf.uar",1' in response:tll();return goodstat
         elif '[[["er",null,null,null,null,400,null,null,null,3],["e",2,null,null,78]]]' in response:tll();gmail(email)
         else:return 'bad'
    except:gmail(email)

def yy(user):
     global goodaol,notav,badinsta,goodgmail,hit
     clear1()
     email2=user+'@gmail.com'
     if '_' not in user:
         a2=insta(email2)
         if a2 == None:yy(user)
         if a2 == goodstat:
             z1=gmail(user)
             if z1 == goodstat:
                  hit+=1
                  info1(user,hit,email2)
                  goodgmail+=1
                  print(f'''
{bright_green}- Gmail hits     :  {green}{goodgmail}
{yellow}- Not available  :  {red}{notav}
{red}- Unlinked insta :  {yellow}{badinsta}
{blue}- Email          :  {bright_cyan}{email2}

{purple}- By : telegram @Qredes / instagram @0s9s_
''')
                  
             else:
                  notav+=1
                  print(f'''
{bright_green}- Gmail hits     :  {green}{goodgmail}
{yellow}- Not available  :  {red}{notav}
{red}- Unlinked insta :  {yellow}{badinsta}
{blue}- Email          :  {bright_cyan}{email2}

{purple}- By : telegram @Qredes / instagram @0s9s_
''')
                  
         else:
              badinsta+=1
              print(f'''
{bright_green}- Gmail hits     :  {green}{goodgmail}
{yellow}- Not available  :  {red}{notav}
{red}- Unlinked insta :  {yellow}{badinsta}
{blue}- Email          :  {bright_cyan}{email2}

{purple}- By : telegram @Qredes / instagram @0s9s_
''')
     else:badinsta+=1
    
 
file=open(file_path, 'r').read().splitlines()
for user in file:
      try:
            if '@' in user:user=user.split('@')[0]
            yy(user)
      except:continue
