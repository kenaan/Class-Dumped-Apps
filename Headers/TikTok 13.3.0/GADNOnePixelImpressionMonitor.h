//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNObserverCollection;

@interface GADNOnePixelImpressionMonitor : NSObject
{
    GADNObserverCollection *_observers;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _didPostImpression
}

- (void).cxx_destruct;
- (void)postImpressionNotificationForAd:(id)arg1;
- (id)initWithAd:(id)arg1;

@end

