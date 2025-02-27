#Kaleb Carrillo, How to get the time of day
import time

#first instsnce of time in programming
first_time = time.gmtime()
#print(first_time)

#current tine in sec
current= time.time()
#print(current) #seconds since 1 1970

#Current data and time like we see it normally
now = time.ctime(current)
#print(now)

# Get just a part of the time
local_time =time.localtime(current)
day = local_time.tm_wday
hour = local_time.tm_hour #millitary time (0-23
print(local_time)