//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface GADOContentQueue : NSObject
{
    NSMutableDictionary *_contents;
    NSMutableArray *_sequenceNumbers;
    unsigned long long _size;
}

- (void).cxx_destruct;
- (void)enqueueContent:(id)arg1;
- (void)deduplicate:(id)arg1;
- (id)contentWithSequenceNumber:(unsigned long long)arg1;
- (id)contentWithHighestScore;
- (id)init;
- (id)initWithQueueSize:(unsigned long long)arg1;

@end

