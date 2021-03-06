//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWECameraPreviewContainerView, AWEVideoRecorderARGestureDelegateModel, IESMMRecoder, IESMMStoryConfig, NSMutableSet, UIView;
@protocol AWEStoryCameraManagerDelegate;

@interface AWEStoryCameraManager : NSObject
{
    id <AWEStoryCameraManagerDelegate> _delegate;
    UIView *_cameraPreviewView;
    IESMMRecoder *_camera;
    double _videoScale;
    double _loopCount;
    double _frameRate;
    NSMutableSet *_sdkGesturesSet;
    AWEVideoRecorderARGestureDelegateModel *_arGesturesDelegate;
    AWECameraPreviewContainerView *_cameraPreviewContainerView;
    IESMMStoryConfig *_storyConfig;
    unsigned long long _recordMode;
}

@property(nonatomic) unsigned long long recordMode; // @synthesize recordMode=_recordMode;
@property(retain, nonatomic) IESMMStoryConfig *storyConfig; // @synthesize storyConfig=_storyConfig;
@property(retain, nonatomic) AWECameraPreviewContainerView *cameraPreviewContainerView; // @synthesize cameraPreviewContainerView=_cameraPreviewContainerView;
@property(retain, nonatomic) AWEVideoRecorderARGestureDelegateModel *arGesturesDelegate; // @synthesize arGesturesDelegate=_arGesturesDelegate;
@property(retain, nonatomic) NSMutableSet *sdkGesturesSet; // @synthesize sdkGesturesSet=_sdkGesturesSet;
@property(nonatomic) double frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) double loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) double videoScale; // @synthesize videoScale=_videoScale;
@property(retain, nonatomic) IESMMRecoder *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) UIView *cameraPreviewView; // @synthesize cameraPreviewView=_cameraPreviewView;
@property(nonatomic) __weak id <AWEStoryCameraManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)camera:(id)arg1 willFocusAtPoint:(struct CGPoint)arg2;
- (void)cameraDidRecordReady;
- (void)camera:(id)arg1 didPauseVideoRecordingWithError:(id)arg2;
- (void)camera:(id)arg1 didStartVideoRecordingWithError:(id)arg2;
- (void)camera:(id)arg1 didStopVideoCaptureWithError:(id)arg2;
- (void)camera:(id)arg1 didStartVideoCaptureWithError:(id)arg2;
- (void)handleSDKLongPressGesture:(id)arg1;
- (void)addSDKLongPressGestureRecognizer;
- (void)handleSDKTapGesture:(id)arg1;
- (void)addSDKTapGestureRecognizer;
- (void)handleSDKRotationGesture:(id)arg1;
- (void)addSDKRotationGestureRecognizer;
- (void)handleSDKPinchGesture:(id)arg1;
- (void)addSDKPinchGestureRecognizer;
- (void)handleSDKPanGesture:(id)arg1;
- (void)addSDKPanGestureRecognizer;
- (void)addGesturesForSDK;
- (void)updatePreviewViewOrientation;
- (struct CGRect)cameraPreviewViewFrame;
- (void)generateStoryConfig;
- (void)resetStoryConfig;
- (void)enableSDKGestures;
- (void)disableSDKGesturesAndDisableTapFocus:(_Bool)arg1;
- (void)stopAudioCapture;
- (void)startAudioCapture;
- (void)stopVideoCapture;
- (void)startVideoCapture;
- (void)createCameraWithVideoData:(id)arg1;
- (void)switchToBoomerangMode;
- (void)switchToTextMode;
- (void)switchToNormalMode;
- (void)switchToMode:(unsigned long long)arg1;
- (id)init;

@end

