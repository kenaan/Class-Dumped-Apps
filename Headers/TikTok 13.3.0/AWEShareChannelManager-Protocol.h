//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWEShareChannel, NSArray, NSMutableArray, NSString;

@protocol AWEShareChannelManager <HTSService>
- (NSString *)titleForType:(long long)arg1;
- (unsigned long long)optionForChannel:(long long)arg1;
- (_Bool)isChannelAvailable:(long long)arg1;
- (NSMutableArray *)serverSortedSecondRowChannels:(NSMutableArray *)arg1;
- (NSArray *)channelsSupportShareType:(long long)arg1 inChannels:(NSArray *)arg2;
- (NSArray *)customizedGifChannelsForMask:(unsigned long long)arg1;
- (NSArray *)channelsForMask:(unsigned long long)arg1;
- (NSArray *)allChannels;
- (AWEShareChannel *)channelForType:(long long)arg1;
- (void)removeShareChannelForType:(long long)arg1;
- (void)addOrReplaceShareChannel:(AWEShareChannel *)arg1;
- (void)registerShareChannelType:(long long)arg1 options:(unsigned long long)arg2;
@end

