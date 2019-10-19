//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensUnlockerProtocol-Protocol.h"

@class NSString, SCQueuePerformer;
@protocol SCLensByIdRetrievable, SCRequestManager, SCUnlockableDataStoreWriter;

@interface SCLensSocialUnlockerImpl : NSObject <SCLensUnlockerProtocol>
{
    id <SCRequestManager> _requestManager;
    id <SCLensByIdRetrievable> _localLensCache;
    id <SCUnlockableDataStoreWriter> _dataStoreWriter;
    SCQueuePerformer *_queuePerformer;
}

+ (id)_requestWithLensID:(id)arg1 shouldUnlock:(_Bool)arg2;
- (void).cxx_destruct;
- (void)_requestDidSucceed:(id)arg1 withResponse:(id)arg2 data:(id)arg3 shouldAddToUnlockStore:(_Bool)arg4 expirationDate:(id)arg5 duration:(double)arg6 completion:(CDUnknownBlockType)arg7 callbackQueue:(id)arg8;
- (void)_performAction:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3 defaultErrorHandler:(CDUnknownBlockType)arg4;
- (void)performAction:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (id)initWithRequestManager:(id)arg1 localLensCache:(id)arg2 dataStoreWriter:(id)arg3 queuePerformer:(id)arg4;
- (id)initWithRequestManager:(id)arg1 localLensCache:(id)arg2 dataStoreWriter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
