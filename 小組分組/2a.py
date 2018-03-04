with open("2a.txt") as fh:
    data = fh.readlines() #逐行讀入
    data= [w.replace('\n', '') for w in data]    #將跳行字符取代為空白
    
team_list = list() #建立空list

for i in range(len(data)):  
    team = data[i].split()  #先將每一排切出來
    for g in range(0,len(team),3):  
        b = team[g:g+3]   #每三位學員為一組
        team_list.append(b) #加入先前建立的空list
        
for num in range(len(team_list)):  #將資料填上組別編號
    print('第' + str(num+1) + '組:' + str(team_list[num]))
