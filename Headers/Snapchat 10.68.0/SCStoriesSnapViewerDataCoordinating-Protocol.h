//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDataCoordinating-Protocol.h"

@class NSArray, NSString, SCStoriesSnapViewerListInfo, SCStoriesSnapViewers;

@protocol SCStoriesSnapViewerDataCoordinating <SCDataCoordinating>
- (void)fetchViewerInfoWithSnapIds:(NSArray *)arg1;
- (SCStoriesSnapViewers *)viewersWithSnapId:(NSString *)arg1;
- (SCStoriesSnapViewerListInfo *)viewerListInfoWithSnapUniqueConsistentId:(NSString *)arg1;
@end
