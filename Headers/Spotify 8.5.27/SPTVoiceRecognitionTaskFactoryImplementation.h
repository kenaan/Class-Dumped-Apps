//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceRecognitionTaskFactory-Protocol.h"

@class NSString, SPTDataLoaderFactory, SPTNetworkConnectivityController, SPTVoiceTestManagerImplementation;
@protocol SPTOfflineModeState, SPTPlayer, SPTVoiceAudioRecorderFactory;

@interface SPTVoiceRecognitionTaskFactoryImplementation : NSObject <SPTVoiceRecognitionTaskFactory>
{
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTVoiceAudioRecorderFactory> _audioRecorderFactory;
    id <SPTPlayer> _player;
    SPTVoiceTestManagerImplementation *_testManager;
    SPTNetworkConnectivityController *_networkConnectivityController;
    id <SPTOfflineModeState> _offlineModeState;
}

@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) SPTVoiceTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTVoiceAudioRecorderFactory> audioRecorderFactory; // @synthesize audioRecorderFactory=_audioRecorderFactory;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
- (void).cxx_destruct;
- (id)createVoiceRecognitionTask;
- (id)initWithDataLoaderFactory:(id)arg1 audioRecorderFactory:(id)arg2 networkConnectivityController:(id)arg3 offlineModeState:(id)arg4 player:(id)arg5 testManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
