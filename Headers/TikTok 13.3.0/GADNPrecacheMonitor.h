//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNObserverCollection, GADNResourceBuffer, GADNVideoConfiguration, GADNWebAdView, NSTimer, NSURL;
@protocol OS_dispatch_queue;

@interface GADNPrecacheMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADNWebAdView *_adView;
    id _messageSource;
    GADNObserverCollection *_observers;
    GADNObserverCollection *_resourceBufferObservers;
    GADNResourceBuffer *_resourceBuffer;
    unsigned long long _byteThresholdToNotify;
    GADNVideoConfiguration *_videoConfiguration;
    NSURL *_videoSourceURL;
    NSTimer *_resourceBufferNotifyUpdateTimer;
    long long _lastNotifiedBytes;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)notifyPrecacheEvent:(id)arg1;
- (void)notifyPrecacheCompletedWithError:(id)arg1;
- (void)notifyPrecacheUpdate;
- (void)stopResourceBufferUpdateCheckTimer;
- (void)handleResourceBufferNotification:(id)arg1;
- (void)startPrecachingWithRequest:(id)arg1 fileURL:(id)arg2;
- (void)abort;
- (void)handlePrecacheAction:(id)arg1;
@property(readonly) NSURL *videoSourceURL;
@property(readonly) GADNResourceBuffer *resourceBuffer;
- (void)dealloc;
- (id)initWithWebAdView:(id)arg1 messageSource:(id)arg2;

@end

