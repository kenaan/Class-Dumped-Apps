//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface TWTRPersistentStore : NSObject
{
    unsigned long long _totalSize;
    NSString *_path;
    NSMutableArray *_items;
    unsigned long long _maxSize;
}

@property(nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
- (void).cxx_destruct;
- (unsigned long long)indexOfObjectForKey:(id)arg1;
- (void)pruneStoredObjects;
- (_Bool)isValidPath:(id)arg1;
- (_Bool)isValidData:(id)arg1;
- (_Bool)isValidValue:(id)arg1;
- (id)pathForKey:(id)arg1;
- (void)parseStoredObjects;
- (_Bool)createStoreStructure;
- (void)removeAllObjects;
- (_Bool)removeObjectForKey:(id)arg1;
- (void)cleanCorruptItemAtPath:(id)arg1 withIndex:(unsigned long long)arg2 usingFileManager:(id)arg3;
- (id)objectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithPath:(id)arg1 maxSize:(unsigned long long)arg2;

@end

