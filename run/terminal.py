#Ocean Terminal
#By Dragon Ocean 2022
import os,platform,time
admin="false"
ospl=platform.system()
def version():
	print("Ocean Terminal 1.0.0 By Dragon Ocean")
def ocexit():
	exit()
def changemode():
	if admin=="false":
		print("ocean@ocean: $ ",end="")
	elif admin=="true":
		print("root@ocean: $ ",end="")
def clearscreen():
	if ospl=="Windows":
		os.system("cls")
	elif ospl=="Linux":
		os.system("clear")
	else:
		os.system("clear")
def gettime():
	getnow=time.localtime()
	nowtime=time.strftime("%Y-%m-%d %H:%M:%S")
	print(nowtime)
while True:
	changemode()
	todo=input()
	if todo=="version":
		version()
	elif todo=="exit":
		if admin=="true":
			admin="false"
		else:
			ocexit()
	elif todo=="su":
		admin="true"
	elif todo=="sudo -i":
		admin="true"
	elif todo=="su root":
		admin="true"
	elif todo=="clear":
		clearscreen()
	elif todo=="time":
		gettime()
	elif todo=="date":
		gettime()
	elif todo=="sudo":
		
	else:
		print("Ocean:Command '"+str(todo)+"' not found.")
