//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSString;

@interface GMSx_GMTTDMonetaryCost : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double amount; // @dynamic amount;
@property(copy, nonatomic) NSString *currencyCode; // @dynamic currencyCode;
@property(copy, nonatomic) NSString *formattedValue; // @dynamic formattedValue;
@property(nonatomic) _Bool hasAmount; // @dynamic hasAmount;
@property(nonatomic) _Bool hasCurrencyCode; // @dynamic hasCurrencyCode;
@property(nonatomic) _Bool hasFormattedValue; // @dynamic hasFormattedValue;

@end

