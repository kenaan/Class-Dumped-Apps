//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNAdVerificationReporter, GADNObserverCollection, GADNWebViewController;

@interface GADNAdVerificationNativeMonitor : NSObject
{
    GADNObserverCollection *_observers;
    GADNWebViewController *_webViewController;
    GADNAdVerificationReporter *_adVerificationReporter;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _beginAdSessionExecuted
}

- (void).cxx_destruct;
- (void)trackExpandView:(id)arg1;
- (void)setMonitoredView:(id)arg1;
- (void)adDidMakeImpression;
- (void)beginAdSession;
- (void)dealloc;
- (id)initWithAd:(id)arg1 webViewController:(id)arg2 mediaType:(long long)arg3 partnerName:(id)arg4;

@end

