//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol YTReelCreationViewControllerTransition <NSObject>
- (void)transitionWillDismissViewController:(id <YTReelCreationTransitionContext>)arg1 animated:(_Bool)arg2 transitionHost:(id <YTReelCreationViewControllerTransitionHost>)arg3;
- (void)transitionWillPresentViewController:(id <YTReelCreationTransitionContext>)arg1 animated:(_Bool)arg2 transitionHost:(id <YTReelCreationViewControllerTransitionHost>)arg3;

@optional
- (void)transitionDidDismissViewController:(id <YTReelCreationTransitionContext>)arg1;
- (void)transitionDidPresentViewController:(id <YTReelCreationTransitionContext>)arg1;
@end
