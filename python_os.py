import os 

for root, dirs, files in os.walk('/home/yuvrajksi199/Desktop/Pycharm/PySpark/'):
	for file in files:
		print(file)