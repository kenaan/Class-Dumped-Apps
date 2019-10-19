//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCService-Protocol.h"

@class NSMutableOrderedSet, NSSet, NSString, SCCloudFS, SCCloudSync, SCDataObjectContext, SCEncryptedContentManager, SCGalleryDataMutator, SCGalleryEncryptedDatabase, SCQueuePerformer;

@interface SCMemoriesLostDataRestorer : NSObject <SCService>
{
    SCCloudFS *_cloudFS;
    SCCloudSync *_cloudSync;
    SCGalleryEncryptedDatabase *_encryptedDatabase;
    SCEncryptedContentManager *_encryptedContentManager;
    SCGalleryDataMutator *_dataMutator;
    SCDataObjectContext *_dataObjectContext;
    unsigned long long _status;
    SCQueuePerformer *_performer;
    NSSet *_allSnapIdsFromDB;
    NSMutableOrderedSet *_allPotentialDanglingSnapIds;
    long long _snapIndexToProcess;
    unsigned long long _recoveredSnapsCount;
}

- (void).cxx_destruct;
- (void)_transitionToProcessOrScrubState:(unsigned long long)arg1 serviceTerm:(id)arg2;
- (void)_scrubDanglingCloudFSEntity:(id)arg1;
- (void)_processNextPotentialDanglingSnapId:(id)arg1;
- (void)_fetchAllSnapIdsWithEncryption:(id)arg1;
- (void)_fetchAllKnownSnapIds:(id)arg1;
- (void)_transitionToState:(unsigned long long)arg1 serviceTerm:(id)arg2;
- (void)runWithServiceTerm:(id)arg1;
- (id)dedicatedQueue;
- (id)defaultImmediateNotifier;
- (id)initWithCloudFS:(id)arg1 cloudSync:(id)arg2 encryptedDatabase:(id)arg3 encryptedContentManager:(id)arg4 dataMutator:(id)arg5 dataObjectContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
