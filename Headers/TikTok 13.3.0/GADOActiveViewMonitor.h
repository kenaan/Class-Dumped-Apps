//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOViewBoundsMonitorDelegate-Protocol.h"
#import "GADOViewMonitorDelegate-Protocol.h"

@class GADOViewBoundsMonitor, GADOViewMonitor, NSDictionary, NSString, UIView;
@protocol GADOActiveViewMonitorDelegate, OS_dispatch_queue;

@interface GADOActiveViewMonitor : NSObject <GADOViewMonitorDelegate, GADOViewBoundsMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADOViewMonitor *_viewMonitor;
    GADOViewBoundsMonitor *_scrollMonitor;
    id <GADOActiveViewMonitorDelegate> _delegate;
    struct CGRect _monitoredViewVisibleBounds;
    _Bool _monitoredViewVisible;
    NSString *_adFormat;
    NSDictionary *_activeViewConfiguration;
    _Bool _overlayShown;
    UIView *_monitoredView;
}

@property(readonly, nonatomic) __weak UIView *monitoredView; // @synthesize monitoredView=_monitoredView;
- (void).cxx_destruct;
- (void)viewBoundsChanged:(id)arg1;
- (void)viewMonitorDidRefresh:(id)arg1;
@property __weak id <GADOActiveViewMonitorDelegate> delegate;
- (id)activeViewScrollState;
- (id)activeViewStateWithID:(unsigned long long)arg1 isMRAIDEnabled:(_Bool)arg2 unloaded:(_Bool)arg3;
- (id)scrollableSuperviewBoundsForView:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)sample;
- (void)handleOverlayHidden;
- (void)handleOverlayShown;
- (id)init;
- (id)initWithView:(id)arg1 adFormat:(id)arg2 isScrollAware:(_Bool)arg3 activeViewConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

