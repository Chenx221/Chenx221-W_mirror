import requests

url = "http://cachecloud.neea.cn/api/latest/results/cet?e=CET_202112_DANGCI"

with open('data1.txt', 'r', encoding='UTF-8') as f:
    data1 = f.read().splitlines()
with open('data2.txt', 'r', encoding='UTF-8') as f:
    data2 = f.read().splitlines()

t = 0

if len(data1) != len(data2):
    exit(6)

while t < len(data1):
    params = {
        'km': '1',
        'xm': data1[t],
        'no': data2[t],
        'v': ''}
    headers = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/98.0.4758.102 Safari/537.36',
        'Referer': 'http://cet.neea.cn/',
        'Origin': 'http://cet.neea.cn'}
    res = requests.get(url=url, headers=headers, params=params)

    params2 = {
        'km': '2',
        'xm': data1[t],
        'no': data2[t],
        'v': ''}
    headers2 = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/98.0.4758.102 Safari/537.36',
        'Referer': 'http://cet.neea.cn/',
        'Origin': 'http://cet.neea.cn'}
    res2 = requests.get(url=url, headers=headers2, params=params2)

    if res.json()['code'] == 200:
        print(res.json()['xm'] + " 四级 " + res.json()['score'])
    elif res2.json()['code'] == 200:
        print(res2.json()['xm'] + " 六级 " + res2.json()['score'])
    else:
        print(data1[t] + " 无数据")

    t = t + 1
    # print(res.json())
    # print(res2.json())
    # t = 200
