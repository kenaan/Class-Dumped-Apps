//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, NSString;

@interface HTSLiveDecorationModifyMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(copy, nonatomic) NSString *extra; // @dynamic extra;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;

@end

