//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface VLKNrfAuthRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRequestData; // @dynamic hasRequestData;
@property(nonatomic) _Bool hasRequestType; // @dynamic hasRequestType;
@property(copy, nonatomic) NSData *requestData; // @dynamic requestData;
@property(nonatomic) int requestType; // @dynamic requestType;

@end

