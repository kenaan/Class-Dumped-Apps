//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveTextFormat, NSMutableArray, NSString;

@interface HTSLiveText : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveTextFormat *defaultFormat; // @dynamic defaultFormat;
@property(copy, nonatomic) NSString *defaultPattern; // @dynamic defaultPattern;
@property(nonatomic) _Bool hasDefaultFormat; // @dynamic hasDefaultFormat;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) NSMutableArray *piecesArray; // @dynamic piecesArray;
@property(readonly, nonatomic) unsigned long long piecesArray_Count; // @dynamic piecesArray_Count;

@end

