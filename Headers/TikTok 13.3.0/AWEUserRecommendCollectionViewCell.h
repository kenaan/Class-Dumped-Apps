//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWEUserMessage-Protocol.h"

@class AWEAliasEditLabel, AWEUserModel, NSString, UIButton, UIImageView, UILabel, UIView, YYAnimatedImageView;

@interface AWEUserRecommendCollectionViewCell : UICollectionViewCell <AWEUserMessage>
{
    _Bool _isRecommendOther;
    _Bool _enableVerificationJudagement;
    _Bool _isFollowAnimating;
    CDUnknownBlockType _closeBtnBlock;
    CDUnknownBlockType _followBtnBlock;
    NSString *_enterFrom;
    UIView *_blurBackgroundView;
    UIButton *_closeButton;
    YYAnimatedImageView *_avatarView;
    AWEAliasEditLabel *_nameLabel;
    UILabel *_recommendLabel;
    UIButton *_followButton;
    UIView *_recommendView;
    UIImageView *_verificationIcon;
    AWEUserModel *_user;
}

+ (id)_defaultImage;
+ (struct CGSize)sizeOfOthersRecommendCellForMT;
+ (struct CGSize)sizeOfUserRecommendCell;
+ (id)identifier;
@property(nonatomic) _Bool isFollowAnimating; // @synthesize isFollowAnimating=_isFollowAnimating;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) UIImageView *verificationIcon; // @synthesize verificationIcon=_verificationIcon;
@property(retain, nonatomic) UIView *recommendView; // @synthesize recommendView=_recommendView;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) AWEAliasEditLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) YYAnimatedImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(nonatomic) _Bool enableVerificationJudagement; // @synthesize enableVerificationJudagement=_enableVerificationJudagement;
@property(nonatomic) _Bool isRecommendOther; // @synthesize isRecommendOther=_isRecommendOther;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) CDUnknownBlockType followBtnBlock; // @synthesize followBtnBlock=_followBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBtnBlock; // @synthesize closeBtnBlock=_closeBtnBlock;
- (void).cxx_destruct;
- (id)_idStrWithPrefix:(id)arg1;
- (id)_idStr;
- (void)trackEditRemarks:(id)arg1;
- (void)createEditAliasView;
- (void)_resetRelationBtnWithAnimation:(_Bool)arg1 needBlock:(_Bool)arg2 contactName:(id)arg3 isEnterprise:(_Bool)arg4;
- (void)_resetRelationBtnWithAnimation:(_Bool)arg1 needBlock:(_Bool)arg2;
- (void)_executeUnfollow;
- (void)_executeFollow;
- (void)constructConstraints;
- (void)_setupUI;
- (void)followBtnClicked:(id)arg1;
- (void)closeBtnClicked:(id)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg1;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)updateUIElements;
- (void)configWithUser:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

