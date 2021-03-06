//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCOAuth2ApprovalDataModel : NSObject
{
    _Bool _isConnected;
    _Bool _isCFSFlow;
    NSString *_approvalToken;
    NSString *_oauth2ClientName;
    NSString *_redirectUrl;
    NSString *_appIconUrl;
    NSArray *_scopesRequested;
    NSString *_clientId;
    NSString *_codeVerifier;
}

@property(readonly, nonatomic) _Bool isCFSFlow; // @synthesize isCFSFlow=_isCFSFlow;
@property(readonly, copy, nonatomic) NSString *codeVerifier; // @synthesize codeVerifier=_codeVerifier;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(readonly, copy, nonatomic) NSArray *scopesRequested; // @synthesize scopesRequested=_scopesRequested;
@property(readonly, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl=_appIconUrl;
@property(readonly, nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(readonly, copy, nonatomic) NSString *oauth2ClientName; // @synthesize oauth2ClientName=_oauth2ClientName;
@property(readonly, copy, nonatomic) NSString *approvalToken; // @synthesize approvalToken=_approvalToken;
- (void).cxx_destruct;
- (id)description;
- (id)initWithApprovalToken:(id)arg1 oauth2ClientName:(id)arg2 redirectUrl:(id)arg3 isConnected:(_Bool)arg4 appIconUrl:(id)arg5 scopesRequested:(id)arg6 clientId:(id)arg7 codeVerifier:(id)arg8 isCFSFlow:(_Bool)arg9;

@end

