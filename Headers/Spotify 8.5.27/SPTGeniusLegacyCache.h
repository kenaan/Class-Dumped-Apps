//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface SPTGeniusLegacyCache : NSObject
{
    _Bool _writeAtomically;
    NSString *_baseDirectory;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)diskCacheWithName:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) _Bool writeAtomically; // @synthesize writeAtomically=_writeAtomically;
@property(copy, nonatomic) NSString *baseDirectory; // @synthesize baseDirectory=_baseDirectory;
- (void).cxx_destruct;
- (void)loadObjectAsyncForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadObjectForKey:(id)arg1;
- (void)deleteObjectAsyncForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)deleteObjectForKey:(id)arg1;
- (void)saveObjectAsync:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)saveObject:(id)arg1 forKey:(id)arg2;
- (void)createSubDirectoriesForFilePath:(id)arg1;
- (id)initWithType:(long long)arg1 baseDirectory:(id)arg2;

@end

