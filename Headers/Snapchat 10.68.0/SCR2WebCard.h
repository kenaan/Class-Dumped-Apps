//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCR2Thumbnail;

@interface SCR2WebCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *displayCardType; // @dynamic displayCardType;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) NSString *targetURL; // @dynamic targetURL;
@property(retain, nonatomic) SCR2Thumbnail *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int uiType; // @dynamic uiType;

@end

