//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMonitor-Protocol.h"

@class HMDTTMonitor, NSString;
@protocol IESLiveEnvironment;

@interface IESLiveMonitorWrapper : NSObject <IESLiveMonitor>
{
    id <IESLiveEnvironment> _environment;
    HMDTTMonitor *_monitor;
}

@property(readonly, nonatomic) HMDTTMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveEnvironment> environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (void)trackService:(id)arg1 metric:(id)arg2 category:(id)arg3 extra:(id)arg4;
- (void)trackService:(id)arg1 status:(long long)arg2 extra:(id)arg3;
- (void)trackData:(id)arg1 logTypeStr:(id)arg2;
- (void)trackService:(id)arg1 value:(long long)arg2 extra:(id)arg3;
- (id)initWithMonitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

