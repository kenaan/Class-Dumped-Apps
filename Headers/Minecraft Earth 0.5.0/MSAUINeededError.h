//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSAAuthenticationError.h"

@class NSString;

@interface MSAUINeededError : MSAAuthenticationError
{
    NSString *_url;
    NSString *_prefillUsername;
    _Bool _addSignUpQueryString;
    long long _webScenario;
}

@property(readonly) long long webScenario; // @synthesize webScenario=_webScenario;
- (void).cxx_destruct;
- (id)requestWithConfiguration:(id)arg1;
- (id)initWithUrl:(id)arg1 prefillUserName:(id)arg2 scenario:(long long)arg3 addSignUpQueryString:(_Bool)arg4;
- (id)initWithSessionApprovalUrl:(id)arg1;
- (id)initWithInlineAuthUrl:(id)arg1;
- (id)initWithSignUpUrl:(id)arg1;
- (id)initWithSignInUrl:(id)arg1 prefillUsername:(id)arg2;

@end

