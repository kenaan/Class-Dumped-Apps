//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCComponentProtocol-Protocol.h"

@class AWEARTextInputViewController, AWEVideoRecorderARGestureDelegateModel, IESMMEffectMessage;

@protocol ACCRecordARComponentProtocol <ACCComponentProtocol>
@property(retain, nonatomic) AWEARTextInputViewController *arTextInputViewController;
@property(retain, nonatomic) AWEVideoRecorderARGestureDelegateModel *arGesturesDelegate;
- (void)dismissARTextInputViewController;
- (void)showARTextInputViewControllerWithEffectMessageModel:(IESMMEffectMessage *)arg1;
@end

