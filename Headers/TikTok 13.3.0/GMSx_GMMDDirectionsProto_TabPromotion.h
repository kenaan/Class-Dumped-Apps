//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTDComponentIcon, NSString;

@interface GMSx_GMMDDirectionsProto_TabPromotion : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasTabIndex; // @dynamic hasTabIndex;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(retain, nonatomic) GMSx_GMTTDComponentIcon *icon; // @dynamic icon;
@property(nonatomic) int tabIndex; // @dynamic tabIndex;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end

