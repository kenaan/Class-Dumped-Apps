//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKFViewControllerDelegate-Protocol.h"

@class AKFAccountKit, NSString;

@interface AWESMSVerificationManager : NSObject <AKFViewControllerDelegate>
{
    AKFAccountKit *_accountKit;
    CDUnknownBlockType _completion;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) AKFAccountKit *accountKit; // @synthesize accountKit=_accountKit;
- (void).cxx_destruct;
- (void)viewControllerDidCancel:(id)arg1;
- (void)viewController:(id)arg1 didFailWithError:(id)arg2;
- (void)viewController:(id)arg1 didCompleteLoginWithAccessToken:(id)arg2 state:(id)arg3;
- (void)requestSMSVerificationWithCompletion:(CDUnknownBlockType)arg1;
- (id)verificationViewController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

