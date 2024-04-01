import math
n =int(input());
r=int(input());
y = math.sin(math.pi*3.0/(2.0*n)) ;
z = math.sin(math.pi/(2.0*n));
v = math.sin(math.pi/(n));
# print(y)
ans = n * r * r * z * v * (1.0 / y) ;
#  "{:.15f}".format(ans)
print("{:.17f}".format(float(ans)));
# print(1061689977712182980.125000000000)