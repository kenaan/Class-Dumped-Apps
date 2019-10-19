//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMDRecordStoreObject-Protocol.h"

@class NSDictionary, NSString;

@interface HMDMonitorRecord : NSObject <HMDRecordStoreObject>
{
    unsigned long long _localID;
    NSString *_sessionID;
    double _timestamp;
    double _inAppTime;
    NSString *_scene;
    unsigned long long _isReported;
    NSString *_business;
    NSDictionary *_filters;
    NSDictionary *_extraInfos;
}

+ (id)aggregateDataWithRecords:(id)arg1;
+ (id)newRecord;
+ (unsigned long long)cleanupWeight;
+ (id)reportDataForRecords:(id)arg1;
+ (id)aggregateDataForRecords:(id)arg1;
+ (id)tableName;
@property(retain, nonatomic) NSDictionary *extraInfos; // @synthesize extraInfos=_extraInfos;
@property(retain, nonatomic) NSDictionary *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
@property(nonatomic) unsigned long long isReported; // @synthesize isReported=_isReported;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) double inAppTime; // @synthesize inAppTime=_inAppTime;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long localID; // @synthesize localID=_localID;
- (void).cxx_destruct;
- (id)reportDictionary;
- (double)value;
- (long long)compare:(id)arg1 forKeyPath:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

