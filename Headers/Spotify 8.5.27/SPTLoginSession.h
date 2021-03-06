//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginSession-Protocol.h"

@class NSData, NSString;

@interface SPTLoginSession : NSObject <SPTLoginSession>
{
    NSString *_username;
    NSData *_storedCredential;
    NSString *_accessToken;
    double _accessTokenExpiration;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double accessTokenExpiration; // @synthesize accessTokenExpiration=_accessTokenExpiration;
@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, copy, nonatomic) NSData *storedCredential; // @synthesize storedCredential=_storedCredential;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic, getter=isAccessTokenValid) _Bool accessTokenValid;
- (id)initWithUsername:(id)arg1 storedCredential:(id)arg2 accessToken:(id)arg3 accessTokenExpiration:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

