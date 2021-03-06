//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PostDetailViewController, RedditService;

@interface PostDetailNavigator : NSObject
{
    PostDetailViewController *_vc;
    RedditService *_service;
}

@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
@property(nonatomic) __weak PostDetailViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)navigateToAwardDetailsForComment:(id)arg1 parentPost:(id)arg2 correlationId:(id)arg3;
- (void)presentLoggedOutViewControllerForDownvoting;
- (void)presentLoggedOutViewControllerForUpvoting;
- (void)presentLoggedOutViewControllerForCommenting;
- (id)initWithViewController:(id)arg1 service:(id)arg2;

@end

