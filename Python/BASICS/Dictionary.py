# d={}
# #key and value pairs
# data ={}
# data
# {}
# data = {1:'navin',2:'kiran',3:'hash'}
# data
# {1: 'navin', 2: 'kiran', 3: 'hash'}
# #keys should be unique like indexing
# #to access
# data[3]
# # 'hash'
# data[4]
# # Traceback (most recent call last):
# #   File "<pyshell#7>", line 1, in <module>
# #     data[4]
# # KeyError: 4
# #no key 4
# data.items
# <built-in method items of dict object at 0x000001A9CF3916C0>
# data.get(1)
# 'navin'
# data.get(4)
# #get will give you none if there is no key there
# print(data.get(4))
# None
# data.get(1,'not found')
# 'navin'
# data.get(4,'not found')
# 'not found'
# # we can print the thing that is required by us only if it is not present then we can print the statement on us
# keys=['navin','kiran','harsh']
# values=['python','java','js']
# data = dict(zip(keys,values))
# data
# {'navin': 'python', 'kiran': 'java', 'harsh': 'js'}
# #like this we can merge two lists as dictionary
# data['kiran']
# 'java'
# data['monika']
# Traceback (most recent call last):
#   File "<pyshell#23>", line 1, in <module>
#     data['monika']
# KeyError: 'monika'
# data.['monika
      
# SyntaxError: unterminated string literal (detected at line 1)
# data['monika']='c'
      
# data
      
# {'navin': 'python', 'kiran': 'java', 'harsh': 'js', 'monika': 'c'}
# del data[
#     'harsh']
      
# data
      
# {'navin': 'python', 'kiran': 'java', 'monika': 'c'}
# #like this we can delete values and add data to a dictionaries
      
# prog={'js':'atom','cs':'vs','python':['pycharm','sublime'],'java':{'jse':'netbeans','jee':'eclipse'}}
      
# prog
      
# {'js': 'atom', 'cs': 'vs', 'python': ['pycharm', 'sublime'], 'java': {'jse': 'netbeans', 'jee': 'eclipse'}}
# prog['js']
      
# 'atom'
# prog['python']
      
# ['pycharm', 'sublime']
# prog['python'][1]
      
# 'sublime'
# prog['java']
      
# {'jse': 'netbeans', 'jee': 'eclipse'}
# prog['java']['jee']
      
# 'eclipse'
# prog['java']['jse']
      
# 'netbeans'