//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface HTSLiveImage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *URLListArray; // @dynamic URLListArray;
@property(readonly, nonatomic) unsigned long long URLListArray_Count; // @dynamic URLListArray_Count;
@property(copy, nonatomic) NSString *avgColor; // @dynamic avgColor;
@property(nonatomic) long long height; // @dynamic height;
@property(nonatomic) int imageType; // @dynamic imageType;
@property(copy, nonatomic) NSString *openWebURL; // @dynamic openWebURL;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;
@property(nonatomic) long long width; // @dynamic width;

@end

