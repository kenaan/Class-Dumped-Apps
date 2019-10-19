//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveBackTipRouter-Protocol.h"

@class HTSLiveAudienceViewController, NSString, UIViewController;
@protocol IESLiveEnvironment;

@interface IESLiveBackTipServiceImpl : NSObject <IESLiveBackTipRouter>
{
    HTSLiveAudienceViewController *_vc;
    HTSLiveAudienceViewController *_currentVc;
    id <IESLiveEnvironment> _target;
    UIViewController *_popVc;
}

@property(retain, nonatomic) UIViewController *popVc; // @synthesize popVc=_popVc;
@property(retain, nonatomic) id <IESLiveEnvironment> target; // @synthesize target=_target;
@property(nonatomic) __weak HTSLiveAudienceViewController *currentVc; // @synthesize currentVc=_currentVc;
@property(nonatomic) __weak HTSLiveAudienceViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (id)liveRootViewController:(id)arg1;
- (void)panRestore;
- (void)panBegin;
- (void)panDidPop:(id)arg1;
- (_Bool)isCanGoBackTopVc;
- (_Bool)isCanBackFinishVc:(id)arg1;
- (void)updateBackVcWithFinishVc:(id)arg1;
- (void)stopAudience;
- (void)closeFromOtherMethod:(id)arg1;
- (id)getViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

