//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, HTSLiveImage, HTSLiveScreenChatMessage_Effect, HTSLiveUser, NSString;

@interface HTSLiveScreenChatMessage : GPBMessage
{
}

+ (id)descriptor;
@property(nonatomic) _Bool isFakeMessage;

// Remaining properties
@property(retain, nonatomic) HTSLiveImage *backgroundImage; // @dynamic backgroundImage;
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) HTSLiveScreenChatMessage_Effect *effect; // @dynamic effect;
@property(nonatomic) _Bool hasBackgroundImage; // @dynamic hasBackgroundImage;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) _Bool hasEffect; // @dynamic hasEffect;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(nonatomic) long long priority; // @dynamic priority;
@property(nonatomic) long long screenChatType; // @dynamic screenChatType;
@property(retain, nonatomic) HTSLiveUser *user; // @dynamic user;

@end

