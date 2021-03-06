//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCPotteryComponentProtocol-Protocol.h"

@class AWEPotteryViewController, NSString, UIVisualEffectView;
@protocol ACCCaptureComponentProtocol, ACCComponentBusProtocol, ACCComponentProtocol, ACCRecordButtonComponentProtocol, ACCRecordConfigPublishComponentProtocol, ACCRecordFlowComponentProtocol, ACCRecordRootComponentProtocol, ACCStickerComponentProtocol;

@interface ACCPotteryComponent : NSObject <ACCPotteryComponentProtocol>
{
    _Bool _isARPotteryMode;
    id <ACCComponentBusProtocol> _componentBus;
    AWEPotteryViewController *_potteryViewController;
    id <ACCRecordRootComponentProtocol> _root;
    id <ACCCaptureComponentProtocol> _capture;
    id <ACCStickerComponentProtocol> _sticker;
    id <ACCRecordButtonComponentProtocol> _recordBtn;
    id <ACCRecordFlowComponentProtocol> _recordFlow;
    id <ACCRecordConfigPublishComponentProtocol> _configPublishComponent;
    UIVisualEffectView *_blurEffectView;
}

@property(retain, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(readonly, nonatomic) __weak id <ACCRecordConfigPublishComponentProtocol> configPublishComponent; // @synthesize configPublishComponent=_configPublishComponent;
@property(readonly, nonatomic) __weak id <ACCRecordFlowComponentProtocol> recordFlow; // @synthesize recordFlow=_recordFlow;
@property(readonly, nonatomic) __weak id <ACCRecordButtonComponentProtocol> recordBtn; // @synthesize recordBtn=_recordBtn;
@property(readonly, nonatomic) __weak id <ACCStickerComponentProtocol> sticker; // @synthesize sticker=_sticker;
@property(readonly, nonatomic) __weak id <ACCCaptureComponentProtocol> capture; // @synthesize capture=_capture;
@property(readonly, nonatomic) __weak id <ACCRecordRootComponentProtocol> root; // @synthesize root=_root;
@property(nonatomic) _Bool isARPotteryMode; // @synthesize isARPotteryMode=_isARPotteryMode;
@property(retain, nonatomic) AWEPotteryViewController *potteryViewController; // @synthesize potteryViewController=_potteryViewController;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (void)clickRecordTipButton:(id)arg1;
- (id)rootVC;
- (void)showBlurViewAnimatedWithDuration:(double)arg1;
- (void)exitARPotteryMode;
- (void)enterARPotteryMode;
- (void)createPotteryViewController;
- (id)autoInjectComponentDictionaryOfconfigPublishComponent;
- (id)autoInjectComponentDictionaryOfrecordFlow;
- (id)autoInjectComponentDictionaryOfrecordBtn;
- (id)autoInjectComponentDictionaryOfsticker;
- (id)autoInjectComponentDictionaryOfcapture;
- (id)autoInjectComponentDictionaryOfroot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;

@end

