//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRDateTime, NSNumber, NSString;

@interface GTLRYouTube_LiveStreamSnippet : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(copy, nonatomic) NSString *descriptionProperty; // @dynamic descriptionProperty;
@property(retain, nonatomic) NSNumber *isDefaultStream; // @dynamic isDefaultStream;
@property(retain, nonatomic) GTLRDateTime *publishedAt; // @dynamic publishedAt;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

