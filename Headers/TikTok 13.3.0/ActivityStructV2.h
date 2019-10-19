//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class UrlStructV2;

@interface ActivityStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int diggCount; // @dynamic diggCount;
@property(nonatomic) _Bool hasDiggCount; // @dynamic hasDiggCount;
@property(nonatomic) _Bool hasMusicCoverURL; // @dynamic hasMusicCoverURL;
@property(nonatomic) _Bool hasMusicQrcodeURL; // @dynamic hasMusicQrcodeURL;
@property(nonatomic) _Bool hasUseMusicCount; // @dynamic hasUseMusicCount;
@property(retain, nonatomic) UrlStructV2 *musicCoverURL; // @dynamic musicCoverURL;
@property(retain, nonatomic) UrlStructV2 *musicQrcodeURL; // @dynamic musicQrcodeURL;
@property(nonatomic) int useMusicCount; // @dynamic useMusicCount;

@end

