//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface DDLoggingContextSet : NSObject
{
    struct _opaque_pthread_mutex_t _mutex;
    NSMutableSet *_set;
}

- (void).cxx_destruct;
- (_Bool)isInSet:(unsigned long long)arg1;
@property(readonly, copy) NSArray *currentSet;
- (void)removeFromSet:(unsigned long long)arg1;
- (void)addToSet:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

