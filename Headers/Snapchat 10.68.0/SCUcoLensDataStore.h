//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensMetadataStoreListener-Protocol.h"
#import "SCUnifiedCameraObjectDataFetching-Protocol.h"

@class NSMutableDictionary, NSString, SCLazy, SCQueuePerformer;
@protocol SCLensDataFetcher;

@interface SCUcoLensDataStore : NSObject <SCLensMetadataStoreListener, SCUnifiedCameraObjectDataFetching>
{
    SCLazy *_ucoLensMetadataStore;
    id <SCLensDataFetcher> _lensDataFetcher;
    _Bool _isMetadataStoreSetUp;
    NSMutableDictionary *_lensIdToLensMap;
    SCQueuePerformer *_performer;
}

+ (id)_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)_storeDeallocatedError;
+ (id)_errorForNotFoundLensForId:(id)arg1;
- (void).cxx_destruct;
- (void)lensMetadataStore:(id)arg1 didUpdateLensesToPrefetch:(id)arg2;
- (void)lensMetadataStore:(id)arg1 didUpdateLenses:(id)arg2;
- (void)_updateMapFromLenses:(id)arg1;
- (void)_setUpMetadataStoreIfNeeded;
- (void)fetchUcoWithFilterId:(id)arg1 completion:(CDUnknownBlockType)arg2 completionPerformer:(id)arg3;
- (id)initWithUcoLensMetadataStore:(id)arg1 lensDataFetcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
