//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDPlatformSDKBaseReq.h"

@class NSString;

@interface AWEOpenShareReq : BDPlatformSDKBaseReq
{
    NSString *_bundleId;
    NSString *_consumerKey;
    NSString *_state;
}

@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void).cxx_destruct;

@end

