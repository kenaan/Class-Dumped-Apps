//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTLoggedLink, NSString;

@interface GMSx_GMTTLinkSentence : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLink; // @dynamic hasLink;
@property(nonatomic) _Bool hasPostLinkText; // @dynamic hasPostLinkText;
@property(nonatomic) _Bool hasPreLinkText; // @dynamic hasPreLinkText;
@property(retain, nonatomic) GMSx_GMTTLoggedLink *link; // @dynamic link;
@property(copy, nonatomic) NSString *postLinkText; // @dynamic postLinkText;
@property(copy, nonatomic) NSString *preLinkText; // @dynamic preLinkText;

@end

