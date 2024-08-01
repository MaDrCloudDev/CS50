from PIL import Image, ImageFilter

before = Image.open("./filter/bridge.bmp")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("out2.bmp")