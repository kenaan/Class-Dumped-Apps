//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCAMapMapReply;

@interface SCMapReplySessionLogger : NSObject
{
    SCAMapMapReply *_event;
    long long _numChatsSentWithScreenshot;
    long long _numChatsSentWithoutScreenshot;
    long long _numSnapsSent;
}

- (void).cxx_destruct;
- (void)sessionEnded;
- (void)didSendSnap;
- (void)didSendTextWithScreenshot:(_Bool)arg1;
- (void)didEnterFullChat;
- (id)initWithType:(long long)arg1 source:(long long)arg2 didHaveUnreadMessageFromUser:(_Bool)arg3 mapSessionId:(unsigned long long)arg4;

@end

