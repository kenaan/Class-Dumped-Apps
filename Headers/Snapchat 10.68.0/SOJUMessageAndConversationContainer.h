//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCChatConversationV3;

@interface SOJUMessageAndConversationContainer : NSObject
{
    id _sojuMessage;
    SCChatConversationV3 *_conversation;
}

@property(readonly, nonatomic) SCChatConversationV3 *conversation; // @synthesize conversation=_conversation;
@property(readonly, nonatomic) id sojuMessage; // @synthesize sojuMessage=_sojuMessage;
- (void).cxx_destruct;
- (id)initWithSojuMessage:(id)arg1 conversation:(id)arg2;

@end

