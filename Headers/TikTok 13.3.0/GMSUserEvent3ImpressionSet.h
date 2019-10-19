//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_GMMUserEvent3;
@protocol GMSTimingClock;

@interface GMSUserEvent3ImpressionSet : NSObject
{
    id <GMSTimingClock> _timingClock;
    struct NSMutableDictionary *_pendingImpressions;
    unsigned long long _count;
    _Bool _shouldPostImpressionCountChangedNotification;
}

@property(nonatomic) _Bool shouldPostImpressionCountChangedNotification; // @synthesize shouldPostImpressionCountChangedNotification=_shouldPostImpressionCountChangedNotification;
- (void).cxx_destruct;
- (void)postCountChangedNotification;
- (void)addImpression:(id)arg1 toMutableSet:(id)arg2;
- (struct NSMutableDictionary *)impressions;
- (void)transferAllObjectsToSet:(id)arg1;
@property(readonly, nonatomic) GMSx_GMMUserEvent3 *userEvent;
- (void)removeAllObjects;
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)addEi:(id)arg1 ved:(id)arg2 veType:(int)arg3 isVisible:(_Bool)arg4 timestamp:(long long)arg5;
- (_Bool)addEi:(id)arg1 ved:(id)arg2 veType:(int)arg3 isVisible:(_Bool)arg4;
- (_Bool)addVeType:(int)arg1;
- (_Bool)add:(id)arg1 veType:(int)arg2;
- (_Bool)add:(id)arg1;
- (id)initWithTimingClock:(id)arg1;

@end

