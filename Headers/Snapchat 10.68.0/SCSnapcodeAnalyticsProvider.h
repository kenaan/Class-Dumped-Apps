//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCUserSession;
@protocol SCSnapcodeAnalyticsProviderDelegate;

@interface SCSnapcodeAnalyticsProvider : NSObject
{
    SCUserSession *_userSession;
    id <SCSnapcodeAnalyticsProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSnapcodeAnalyticsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)provideTotalScanAnalyticsForScannableId:(id)arg1;
- (void)provideDailyScanAnalyticsForScannableId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithUserSession:(id)arg1;

@end
