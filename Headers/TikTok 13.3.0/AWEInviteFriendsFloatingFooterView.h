//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MASViewConstraint, UIButton;

@interface AWEInviteFriendsFloatingFooterView : UIView
{
    _Bool _up;
    UIButton *_inviteAllButton;
    MASViewConstraint *_bottomConstraint;
}

@property(retain, nonatomic) MASViewConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic, getter=isUp) _Bool up; // @synthesize up=_up;
@property(readonly, nonatomic) UIButton *inviteAllButton; // @synthesize inviteAllButton=_inviteAllButton;
- (void).cxx_destruct;
- (void)setupWithContainerView:(id)arg1;
- (void)setUp:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

