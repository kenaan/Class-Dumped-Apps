//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TTTrackerCleaner : NSObject
{
    unsigned long long _fromType;
    NSObject<OS_dispatch_queue> *_sendingQueue;
}

+ (void)setupABTestHandler:(CDUnknownBlockType)arg1;
+ (id)sharedCleaner;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sendingQueue; // @synthesize sendingQueue=_sendingQueue;
@property(nonatomic) unsigned long long fromType; // @synthesize fromType=_fromType;
- (void).cxx_destruct;
- (void)unpackTracks:(id)arg1 trackIDs:(id)arg2 result:(id)arg3 eventName:(id)arg4;
- (void)cleanOutdatedTracks;
- (void)startClean:(unsigned long long)arg1;
- (id)init;

@end

