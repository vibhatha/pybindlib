import pybindlib as plib
import metalib as mlib

r = plib.Request('m1', 4, 'Hello')

print(r.getName(), r.getBufSize(), r.getMessage())

i = mlib.Info('Hello World')
print(i.name)