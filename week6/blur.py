from PIL import Image, ImageFilter

before = Image.open("./filter/bridge.bmp")
after = before.filter(ImageFilter.BoxBlur(20))
after.save("out.bmp")