def convertTemperature():
    celsius = abs(float(input("Insira um numero: ")))
    temp = []
    temp.append(celsius + 273.15)
    temp.append((celsius * 1.80) + 32.00)
    print(temp)



"""
kelvin = celsius + 273.15
fahrenheit = celsius * 1.80 + 32.00

"""

convertTemperature()