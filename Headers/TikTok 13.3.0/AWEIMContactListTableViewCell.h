//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEUIListTableViewCell.h"

@class AWEIMUser;

@interface AWEIMContactListTableViewCell : AWEUIListTableViewCell
{
    AWEIMUser *_user;
}

+ (double)suggestedHeight;
+ (long long)cellType;
@property(retain, nonatomic) AWEIMUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleTapAvatarGes:(id)arg1;
- (void)p_setupUI;
- (id)p_verifyBadgeImage;
- (void)p_refreshUI;
- (void)configWithUser:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

