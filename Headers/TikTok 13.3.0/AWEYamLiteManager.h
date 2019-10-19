//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEYAMManagerProtocol-Protocol.h"

@class AWEYAMMonitorConfig, AWEYAMOOMCatcher, NSString;

@interface AWEYamLiteManager : NSObject <AWEYAMManagerProtocol>
{
    AWEYAMOOMCatcher *_oomCatcher;
    AWEYAMMonitorConfig *_config;
}

+ (void)reportPointPayload:(id)arg1 key:(id)arg2;
+ (void)p_handlerEvent:(id)arg1 enventInfo:(id)arg2;
+ (void)setYamEnable:(_Bool)arg1;
+ (_Bool)yamEnable;
+ (void)configYamWithDictionary:(id)arg1;
+ (id)sceneObjWithName:(id)arg1;
+ (void)stopMemoryMonitor;
+ (void)startMemoryMonitor;
+ (void)setupEnv;
+ (id)shareInstance;
@property(retain, nonatomic) AWEYAMMonitorConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) AWEYAMOOMCatcher *oomCatcher; // @synthesize oomCatcher=_oomCatcher;
- (void).cxx_destruct;
- (double)fetchCurrentMemoryUsageForMB;
- (void)unRegistMemoryMonitorCallBackIdentify:(id)arg1;
- (void)registMemoryMonitorCallBackIdentify:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)runOOMCatch:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

