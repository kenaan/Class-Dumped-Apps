//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/Post.h>

@class NSString, NSURL;

@interface Post (Additions)
+ (unsigned long long)postTypeForPost:(id)arg1;
+ (_Bool)shouldOverridePostType:(unsigned long long *)arg1 forPost:(id)arg2;
+ (_Bool)doesString:(id)arg1 matchPattern:(id)arg2;
@property(readonly, nonatomic) NSString *videoId;
@property(readonly, nonatomic) NSURL *downloadableMP4URL;
@property(readonly, nonatomic) _Bool isRedditVideoStream;
@property(readonly, nonatomic) Post *originalPost;
@property(readonly, nonatomic) NSString *v1AnalyticsPostTypeString;
@property(readonly, nonatomic) unsigned long long postType;
@property(readonly, nonatomic) NSString *shortDomain;
@end

