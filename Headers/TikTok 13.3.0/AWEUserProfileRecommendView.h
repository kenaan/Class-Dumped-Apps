//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AWEUserProfileRecommendView : UIView
{
    UIImageView *_recommendImageView;
    UILabel *_recommendLabel;
    UIView *_lineView;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) UIImageView *recommendImageView; // @synthesize recommendImageView=_recommendImageView;
- (void).cxx_destruct;
- (id)attributedStringWithHTMLString:(id)arg1;
- (void)configRecommendReason:(id)arg1;
- (id)init;

@end

