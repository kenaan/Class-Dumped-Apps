//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SmBaseCollector, SmCoreCollector, SmSpecCollector;
@protocol OS_dispatch_queue;

@interface SmAntiFraud : NSObject
{
    SmBaseCollector *_baseCollector;
    SmCoreCollector *_coreCollector;
    SmSpecCollector *_specCollector;
    NSObject<OS_dispatch_queue> *_collectQueue;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)getDeviceInfoWithConfiguration:(id)arg1;
- (id)init;

@end

