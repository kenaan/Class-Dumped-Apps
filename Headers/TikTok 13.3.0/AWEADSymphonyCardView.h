//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BDSFBChoicesView, NSArray, NSString, UIButton, UIImageView, UILabel, UIVisualEffectView;
@protocol BDSNativeAdProtocol;

@interface AWEADSymphonyCardView : UIView
{
    id <BDSNativeAdProtocol> _nativeAd;
    NSString *_adTagText;
    double _topPostion;
    CDUnknownBlockType _cardWillAppearBlock;
    CDUnknownBlockType _cardDidDisappearBlock;
    UIVisualEffectView *_effectView;
    UIButton *_closeButton;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    BDSFBChoicesView *_choicesView;
    UILabel *_adTagLabel;
    UIView *_learnMoreView;
    UILabel *_learnMoreTipLabel;
}

+ (id)defaultSymphonyCardView;
@property(retain, nonatomic) UILabel *learnMoreTipLabel; // @synthesize learnMoreTipLabel=_learnMoreTipLabel;
@property(retain, nonatomic) UIView *learnMoreView; // @synthesize learnMoreView=_learnMoreView;
@property(retain, nonatomic) UILabel *adTagLabel; // @synthesize adTagLabel=_adTagLabel;
@property(retain, nonatomic) BDSFBChoicesView *choicesView; // @synthesize choicesView=_choicesView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(copy, nonatomic) CDUnknownBlockType cardDidDisappearBlock; // @synthesize cardDidDisappearBlock=_cardDidDisappearBlock;
@property(copy, nonatomic) CDUnknownBlockType cardWillAppearBlock; // @synthesize cardWillAppearBlock=_cardWillAppearBlock;
@property(nonatomic) double topPostion; // @synthesize topPostion=_topPostion;
@property(copy, nonatomic) NSString *adTagText; // @synthesize adTagText=_adTagText;
@property(retain, nonatomic) id <BDSNativeAdProtocol> nativeAd; // @synthesize nativeAd=_nativeAd;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *interactionRegisterViews;
- (void)closeButtonClicked:(id)arg1;
- (void)dismissSymphonyADCard;
- (void)showSymphonyADCard;
- (_Bool)needShowAdCard;
- (void)buildViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

