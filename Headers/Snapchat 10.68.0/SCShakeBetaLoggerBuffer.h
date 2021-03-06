//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCMutableCircularString, SCQueuePerformer;

@interface SCShakeBetaLoggerBuffer : NSObject
{
    SCMutableCircularString *_string;
    SCQueuePerformer *_performer;
    long long _capacity;
    NSString *_fileName;
}

@property(readonly, copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (void)getLogData:(CDUnknownBlockType)arg1;
- (void)appendLog:(id)arg1 key:(unsigned long long)arg2;
- (id)initWithCapacity:(long long)arg1 fileName:(id)arg2 performerLabel:(const char *)arg3 performerContext:(unsigned long long)arg4;

@end

