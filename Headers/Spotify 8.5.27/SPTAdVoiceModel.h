//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAdVoiceMetadata;

@interface SPTAdVoiceModel : NSObject
{
    _Bool _isSpeechReceived;
    long long _voiceState;
    SPTAdVoiceMetadata *_voiceAdMetadata;
    long long _timerID;
}

@property(readonly, nonatomic) _Bool isSpeechReceived; // @synthesize isSpeechReceived=_isSpeechReceived;
@property(readonly, nonatomic) long long timerID; // @synthesize timerID=_timerID;
@property(readonly, nonatomic) SPTAdVoiceMetadata *voiceAdMetadata; // @synthesize voiceAdMetadata=_voiceAdMetadata;
@property(readonly, nonatomic) long long voiceState; // @synthesize voiceState=_voiceState;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithUpdates:(CDUnknownBlockType)arg1;
- (id)initWithVoiceState:(long long)arg1 voiceAdMetadata:(id)arg2 timerID:(long long)arg3 isSpeechReceived:(_Bool)arg4;

@end
