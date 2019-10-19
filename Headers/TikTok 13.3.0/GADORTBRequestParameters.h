//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOMediationCredentials;
@protocol GADAdNetworkExtras;

@interface GADORTBRequestParameters : NSObject
{
    GADOMediationCredentials *_credentials;
    id <GADAdNetworkExtras> _extras;
    struct GADOAdSize _adSize;
}

@property(readonly, nonatomic) struct GADOAdSize adSize; // @synthesize adSize=_adSize;
@property(readonly, nonatomic) id <GADAdNetworkExtras> extras; // @synthesize extras=_extras;
@property(readonly, nonatomic) GADOMediationCredentials *credentials; // @synthesize credentials=_credentials;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 adFormat:(long long)arg2 adSize:(struct GADOAdSize)arg3 adUnitID:(id)arg4 RTBAdapter:(id)arg5;

@end

