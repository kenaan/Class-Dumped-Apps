//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GADNMemoryUtilizationMonitor : NSObject
{
    unsigned long long _initiallyAllocatedByteCount;
    unsigned long long _peakAllocatedByteCount;
    unsigned long long _currentlyAllocatedByteCount;
}

@property(readonly, nonatomic) unsigned long long currentlyAllocatedByteCount; // @synthesize currentlyAllocatedByteCount=_currentlyAllocatedByteCount;
@property(readonly, nonatomic) unsigned long long peakAllocatedByteCount; // @synthesize peakAllocatedByteCount=_peakAllocatedByteCount;
@property(readonly, nonatomic) unsigned long long initiallyAllocatedByteCount; // @synthesize initiallyAllocatedByteCount=_initiallyAllocatedByteCount;
- (void)update;
- (id)init;

@end

