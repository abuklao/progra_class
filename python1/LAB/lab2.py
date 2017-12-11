inputo = input("Sample input :")
app_not = inputo.find("not")
app_poor = inputo.find("poor")

if app_not >= 0 and app_poor >= 0:
    if app_not < app_poor:
        print(inputo.replace(inputo[app_not:app_poor+4],"good"))

