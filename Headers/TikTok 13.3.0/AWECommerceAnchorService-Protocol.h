//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWECommerceAnchorPublishModel, NSArray, UIViewController;

@protocol AWECommerceAnchorService <HTSService>
@property(readonly, copy, nonatomic) NSArray *publishAnchorArray;
- (void)didClickAnchorWithType:(long long)arg1;
- (void)showAnchorContentPageWithController:(UIViewController *)arg1 source:(UIViewController *)arg2;
- (void)showAnchorPanelWithSource:(UIViewController *)arg1;
- (AWECommerceAnchorPublishModel *)anchorWithType:(long long)arg1;
- (_Bool)shouldShowAnchor;
- (_Bool)disabledAndGreyForType:(long long)arg1;
- (void)setDisabledAndGrey:(_Bool)arg1 forType:(long long)arg2;
- (void)fetchAnchorListIfNeeded;
- (void)fetchAnchorListAfterLaunch;
@end

