//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEAwemeModel, NSDictionary, NSString, UIView;

@protocol AWEAdPromptViewManager <NSObject>
@property(readonly, nonatomic) _Bool isCardShowing;
@property(nonatomic) _Bool isModalShowing;
@property(copy, nonatomic) NSString *preloadModalWebURL;
@property(copy, nonatomic) NSString *adEventName;
@property(copy, nonatomic) NSString *referString;
@property(nonatomic) double cardBottomY;
@property(readonly, nonatomic) unsigned long long promptStyle;
@property(copy, nonatomic) CDUnknownBlockType preloadModalWebViewBlock;
@property(copy, nonatomic) CDUnknownBlockType tappedBlock;
@property(copy, nonatomic) CDUnknownBlockType expandingBlock;
@property(copy, nonatomic) CDUnknownBlockType displayingBlock;
@property(copy, nonatomic) CDUnknownBlockType promptViewDisappearingBlock;
@property(copy, nonatomic) CDUnknownBlockType promptViewAppearingBlock;
@property(retain, nonatomic) UIView *containerView;
@property(retain, nonatomic) AWEAwemeModel *model;
- (void)trackLoadFailEventWithADExtraData:(NSDictionary *)arg1;
- (void)resumeAnimation;
- (void)cancelAnimation;
- (_Bool)enableFadeInOutAnimation;
- (_Bool)isCardInUse;
- (_Bool)isDecouplingFromMask;
- (void)addObserverIfNeeded;
- (void)reset;
- (void)cancel;
- (void)dismiss:(_Bool)arg1;
- (void)showInView:(UIView *)arg1;
- (void)promptPOIWithDarkStyle:(_Bool)arg1;
- (void)promptGoods;
- (void)promptImmediately:(_Bool)arg1;
@end

