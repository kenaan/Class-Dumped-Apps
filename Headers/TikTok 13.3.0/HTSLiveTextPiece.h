//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveTextFormat, HTSLiveTextPieceGift, HTSLiveTextPieceHeart, HTSLiveTextPiecePatternRef, HTSLiveTextPieceUser, NSString;

@interface HTSLiveTextPiece : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveTextFormat *format; // @dynamic format;
@property(retain, nonatomic) HTSLiveTextPieceGift *giftValue; // @dynamic giftValue;
@property(nonatomic) _Bool hasFormat; // @dynamic hasFormat;
@property(nonatomic) _Bool hasGiftValue; // @dynamic hasGiftValue;
@property(nonatomic) _Bool hasHeartValue; // @dynamic hasHeartValue;
@property(nonatomic) _Bool hasPatternRefValue; // @dynamic hasPatternRefValue;
@property(nonatomic) _Bool hasUserValue; // @dynamic hasUserValue;
@property(retain, nonatomic) HTSLiveTextPieceHeart *heartValue; // @dynamic heartValue;
@property(retain, nonatomic) HTSLiveTextPiecePatternRef *patternRefValue; // @dynamic patternRefValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) HTSLiveTextPieceUser *userValue; // @dynamic userValue;

@end

