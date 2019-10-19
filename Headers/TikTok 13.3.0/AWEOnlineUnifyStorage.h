//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AWEOnlineUnifyStorage : NSObject
{
    struct sqlite3 *database;
    struct sqlite3_stmt *getStatement;
    struct sqlite3_stmt *setStatement;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSString *_path;
}

@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (void).cxx_destruct;
- (void)cleanDatabaseWithLock:(_Bool)arg1;
- (void)cleanDatabase;
- (void)removeObjectsInDomain:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 domain:(id)arg3;
- (id)objectForKey:(id)arg1 domain:(id)arg2;
- (_Bool)createDatabaseWithRetryTimes:(unsigned long long)arg1;
- (void)ensureDatabase;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

