//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEAwemeModel, AWECommentSearchViewController, NSString;

@protocol AWECommentSearchParentViewController <NSObject>
- (AWEAwemeModel *)awemeModel;
- (NSString *)referString;
- (void)dismissCommentSearchViewController:(AWECommentSearchViewController *)arg1 completion:(void (^)(void))arg2;
- (void)showCommentSearchViewController:(AWECommentSearchViewController *)arg1 completion:(void (^)(void))arg2;
@end

