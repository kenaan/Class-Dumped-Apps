//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADOGMSGHandler.h"

@protocol GADODelayLoadDelegate;

@interface GADODelayPageLoadGMSGHandler : GADOGMSGHandler
{
    long long _delayCount;
    id <GADODelayLoadDelegate> _delegate;
}

+ (id)actionBlockDictionary;
- (void).cxx_destruct;
- (void)handleDelayLoadWithParameters:(id)arg1;
- (void)adView:(id)arg1 delayPageLoadWithArguments:(id)arg2;
- (_Bool)shouldHandleNotificationSynchronously;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

