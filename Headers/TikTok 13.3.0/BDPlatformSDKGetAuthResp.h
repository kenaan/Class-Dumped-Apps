//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDPlatformSDKBaseResp.h"

@class NSOrderedSet, NSString;

@interface BDPlatformSDKGetAuthResp : BDPlatformSDKBaseResp
{
    NSString *_code;
    NSString *_state;
    NSOrderedSet *_grantedPermissions;
}

@property(retain, nonatomic) NSOrderedSet *grantedPermissions; // @synthesize grantedPermissions=_grantedPermissions;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)init;

@end

