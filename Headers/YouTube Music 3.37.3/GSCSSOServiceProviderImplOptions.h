//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SSOService;

@interface GSCSSOServiceProviderImplOptions : NSObject
{
    id <SSOService> _ssoService;
}

+ (id)optionsWithSSOConfiguration:(id)arg1;
+ (id)optionsWithSSOService:(id)arg1;
@property(readonly, nonatomic) id <SSOService> ssoService; // @synthesize ssoService=_ssoService;
- (void).cxx_destruct;
- (id)initWithSSOService:(id)arg1;

@end

