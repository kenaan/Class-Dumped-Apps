//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRDateTime, GTLRYouTube_PlaylistLocalization, GTLRYouTube_ThumbnailDetails, NSArray, NSString;

@interface GTLRYouTube_PlaylistSnippet : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(copy, nonatomic) NSString *channelTitle; // @dynamic channelTitle;
@property(copy, nonatomic) NSString *defaultLanguage; // @dynamic defaultLanguage;
@property(copy, nonatomic) NSString *descriptionProperty; // @dynamic descriptionProperty;
@property(retain, nonatomic) GTLRYouTube_PlaylistLocalization *localized; // @dynamic localized;
@property(retain, nonatomic) GTLRDateTime *publishedAt; // @dynamic publishedAt;
@property(retain, nonatomic) NSArray *tags; // @dynamic tags;
@property(retain, nonatomic) GTLRYouTube_ThumbnailDetails *thumbnails; // @dynamic thumbnails;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
