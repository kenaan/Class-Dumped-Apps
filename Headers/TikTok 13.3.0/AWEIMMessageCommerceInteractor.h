//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMInteractorObject.h"

@class AWEIMMessageBaseViewController, AWEUserModel, NSString;

@interface AWEIMMessageCommerceInteractor : AWEIMInteractorObject
{
    _Bool _needDealPersonalInfoResponse;
    AWEUserModel *_fullDetailUser;
    long long _personalInfoResponseCount;
    NSString *_logExtra;
    NSString *_creativeId;
    NSString *_ext;
}

@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(nonatomic) _Bool needDealPersonalInfoResponse; // @synthesize needDealPersonalInfoResponse=_needDealPersonalInfoResponse;
@property(nonatomic) long long personalInfoResponseCount; // @synthesize personalInfoResponseCount=_personalInfoResponseCount;
@property(retain, nonatomic) AWEUserModel *fullDetailUser; // @synthesize fullDetailUser=_fullDetailUser;
- (void).cxx_destruct;
- (void)appDidEnterBackgroundNotification:(id)arg1;
- (void)appWillEnterForegroundNotification:(id)arg1;
- (id)extraTrackingInfo:(_Bool)arg1;
- (void)updatePersonalInfoResponseCountIfNeededWithMessageGroupArray:(id)arg1;
- (void)beforeSendTextMessage:(id)arg1 userInfo:(id)arg2;
- (void)doSendTextMessage:(id)arg1 userInfo:(id)arg2;
- (void)messageDataControllerDidModified;
- (void)didReceiveNewMessage:(id)arg1;
- (void)inputStateDidChange:(id)arg1;
- (void)inputMenuDidTapped;
- (void)viewControllerWillDealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) AWEIMMessageBaseViewController *vcParent;

@end

