//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ExternalSongStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *externalSongKey; // @dynamic externalSongKey;
@property(copy, nonatomic) NSString *h5URL; // @dynamic h5URL;
@property(nonatomic) _Bool hasExternalSongKey; // @dynamic hasExternalSongKey;
@property(nonatomic) _Bool hasH5URL; // @dynamic hasH5URL;
@property(nonatomic) _Bool hasPartnerName; // @dynamic hasPartnerName;
@property(nonatomic) _Bool hasPartnerSongId; // @dynamic hasPartnerSongId;
@property(copy, nonatomic) NSString *partnerName; // @dynamic partnerName;
@property(copy, nonatomic) NSString *partnerSongId; // @dynamic partnerSongId;

@end

