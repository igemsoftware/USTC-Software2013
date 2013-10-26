#!/usr/bin/python2.7
import web
import json
import time
import os
from ctypes import cdll

lib = cdll.LoadLibrary('./libtest.so')
class Select(object):
    def test(self):
        return lib.Foo_bar()

render = web.template.render('./')
urls = (
	'/api.json',"api"
	)
class contfile(object):
	output={"lock":"stop"}
	def __intt__(self):
		os.system("echo '"+json.dumps(output)+"'>./connect/select.json")
	def set(self,a,b):
		output[a]=b
		os.system("echo '"+json.dumps(output)+"'>./connect/select.json")
	def prt(self):
		print output
cf=contfile()
class api:
    def GET(self):
		i = web.input(find=None)
		if(i.find=="findbestbydata"):
			cf.set("lock","running")
			cf.set("result",Select().test())
			cf.set("lock","wait")
			cf.prt()
		return output
class index:
	def GET(self):
		render = web.template.render('./')
		return render.index()

output={"lock":"stop"}
os.system("echo '"+json.dumps(output)+"'>./connect/select.json")
if __name__ == "__main__":
    app = web.application(urls, globals())
    app.run()
