import cv2

vid = cv2.VideoCapture("F:\myvid.mp4")

if(vid.isOpened() == False):
    print("Error in opening Vid")
    exit(1)
    
while(vid.isOpened()):
    ret,frame=vid.read()
    if ret == True:
        cv2.imshow('Frame',frame)
        key = cv2.waitKey(25000)
        if key == ord('q'):
            break
        else:
            break
        
        vid.release()
        cv2.destroyAllWindows()