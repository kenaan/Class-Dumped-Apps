//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesPlaybackFetching-Protocol.h"

@class NSMutableDictionary, NSString, SCExperimentManager, SCLazy, SCQueuePerformer, SCSessionRequestManager;

@interface SCStoriesTempPlaybackDataProvider : NSObject <SCStoriesPlaybackFetching>
{
    SCLazy *_summaryInfoProvider;
    SCLazy *_playbackDataProvider;
    SCSessionRequestManager *_sessionRequestManager;
    SCExperimentManager *_experimentManager;
    NSMutableDictionary *_usernameToTempStorySequenceMap;
    NSMutableDictionary *_usernameToTempSummaryInfoMap;
    NSMutableDictionary *_usernameToTempSOJUFriendStoriesMap;
    SCQueuePerformer *_dataUpdatePerformer;
    SCLazy *_readReceiptFetcher;
}

- (void).cxx_destruct;
- (id)_playbackMetadataMapOnQueueWithAllStoryIds:(id)arg1 existingMap:(id)arg2;
- (id)_playbackMetadataMapWithAllStoryIds:(id)arg1 existingMap:(id)arg2;
- (id)_fetchPlaybackSequenceWithUsername:(id)arg1;
- (void)_updatePlaybackInfoOnQueueWithUsername:(id)arg1 playbackSequence:(id)arg2 summaryInfo:(id)arg3 sojuFriendStories:(id)arg4;
- (void)_fetchPlaybackInfoRemotelyWithUsername:(id)arg1 playbackSequence:(id)arg2 summaryInfo:(id)arg3 sojuFriendStories:(id)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_completeFetchingStoriesMetadataWithSojuFriendStories:(id)arg1 username:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchStoriesMetadataWithUsername:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchPlaybackInfoSucceededWithUsername:(id)arg1 summaryInfo:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchPlaybackInfoOnQueueWithUsername:(id)arg1 summaryInfo:(id)arg2 error:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchPlaybackInfoWithUsername:(id)arg1 summaryInfo:(id)arg2 error:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storiesPlaybackMetadataForStoryIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)ourStoriesPlaybackSequenceByOurStoryId:(id)arg1;
- (id)mergedFriendStoryPlaybackSequenceByUsername:(id)arg1;
- (id)customStoriesPlaybackSequenceByPublicationId:(id)arg1;
- (id)customStoriesPlaybackSequenceByMischiefId:(id)arg1;
- (void)fetchFriendStoriesPlaybackInfoWithUsername:(id)arg1 forceFetchRemotely:(_Bool)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithStoriesSummaryInfoProvider:(id)arg1 playbackDataProvider:(id)arg2 readReceiptFetcher:(id)arg3 sessionRequestManager:(id)arg4 experimentManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

