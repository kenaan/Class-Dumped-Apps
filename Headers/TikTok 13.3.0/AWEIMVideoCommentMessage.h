//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class AWEURLModel, NSString;

@interface AWEIMVideoCommentMessage : AWEIMMessage
{
    NSString *_commentID;
    NSString *_awemeID;
    NSString *_comment;
    AWEURLModel *_videoCover;
    long long _mediaType;
}

@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) AWEURLModel *videoCover; // @synthesize videoCover=_videoCover;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *awemeID; // @synthesize awemeID=_awemeID;
@property(copy, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
- (void).cxx_destruct;
- (id)getContentDict;
- (id)initWithContentDict:(id)arg1;

@end

