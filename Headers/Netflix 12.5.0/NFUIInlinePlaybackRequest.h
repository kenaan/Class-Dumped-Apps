//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PlaybackRequest.h"

@class NFUIPlayerLogger, NSString;
@protocol NFUIPlayerDelegate;

@interface NFUIInlinePlaybackRequest : PlaybackRequest
{
    NSString *_collectionId;
    long long _audioMixing;
    unsigned long long _autoPauseOptions;
    long long _initialPriority;
    unsigned long long _playerViewResizeMode;
    long long _loopCount;
    NFUIPlayerLogger<NFUIPlayerDelegate> *_logger;
    Class _loggerClass;
}

@property(retain, nonatomic) Class loggerClass; // @synthesize loggerClass=_loggerClass;
@property(retain, nonatomic) NFUIPlayerLogger<NFUIPlayerDelegate> *logger; // @synthesize logger=_logger;
@property(nonatomic) long long loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) unsigned long long playerViewResizeMode; // @synthesize playerViewResizeMode=_playerViewResizeMode;
@property(nonatomic) long long initialPriority; // @synthesize initialPriority=_initialPriority;
@property(nonatomic) unsigned long long autoPauseOptions; // @synthesize autoPauseOptions=_autoPauseOptions;
@property(nonatomic) long long audioMixing; // @synthesize audioMixing=_audioMixing;
@property(copy, nonatomic) NSString *collectionId; // @synthesize collectionId=_collectionId;
- (void).cxx_destruct;
- (id)init;

@end

