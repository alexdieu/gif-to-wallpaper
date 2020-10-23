import os
from PIL import Image

# poor code to extract gif to png by alexdieu

global nframes
nframes = 0

def extractFrames(inGif, outFolder):
    frame = Image.open(inGif)
    while frame:
        global nframes
        frame.convert('RGB').save( '%s\\%s.jpg' % (outFolder, nframes ) , quality=100 )
        nframes += 1
        try:
            frame.seek( nframes )
        except EOFError:
            break;
    return True

os.system("del tmp_files\*.jpg")
extractFrames('wallpaper.gif', 'tmp_files')
