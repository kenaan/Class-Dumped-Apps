//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, HTSLiveText, NSString;

@interface HTSLiveNoticeMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) HTSLiveText *displayText; // @dynamic displayText;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) long long noticeType; // @dynamic noticeType;
@property(copy, nonatomic) NSString *style; // @dynamic style;
@property(retain, nonatomic) HTSLiveText *tipsTitle; // @dynamic tipsTitle;
@property(copy, nonatomic) NSString *tipsUrl; // @dynamic tipsUrl;
@property(retain, nonatomic) HTSLiveText *title; // @dynamic title;
@property(retain, nonatomic) HTSLiveText *violationReason; // @dynamic violationReason;

@end

