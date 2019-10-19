//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VEProcessSampleDelegate-Protocol.h"

@class NSLock, NSMutableArray, NSString, NSThread;
@protocol VEProcessSampleDelegate;

@interface VEAsyncQueueUnit : NSObject <VEProcessSampleDelegate>
{
    NSString *_route;
    id <VEProcessSampleDelegate> _downstream;
    NSString *_name;
    NSMutableArray *_sampleDataQueue;
    NSLock *_sampleDataQueueLock;
    NSThread *_asyncThread;
    unsigned long long _asyncThreadStatus;
    NSMutableArray *_audioSampleDataQueue;
    NSLock *_audioSampleDataQueueLock;
    long long _maxQueueCount;
}

@property(nonatomic) long long maxQueueCount; // @synthesize maxQueueCount=_maxQueueCount;
@property(retain, nonatomic) NSLock *audioSampleDataQueueLock; // @synthesize audioSampleDataQueueLock=_audioSampleDataQueueLock;
@property(retain, nonatomic) NSMutableArray *audioSampleDataQueue; // @synthesize audioSampleDataQueue=_audioSampleDataQueue;
@property(nonatomic) unsigned long long asyncThreadStatus; // @synthesize asyncThreadStatus=_asyncThreadStatus;
@property(retain, nonatomic) NSThread *asyncThread; // @synthesize asyncThread=_asyncThread;
@property(retain, nonatomic) NSLock *sampleDataQueueLock; // @synthesize sampleDataQueueLock=_sampleDataQueueLock;
@property(retain, nonatomic) NSMutableArray *sampleDataQueue; // @synthesize sampleDataQueue=_sampleDataQueue;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <VEProcessSampleDelegate> downstream; // @synthesize downstream=_downstream;
@property(retain, nonatomic) NSString *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (id)requstSampleData:(unsigned long long)arg1;
- (_Bool)processSampleData:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)dequeueSampleBufFunc;
- (void)stopThread;
- (void)startThread;
- (void)initBufferQueue;
- (void)finish;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

