//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString;

@interface YTIMdeTitleRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool allowEmpty; // @dynamic allowEmpty;
@property(nonatomic) _Bool hasAllowEmpty; // @dynamic hasAllowEmpty;
@property(nonatomic) _Bool hasMaxUnicodeLength; // @dynamic hasMaxUnicodeLength;
@property(nonatomic) _Bool hasPlaceholder; // @dynamic hasPlaceholder;
@property(nonatomic) _Bool hasVideoTitle; // @dynamic hasVideoTitle;
@property(nonatomic) int maxUnicodeLength; // @dynamic maxUnicodeLength;
@property(retain, nonatomic) YTIFormattedString *placeholder; // @dynamic placeholder;
@property(copy, nonatomic) NSString *videoTitle; // @dynamic videoTitle;

@end

