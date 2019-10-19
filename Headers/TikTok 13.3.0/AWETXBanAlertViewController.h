//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class AWEUIButton, AWEUserModel, MASConstraint, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel, UIScrollView, UITextField, UITextView, UIView;

@interface AWETXBanAlertViewController : UIViewController <UITextFieldDelegate>
{
    _Bool _hasChangedAvatar;
    CDUnknownBlockType _transferToDetailBlock;
    CDUnknownBlockType _dismissBlock;
    unsigned long long _type;
    UIView *_containerView;
    UIScrollView *_scrollContainerView;
    UIView *_contentView;
    UITextView *_descriptionView;
    NSString *_descriptionText;
    UITextField *_inputNickNameView;
    UIImageView *_avatarView;
    UIImageView *_avatarDecorationView;
    UIView *_cameraIcon;
    NSMutableArray *_decorations;
    UIButton *_closeBtn;
    AWEUserModel *_user;
    UILabel *_titleLabel;
    AWEUIButton *_confirmBtn;
    UIImageView *_decorationChooseView;
    UIView *_announcementOpenBtn;
    long long _presentingAvatarDecorationIndex;
    UIImage *_originAvatar;
    UILabel *_moreLabel;
    MASConstraint *_containerCenterY;
}

@property(retain, nonatomic) MASConstraint *containerCenterY; // @synthesize containerCenterY=_containerCenterY;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UIImage *originAvatar; // @synthesize originAvatar=_originAvatar;
@property(nonatomic) long long presentingAvatarDecorationIndex; // @synthesize presentingAvatarDecorationIndex=_presentingAvatarDecorationIndex;
@property(nonatomic) _Bool hasChangedAvatar; // @synthesize hasChangedAvatar=_hasChangedAvatar;
@property(retain, nonatomic) UIView *announcementOpenBtn; // @synthesize announcementOpenBtn=_announcementOpenBtn;
@property(retain, nonatomic) UIImageView *decorationChooseView; // @synthesize decorationChooseView=_decorationChooseView;
@property(retain, nonatomic) AWEUIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) NSMutableArray *decorations; // @synthesize decorations=_decorations;
@property(retain, nonatomic) UIView *cameraIcon; // @synthesize cameraIcon=_cameraIcon;
@property(retain, nonatomic) UIImageView *avatarDecorationView; // @synthesize avatarDecorationView=_avatarDecorationView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UITextField *inputNickNameView; // @synthesize inputNickNameView=_inputNickNameView;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) UITextView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollContainerView; // @synthesize scrollContainerView=_scrollContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType transferToDetailBlock; // @synthesize transferToDetailBlock=_transferToDetailBlock;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)inputChanged:(id)arg1;
- (void)selectAvatar:(id)arg1;
- (void)handleKeyBoardDown:(id)arg1;
- (void)handleKeyBoardUp:(id)arg1;
- (void)selectDecoration:(id)arg1;
- (void)confirmChange:(id)arg1;
- (void)transferToDetail;
- (void)didTapAnnouncementShowMore;
- (void)selectInput;
- (void)dismiss;
- (void)loadSubviews;
- (void)dealloc;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

