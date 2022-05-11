from PIL import Image

image = Image.open("F:\ca11l-full2\ca11l-full_000a.png")
image.show()

print(image.format)
print(image.size)
print(image.mode)