//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWENetworkMessage-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "HTSAccountMessage-Protocol.h"

@class NSString;

@interface AWEUserListener : NSObject <AWEUserMessage, AWENetworkMessage, HTSAccountMessage>
{
}

+ (id)sharedInstance;
- (void)uploadTokenIfNeededWithPlatform:(unsigned long long)arg1 authInfo:(id)arg2 error:(id)arg3;
- (void)synchronizeCookiesWithExtension;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishLogout;
- (void)didFinishLogin;
- (void)didReceiveThirdPartyTokenForUploadAtPlatform:(unsigned long long)arg1 authInfo:(id)arg2 error:(id)arg3;
- (void)didReceiveApiResponse:(id)arg1 URL:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

