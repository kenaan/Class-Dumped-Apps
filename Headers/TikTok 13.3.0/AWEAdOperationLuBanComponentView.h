//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEAdOperationComponentViewProtocol-Protocol.h"

@class AWEAdOperationGuideStarView, AWEAwemeModel, NSString, UIImageView, UILabel;

@interface AWEAdOperationLuBanComponentView : UIView <AWEAdOperationComponentViewProtocol>
{
    CDUnknownBlockType _dismissBlock;
    NSString *_eventName;
    AWEAwemeModel *_model;
    UIImageView *_logoImageView;
    UIView *_titleContainerView;
    UILabel *_couponLabel;
    UILabel *_titleLabel;
    UIView *_evaluateContainerView;
    AWEAdOperationGuideStarView *_starView;
    UIView *_seperatorView;
    UILabel *_goodReputationLabel;
    UIView *_priceDetailContainer;
    UILabel *_priceLabel;
    UILabel *_packageLabel;
}

@property(retain, nonatomic) UILabel *packageLabel; // @synthesize packageLabel=_packageLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIView *priceDetailContainer; // @synthesize priceDetailContainer=_priceDetailContainer;
@property(retain, nonatomic) UILabel *goodReputationLabel; // @synthesize goodReputationLabel=_goodReputationLabel;
@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) AWEAdOperationGuideStarView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UIView *evaluateContainerView; // @synthesize evaluateContainerView=_evaluateContainerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *couponLabel; // @synthesize couponLabel=_couponLabel;
@property(retain, nonatomic) UIView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (void)componentTapped:(id)arg1;
- (id)priceAttributeStringWithPriceString:(id)arg1;
- (void)configWithModel:(id)arg1;
- (void)setupUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

