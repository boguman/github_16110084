!pip install twilio

from twilio.rest import Client

account_sid = 'AC4d43aa42bcd517487a133de0ba3e8ed3'
auth_token = '70703a627e06f6db77393a27137b8555'
client = Client(account_sid, auth_token)

message = client.messages \
                .create(
                  body="우편이 도착하였습니다.", #메세지 내용
                  from_='+12055286335',          #송신 번호
                  to='+821092071520'             #수신 번호
                )

print(message.sid)
