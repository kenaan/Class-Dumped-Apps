//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Session : NSObject
{
    _Bool _holdState;
    _Bool _sessionState;
    _Bool _conferenceState;
    _Bool _recvCallState;
    _Bool _isReferCall;
    _Bool _existEarlyMedia;
    _Bool _videoState;
    long long _sessionId;
    long long _originCallSessionId;
}

@property(nonatomic) _Bool videoState; // @synthesize videoState=_videoState;
@property(nonatomic) _Bool existEarlyMedia; // @synthesize existEarlyMedia=_existEarlyMedia;
@property(nonatomic) long long originCallSessionId; // @synthesize originCallSessionId=_originCallSessionId;
@property(nonatomic) _Bool isReferCall; // @synthesize isReferCall=_isReferCall;
@property(nonatomic) _Bool recvCallState; // @synthesize recvCallState=_recvCallState;
@property(nonatomic) _Bool conferenceState; // @synthesize conferenceState=_conferenceState;
@property(nonatomic) _Bool sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) _Bool holdState; // @synthesize holdState=_holdState;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
- (void)reset;
- (id)init;

@end

