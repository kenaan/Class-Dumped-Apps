//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEHotSearchLabel, UIImageView, UILabel;

@interface AWEFeedHotSearchMoreView : UIView
{
    AWEHotSearchLabel *_contentLable;
    UILabel *_moreLabel;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) AWEHotSearchLabel *contentLable; // @synthesize contentLable=_contentLable;
- (void).cxx_destruct;
- (void)updateUIWithText:(id)arg1;
- (void)configureUIWithText:(id)arg1;

@end
