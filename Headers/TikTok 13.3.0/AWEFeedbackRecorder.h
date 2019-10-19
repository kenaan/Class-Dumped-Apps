//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEStorage, FMDatabase, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWEFeedbackRecorder : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    AWEStorage *_storage;
    unsigned long long _count;
    NSMutableArray *_parsers;
    FMDatabase *_db;
}

+ (_Bool)enable;
+ (id)sharedRecorder;
+ (void)recordForVideoDownload:(id)arg1 status:(long long)arg2 code:(long long)arg3;
+ (void)recordForCameraInit:(id)arg1 status:(long long)arg2 videoAuth:(long long)arg3 audioAuth:(long long)arg4;
+ (void)recordForVideoRecord:(id)arg1 status:(long long)arg2 code:(long long)arg3;
+ (void)recordForVideoUpload:(id)arg1 code:(long long)arg2 stage:(long long)arg3;
+ (void)awe_studioRegisterParsers;
@property(retain, nonatomic) FMDatabase *db; // @synthesize db=_db;
@property(retain, nonatomic) NSMutableArray *parsers; // @synthesize parsers=_parsers;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) AWEStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)fetchFromDB;
- (_Bool)insertRecordToDB:(long long)arg1 label:(id)arg2 code:(long long)arg3 message:(id)arg4;
- (_Bool)initDB;
- (id)dbPath;
- (id)collect;
- (_Bool)cleanUp;
- (void)registerParsers:(id)arg1;
- (id)keyForType:(long long)arg1;
- (void)recordForType:(long long)arg1 label:(id)arg2 code:(long long)arg3 message:(id)arg4;
- (id)init;

@end

