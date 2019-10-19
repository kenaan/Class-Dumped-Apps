//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWETabbarTextView.h"

#import "AWETabbarFriendInnerView-Protocol.h"

@class NSString, UIImageView;

@interface AWETabbarFriendTextView : AWETabbarTextView <AWETabbarFriendInnerView>
{
    UIImageView *_avatarImageView;
    CDUnknownBlockType _dismissAvatarBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissAvatarBlock; // @synthesize dismissAvatarBlock=_dismissAvatarBlock;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (id)avatarImage;
- (void)dismissAvatar;
- (void)showAvatar:(id)arg1;
- (_Bool)isAvatarShown;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithText:(id)arg1 dismissAvatarBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

