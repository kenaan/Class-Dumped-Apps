//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol SCStoriesGrapheneMetricsEmitting <NSObject>
- (void)logViewerInfoFetchLatency:(double)arg1 step:(NSString *)arg2;
- (void)logViewerInfoLevelRemoteSnapchattersToFetch:(long long)arg1;
- (void)logViewerInfoLevelSnapchattersToFetch:(long long)arg1;
- (void)logViewerInfoSnapchatterFetchResult:(NSString *)arg1;
- (void)logViewerInfoContainsUserOwnView;
- (void)logViewerInfoMissingSnapchatter:(NSString *)arg1 missingCount:(long long)arg2;
- (void)logViewerInfoFetchResult:(NSString *)arg1;
- (void)logViewerListResponseSmallerThanLocalViewerList:(NSString *)arg1;
- (void)logCustomStoriesToFetchByFetchType:(NSDictionary *)arg1 fullSync:(_Bool)arg2;
- (void)logUnidirectionalFriendStoriesToRemove:(long long)arg1;
- (void)logUnidirectionalFriendStoryFetchTotalUserCount:(long long)arg1 userWithStoryCount:(long long)arg2;
- (void)logUnidirectionalFriendStorySnapMissingClientId;
- (void)logTotalFriendsFeedItemCount:(long long)arg1 unidirectionalFriendsFeedItemCount:(long long)arg2 updateReason:(NSString *)arg3;
- (void)logStoriesFetchThrottled:(NSString *)arg1 identifier:(NSString *)arg2;
@end
