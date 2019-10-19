//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOViewMonitorDelegate-Protocol.h"

@class GADOViewMonitor, NSString, UIView;
@protocol GADOImpressionMonitorDelegate;

@interface GADOImpressionMonitor : NSObject <GADOViewMonitorDelegate>
{
    long long _impressionDefinition;
    UIView *_monitoredView;
    GADOViewMonitor *_viewMonitor;
    id <GADOImpressionMonitorDelegate> _delegate;
}

@property(nonatomic) __weak id <GADOImpressionMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewMonitorDidRefresh:(id)arg1;
- (void)startImpressionDefinitionVisible;
- (void)startImpressionDefinitionAdLoaded;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)didMonitorImpression;
- (id)init;
- (id)initWithView:(id)arg1 impressionDefinition:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

