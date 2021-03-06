//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEGeneralSearchModel, CAGradientLayer, NSString, UIButton, UIImageView, UILabel, YYLabel;

@interface AWESearchMovieCardView : UIView
{
    UIView *_movieTitleContainerView;
    UIView *_movieDescView;
    UILabel *_movieTitleLabel;
    UIImageView *_arrowImageView;
    UIImageView *_coverImageView;
    UILabel *_castInfoLabel;
    UILabel *_movieStyleLabel;
    UILabel *_releaseDateLabel;
    UILabel *_evaluateInfoLabel;
    UIButton *_buyTicketButton;
    UIView *_lineView;
    NSString *_hashtagID;
    NSString *_buyTicketURL;
    YYLabel *_tagLabel;
    CAGradientLayer *_tagBackgroundLayer;
    UILabel *_maskTitleLabel;
    UILabel *_maskDetailLabelLineOne;
    UILabel *_maskDetailLabelLineTwo;
    UILabel *_maskDetailLabelLineThree;
    UILabel *_maskEvaluateLabel;
    AWEGeneralSearchModel *_searchModel;
    NSString *_keyword;
}

+ (double)contentHeight:(id)arg1;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) AWEGeneralSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) UILabel *maskEvaluateLabel; // @synthesize maskEvaluateLabel=_maskEvaluateLabel;
@property(retain, nonatomic) UILabel *maskDetailLabelLineThree; // @synthesize maskDetailLabelLineThree=_maskDetailLabelLineThree;
@property(retain, nonatomic) UILabel *maskDetailLabelLineTwo; // @synthesize maskDetailLabelLineTwo=_maskDetailLabelLineTwo;
@property(retain, nonatomic) UILabel *maskDetailLabelLineOne; // @synthesize maskDetailLabelLineOne=_maskDetailLabelLineOne;
@property(retain, nonatomic) UILabel *maskTitleLabel; // @synthesize maskTitleLabel=_maskTitleLabel;
@property(retain, nonatomic) CAGradientLayer *tagBackgroundLayer; // @synthesize tagBackgroundLayer=_tagBackgroundLayer;
@property(retain, nonatomic) YYLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(copy, nonatomic) NSString *buyTicketURL; // @synthesize buyTicketURL=_buyTicketURL;
@property(copy, nonatomic) NSString *hashtagID; // @synthesize hashtagID=_hashtagID;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *buyTicketButton; // @synthesize buyTicketButton=_buyTicketButton;
@property(retain, nonatomic) UILabel *evaluateInfoLabel; // @synthesize evaluateInfoLabel=_evaluateInfoLabel;
@property(retain, nonatomic) UILabel *releaseDateLabel; // @synthesize releaseDateLabel=_releaseDateLabel;
@property(retain, nonatomic) UILabel *movieStyleLabel; // @synthesize movieStyleLabel=_movieStyleLabel;
@property(retain, nonatomic) UILabel *castInfoLabel; // @synthesize castInfoLabel=_castInfoLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *movieTitleLabel; // @synthesize movieTitleLabel=_movieTitleLabel;
@property(retain, nonatomic) UIView *movieDescView; // @synthesize movieDescView=_movieDescView;
@property(retain, nonatomic) UIView *movieTitleContainerView; // @synthesize movieTitleContainerView=_movieTitleContainerView;
- (void).cxx_destruct;
- (void)onMovieDescClick;
- (void)onMovieTitleClick;
- (void)goToHashtagDetail;
- (void)buyTicket;
- (void)resetPlaceholderUI;
- (void)addPlaceholderUI;
- (id)createMovieDetailLabel;
- (id)createMaskLabel;
- (void)configStatusLabel:(id)arg1;
- (void)configEvaluation:(id)arg1;
- (void)configMovieDetail:(id)arg1;
- (void)configMovieStatus:(id)arg1;
- (void)initiateUI;
- (_Bool)shouldShowBuyTicketEntrance:(id)arg1;
- (void)configWithModel:(id)arg1 keyword:(id)arg2;
- (id)init;

@end

