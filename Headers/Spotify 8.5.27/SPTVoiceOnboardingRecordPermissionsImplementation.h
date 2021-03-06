//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceOnboardingRecordPermissionsState-Protocol.h"

@class AVAudioSession, NSString;
@protocol SPTVoiceLoggerProtocol;

@interface SPTVoiceOnboardingRecordPermissionsImplementation : NSObject <SPTVoiceOnboardingRecordPermissionsState>
{
    AVAudioSession *_audioSession;
    id <SPTVoiceLoggerProtocol> _logger;
}

@property(readonly, nonatomic) id <SPTVoiceLoggerProtocol> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
- (void).cxx_destruct;
- (unsigned long long)recordPermission;
- (void)requestMicrophonePermissionsWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isCompleted) _Bool completed;
- (id)initWithAudioSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

