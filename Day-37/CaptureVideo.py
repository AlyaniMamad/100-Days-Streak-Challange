import cv2

vid = cv2.VideoCapture(0)

if(vid.isOpened() == False):
    print("Error in opening Vid")
    exit(1)
    
while(True):
    ret,frame=vid.read()
    if ret == True:
        cv2.imshow('Frame',frame)
        key = cv2.waitKey(1)
        if key == ord('q'):
            break
        else:
            break
        
        vid.release()
        cv2.destroyAllWindows()