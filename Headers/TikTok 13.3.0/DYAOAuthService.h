//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DYAOAuthService : NSObject
{
}

+ (_Bool)OAuthAvailable:(unsigned long long)arg1;
+ (void)trackEvent:(id)arg1 params:(id)arg2 platform:(unsigned long long)arg3;
+ (id)OAuthForAccessTokenTask:(unsigned long long)arg1 configuration:(id)arg2;
+ (id)OAuthForBindTask:(unsigned long long)arg1;
+ (id)OAuthForLoginTask:(unsigned long long)arg1;
+ (void)startOAuthForPlatform:(unsigned long long)arg1 type:(unsigned long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

