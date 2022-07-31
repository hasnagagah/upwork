import os


#files_dictionary = os.listdir(<path>)
files_dictionary = os.listdir()
print(files_dictionary)

for file_dictionary in files_dictionary:
	#Do dictionary
	pass


for files_dictionary in os.listdir():
	if not files_dictionary.startswith('.'):
		#yield files_dictionary
		pass
