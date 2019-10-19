//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GADNSQLStorage : NSObject
{
    struct sqlite3 *_database;
    NSMutableDictionary *_values;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSMutableDictionary *_valuesToWrite;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)writeUpdatedValues;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (_Bool)openDatabaseAtURL:(id)arg1;
- (void)loadDatabaseValues;
- (void)dealloc;
- (id)init;

@end

