//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEPOIDetailCommentView, UIView;

@protocol AWEPOIDetailCommentViewDelegate <NSObject>
- (void)commentViewDidTapOnCommentContent:(AWEPOIDetailCommentView *)arg1;
- (void)commentView:(AWEPOIDetailCommentView *)arg1 didSelectPhotoAtIndex:(long long)arg2 sourceView:(UIView *)arg3;

@optional
- (void)commentViewDidTapExpandButton:(AWEPOIDetailCommentView *)arg1;
@end

