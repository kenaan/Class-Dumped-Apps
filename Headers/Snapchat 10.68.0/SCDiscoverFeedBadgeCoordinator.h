//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDocObjectContext, SCExperimentManager, SCLazy, SCQueuePerformer, SCSessionRequestManager;
@protocol SCDiscoverFeedEndpointManaging;

@interface SCDiscoverFeedBadgeCoordinator : NSObject
{
    SCSessionRequestManager *_sessionRequestManager;
    SCExperimentManager *_experimentManager;
    SCLazy *_snapTokenProvider;
    SCDocObjectContext *_docObjectContext;
    SCQueuePerformer *_performer;
    id <SCDiscoverFeedEndpointManaging> _endpointManager;
    _Bool _hasPendingBadgeRequest;
    double _serverNextRequestTimestampInSec;
}

- (void).cxx_destruct;
- (void)_logBadgeInteractionGrapheneWithInteractionType:(long long)arg1 impressionTime:(double)arg2;
- (void)_logBadgeResponseGrapheneWithStatus:(_Bool)arg1 description:(id)arg2 latency:(double)arg3;
- (void)_logBadgeRequestGrapheneWithStatus:(_Bool)arg1 failureReason:(id)arg2;
- (void)_performBadgeInteractionDocChangesWithBadgeMetadata:(id)arg1 interactionTimestampInSec:(double)arg2 totalImpressionTimeInSec:(double)arg3 interactionType:(long long)arg4;
- (void)didInteractBadgeWithBadgeMetadata:(id)arg1 interactionTimestampInSec:(double)arg2 totalImpressionTimeInSec:(double)arg3 interactionType:(long long)arg4;
- (void)_performBadgeDeletionDocChanges;
- (void)_performBadgeResponseDocChanges:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleResponseForBadgeRequest:(id)arg1 response:(id)arg2 startTime:(double)arg3 data:(id)arg4 error:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_submitBadgeRequest:(id)arg1 snapToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sendBadgeRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchBadgeIfNecessaryWithPageSessionId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchBadgeIfNecessaryWithPageSessionId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSessionRequestManager:(id)arg1 experimentManager:(id)arg2 snapTokenProvider:(id)arg3 docObjectContext:(id)arg4;

@end

