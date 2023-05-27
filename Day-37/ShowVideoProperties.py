import cv2

vid = cv2.VideoCapture("F:\myvid2.mp4")

print("CV_CAP-PROP_FRAME_WIDTH:",vid.get(cv2.CAP_PROP_FRAME_WIDTH))
print("CV_CAP-PROP_FRAME_HEIGHT:",vid.get(cv2.CAP_PROP_FRAME_HEIGHT))
print("CAP_PROP_FPS:",vid.get(cv2.CAP_PROP_FPS))
print("CAP_PROP_FRAME_COUNT:",vid.get(cv2.CAP_PROP_FRAME_COUNT))

