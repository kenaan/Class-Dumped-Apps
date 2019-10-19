//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NFUILabel, NSString, UIButton, UILabel;
@protocol NFUIListEmptyViewDelegateProtocol;

@interface NFUIListEmptyView : UIView
{
    id <NFUIListEmptyViewDelegateProtocol> _delegate;
    UIView *_iconContainerView;
    UIView *_iconView;
    NSString *_iconViewText;
    NSString *_titleText;
    NSString *_descriptionText;
    NSString *_actionButtonText;
    UIButton *_actionButton;
    UILabel *_iconLabelView;
    NFUILabel *_titleLabel;
    NFUILabel *_descriptionLabel;
}

@property(retain, nonatomic) NFUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) NFUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *iconLabelView; // @synthesize iconLabelView=_iconLabelView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(copy, nonatomic) NSString *actionButtonText; // @synthesize actionButtonText=_actionButtonText;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) NSString *iconViewText; // @synthesize iconViewText=_iconViewText;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(nonatomic) __weak id <NFUIListEmptyViewDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionButtonTapped:(id)arg1;
- (void)updateConstraints;
- (void)setupAccessibility;
- (void)layoutSubviews;
- (void)presentInViewController:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
