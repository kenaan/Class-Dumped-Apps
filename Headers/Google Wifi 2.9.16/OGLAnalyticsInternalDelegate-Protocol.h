//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol OGLAnalyticsAccountMenuDelegate, OGLAnalyticsAccountParticleDelegate, OGLAnalyticsAccountParticleDiscDelegate, OGLAnalyticsDefaultAccountDelegate, OGLAnalyticsDrawerAccountHeaderDelegate, OGLAnalyticsExpressSignInDelegate, OGLAnalyticsPrivacyPolicyToSDelegate;

@protocol OGLAnalyticsInternalDelegate
- (id <OGLAnalyticsAccountParticleDiscDelegate>)accountParticleDiscDelegate;
- (id <OGLAnalyticsAccountParticleDelegate>)accountParticleDelegate;
- (id <OGLAnalyticsDefaultAccountDelegate>)defaultAccountDelegate;
- (id <OGLAnalyticsExpressSignInDelegate>)expressSignInDelegate;
- (id <OGLAnalyticsPrivacyPolicyToSDelegate>)privacyPolicyToSDelegate;
- (id <OGLAnalyticsDrawerAccountHeaderDelegate>)drawerAccountHeaderDelegate;
- (id <OGLAnalyticsAccountMenuDelegate>)accountMenuDelegate;
@end

