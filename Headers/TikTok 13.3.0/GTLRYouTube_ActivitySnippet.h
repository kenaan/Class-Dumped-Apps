//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRDateTime, GTLRYouTube_ThumbnailDetails, NSString;

@interface GTLRYouTube_ActivitySnippet : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(copy, nonatomic) NSString *channelTitle; // @dynamic channelTitle;
@property(copy, nonatomic) NSString *descriptionProperty; // @dynamic descriptionProperty;
@property(copy, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) GTLRDateTime *publishedAt; // @dynamic publishedAt;
@property(retain, nonatomic) GTLRYouTube_ThumbnailDetails *thumbnails; // @dynamic thumbnails;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

