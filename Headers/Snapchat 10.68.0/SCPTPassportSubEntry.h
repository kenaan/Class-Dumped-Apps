//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMT1StickerID;

@interface SCPTPassportSubEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *entryId; // @dynamic entryId;
@property(nonatomic) _Bool hasSticker; // @dynamic hasSticker;
@property(retain, nonatomic) SCMT1StickerID *sticker; // @dynamic sticker;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

