//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YTILikeButtonRenderer;

@interface YTReelLikeModel : NSObject
{
    int _status;
    NSString *_videoID;
    YTILikeButtonRenderer *_likeButtonRenderer;
    unsigned long long _requestID;
}

@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) YTILikeButtonRenderer *likeButtonRenderer; // @synthesize likeButtonRenderer=_likeButtonRenderer;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (void).cxx_destruct;

@end
