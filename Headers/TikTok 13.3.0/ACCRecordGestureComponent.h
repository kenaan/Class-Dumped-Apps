//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCRecordGestureComponentProtocol-Protocol.h"
#import "ACCStickerComponentMessageProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableSet, NSString, UITapGestureRecognizer;
@protocol ACCComponentBusProtocol, ACCComponentProtocol;

@interface ACCRecordGestureComponent : NSObject <UIGestureRecognizerDelegate, ACCRecordGestureComponentProtocol, ACCStickerComponentMessageProtocol>
{
    _Bool _hasAddGesture;
    id <ACCComponentBusProtocol> _componentBus;
    NSMutableSet *_sdkGesturesSet;
    NSMutableSet *_normalRecordGesturesSet;
    UITapGestureRecognizer *_cameraTapGesture;
}

@property(nonatomic) _Bool hasAddGesture; // @synthesize hasAddGesture=_hasAddGesture;
@property(retain, nonatomic) UITapGestureRecognizer *cameraTapGesture; // @synthesize cameraTapGesture=_cameraTapGesture;
@property(retain, nonatomic) NSMutableSet *normalRecordGesturesSet; // @synthesize normalRecordGesturesSet=_normalRecordGesturesSet;
@property(retain, nonatomic) NSMutableSet *sdkGesturesSet; // @synthesize sdkGesturesSet=_sdkGesturesSet;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (void)updateGestureStateForSticker:(id)arg1;
- (void)msg_didSetCurrentSticker:(id)arg1 oldSticker:(id)arg2;
- (void)msg_didApplyLocalSticker:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleSDKLongPressGesture:(id)arg1;
- (void)handleSDKDoubleTapGesture:(id)arg1;
- (void)handleSDKTapGesture:(id)arg1;
- (void)handleSDKRotationGesture:(id)arg1;
- (void)handleSDKPinchGesture:(id)arg1;
- (void)handleSDKPanGesture:(id)arg1;
- (void)addSDKLongPressGestureRecognizer;
- (void)addSDKTapGestureRecognizer;
- (void)addSDKRotationGestureRecognizer;
- (void)addSDKPinchGestureRecognizer;
- (void)addSDKPanGestureRecognizer;
- (void)addGesturesForSDK;
- (void)handlePinchGestureForZoom:(id)arg1;
- (void)addDoubleTapGestureWithView:(id)arg1;
- (void)addDoubleTapGesture;
- (void)handleCameraTapGesture:(id)arg1;
- (void)addSingleTapGestureWithView:(id)arg1;
- (void)addSingleTapGesture;
- (void)addPinchGestureForZoomWithView:(id)arg1;
- (void)addPinchGestureForZoom;
- (void)addGestures;
- (void)containerViewControllerPostDidLoad;
- (void)disableSDKGesturesAndDisableTapFocus:(_Bool)arg1;
- (void)disableNormalRecordGestures;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;

@end

