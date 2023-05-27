import cv2

vid = cv2.VideoCapture(0)

frame_width = int(vid.get(3))
frame_height = int(vid.get(4))

size = (frame_width, frame_height)

result = cv2.VideoWriter('myfile.avi',cv2.VideoWriter_fourcc(*'MJPG'),30,size)

while(True):
    ret,frame=vid.read()
    if ret == True:
        result.write(frame)
        cv2.imshow('Frame',frame)
        
        key = cv2.waitKey(1)
        if key == ord('q'):
            break
        else:
            break