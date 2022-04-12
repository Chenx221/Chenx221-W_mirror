import requests


n = 1
pc = 231

url2p1 = "https://vip.ow365.cn/img?img="
url2p2 = "&tp="


r = requests.get(urlp1 + key + urlp2 + str(n), headers=headers)
while r.json()['PageIndex'] != pc:
    # print("https://vip.ow365.cn/img?img=" + key + "&tp=")

    filename = str(n).rjust(3, '0')

    n = r.json()['PageIndex']
    key = r.json()['NextPage']
    link = url2p1 + key + url2p2
    r = requests.get(link, headers=headers2)
    with open(filename + '.png', 'wb') as file:
        file.write(r.content)
    print(link)
    print("写入完成")
    r = requests.get(urlp1 + r.json()['NextPage'] + urlp2 + str(n))

