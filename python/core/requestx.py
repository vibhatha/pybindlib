import pybindlib as l

r = l.Request('m1', 4, 'Hello')

print(r.getName(), r.getBufSize(), r.getMessage())