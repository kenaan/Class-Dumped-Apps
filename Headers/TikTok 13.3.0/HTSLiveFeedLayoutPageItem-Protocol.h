//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveFeedPageItem-Protocol.h"
#import "HTSLiveRoomCollectionDelegate-Protocol.h"

@class NSArray, NSMutableArray;

@protocol HTSLiveFeedLayoutPageItem <HTSLiveFeedPageItem, HTSLiveRoomCollectionDelegate>
@property(nonatomic) double contentOffsetY;
@property(readonly, nonatomic) unsigned long long layout;
- (_Bool)deleteIndexPaths:(NSArray *)arg1;
- (NSMutableArray *)rooms;
- (_Bool)allowDislike;
@end

