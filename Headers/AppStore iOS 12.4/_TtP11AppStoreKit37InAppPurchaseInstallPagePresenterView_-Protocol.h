//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtP11AppStoreKit19ActionPresenterView_-Protocol.h"
#import "_TtP11AppStoreKit23ReloadablePresenterView_-Protocol.h"

@class NSString, _TtC11AppStoreKit24InAppPurchaseInstallPage;

@protocol _TtP11AppStoreKit37InAppPurchaseInstallPagePresenterView_ <_TtP11AppStoreKit19ActionPresenterView_, _TtP11AppStoreKit23ReloadablePresenterView_>
- (void)installFinished;
- (void)showSpinnerWithSubheaderText:(NSString *)arg1;
- (void)showWithProgress:(double)arg1 buttonText:(NSString *)arg2 subheaderText:(NSString *)arg3;
- (void)showPreInstallRedownloadWithSubheaderText:(NSString *)arg1;
- (void)showPreInstallWithButtonText:(NSString *)arg1 subheaderText:(NSString *)arg2;
- (void)showWithButtonText:(NSString *)arg1 subheaderText:(NSString *)arg2;
- (void)removeAllActionsForTarget:(id)arg1;
- (void)addButtonTappedTargetForMode:(long long)arg1 toTarget:(id)arg2 action:(SEL)arg3;
- (void)transitionTo:(long long)arg1 page:(_TtC11AppStoreKit24InAppPurchaseInstallPage *)arg2 pageTitle:(NSString *)arg3;
@end

