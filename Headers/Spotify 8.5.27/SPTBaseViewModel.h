//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTViewModel-Protocol.h"

@class NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, SPTDataLoader;
@protocol SPTBaseViewModelDelegate, SPTOfflineModeState;

@interface SPTBaseViewModel : NSObject <SPTOfflineModeStateObserver, SPTDataLoaderDelegate, SPTViewModel>
{
    _Bool _hasSuccessfullyLoadedData;
    _Bool _enabled;
    NSDictionary *_requestURLDictionary;
    id <SPTBaseViewModelDelegate> _delegate;
    id <SPTOfflineModeState> _offlineModeState;
    NSMutableArray *_mutablePendingRequestKeys;
    NSMutableDictionary *_mutableSuccessfulRequestKeysAndDatas;
    NSMutableDictionary *_mutableFailedRequestKeysAndErrors;
    SPTDataLoader *_dataLoader;
    NSMapTable *_requestKeysToRequestTokens;
}

@property(readonly, nonatomic) NSMapTable *requestKeysToRequestTokens; // @synthesize requestKeysToRequestTokens=_requestKeysToRequestTokens;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) NSMutableDictionary *mutableFailedRequestKeysAndErrors; // @synthesize mutableFailedRequestKeysAndErrors=_mutableFailedRequestKeysAndErrors;
@property(retain, nonatomic) NSMutableDictionary *mutableSuccessfulRequestKeysAndDatas; // @synthesize mutableSuccessfulRequestKeysAndDatas=_mutableSuccessfulRequestKeysAndDatas;
@property(retain, nonatomic) NSMutableArray *mutablePendingRequestKeys; // @synthesize mutablePendingRequestKeys=_mutablePendingRequestKeys;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) _Bool hasSuccessfullyLoadedData; // @synthesize hasSuccessfullyLoadedData=_hasSuccessfullyLoadedData;
@property(nonatomic) __weak id <SPTBaseViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *requestURLDictionary; // @synthesize requestURLDictionary=_requestURLDictionary;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)notifyLoading:(_Bool)arg1 forRequestKey:(id)arg2;
- (void)invokeDelegateForOverallFailure;
- (void)invokeDelegateForOverallSuccess;
- (void)invokeDelegateWithData:(id)arg1 requestKey:(id)arg2;
- (void)invokeDelegateWithError:(id)arg1 requestKey:(id)arg2;
- (void)handleFailureWithResponse:(id)arg1 requestKey:(id)arg2 error:(id)arg3 wasOfflineError:(_Bool)arg4;
- (void)handleSuccessWithData:(id)arg1 requestKey:(id)arg2;
- (id)parseResponse:(id)arg1 requestKey:(id)arg2 error:(id *)arg3;
- (id)failedRequestKeysAndErrors;
- (id)successfulRequestKeysAndDatas;
- (id)pendingRequestKeys;
- (_Bool)isLoading;
@property(readonly, nonatomic, getter=isOffline) _Bool offline;
- (void)requestDataForKey:(id)arg1;
- (void)requestData;
- (id)initWithRequestURLDictionary:(id)arg1 offlineModeState:(id)arg2 dataLoader:(id)arg3;
- (id)initWithRequestURLDictionary:(id)arg1 dataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

